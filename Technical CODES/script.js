// You can add JavaScript functionality here if needed
// For example, smooth scrolling to section links
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
        e.preventDefault();

        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        });
    });
});
// You can add JavaScript functionality here if needed
// For example, changing background images dynamically
const backgrounds = ['background1.jpg', 'background2.jpg', 'background3.jpg']; // Array of background images
let currentBgIndex = 0;

function changeBackground() {
    document.body.style.backgroundImage = `url(${backgrounds[currentBgIndex]})`;
    currentBgIndex = (currentBgIndex + 1) % backgrounds.length;
}

// Change background every 5 seconds
setInterval(changeBackground, 5000);
