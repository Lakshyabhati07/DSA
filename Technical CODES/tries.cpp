#include<bits/stdc++.h>
using namespace std;

class trieNode{
    public:

        char data;
        trieNode* child[26];
        bool isTerminal;

        trieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                child[i]=NULL;
            }
            isTerminal=false;
        }

};

class Trie{
public:
    trieNode* root;

    Trie(){
        root=new trieNode('\0');
    }
    void insertutil( trieNode* root,string word)
    {
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }    

          int idx=word[0]-'A'; 
          trieNode* child;

          if(root->child[idx]!=NULL){
            child=root->child[idx];

          } 

          else{
            //absent
            child = new trieNode(word[0]);
            root->child[idx] = child;
          }
//recursion
                insertutil(child,word.substr(1));
    }

    void insertword(string word){       
            insertutil(root,word);

    }

    //search
    bool searchutil(trieNode* root,string word){

            if(word.length()==0){
                return root->isTerminal;
            }

            int idx = word[0]-'A';
            trieNode* child;

            if(root->isTerminal!=NULL){
                child=root->child[idx];
            }

            else{
                return false;

            }

            searchutil(child,word.substr(1));

    }

    bool searchword(string word){
        return searchutil(root,word);
    }



};

int main(){

    Trie *t=new Trie();
    t->insertword("ABCD");

}