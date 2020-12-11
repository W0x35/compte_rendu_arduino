const navSlide = () => {
    const responsive = document.querySelector('.responsive');
    const nav = document.querySelector('.nav-links');
    const navLinks = document.querySelectorAll('.nav-links li');
    const navLinks_a = document.querySelectorAll('.nav-links li a');


    responsive.addEventListener('click', () => {
        nav.classList.toggle('nav-active');


        navLinks.forEach((link, index)=>{
            if (link.style.animation) {
                link.style.animation = '';
            } else {
                link.style.animation = `navLinkFade 0.5s ease forwards ${index / 7 + 0.4}s`;
            }
        });

        responsive.classList.toggle('toggle');

        
    });
    
    
}

navSlide();

