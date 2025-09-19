console.log("4th Sem Notes Site Loaded!");

// ===== Dark Mode Toggle =====
const darkModeBtn = document.getElementById('darkModeToggle');
darkModeBtn.addEventListener('click', () => {
    document.body.classList.toggle('dark-mode');
});

// ===== Search Filter =====
const searchBar = document.getElementById('searchBar');
const subjectCards = document.querySelectorAll('.subject-card');

searchBar.addEventListener('input', (e) => {
    const query = e.target.value.toLowerCase();

    subjectCards.forEach(card => {
        const subject = card.dataset.subject.toLowerCase();
        const pdfLinks = Array.from(card.querySelectorAll('li a'));
        let matchFound = false;

        pdfLinks.forEach(link => {
            if (link.textContent.toLowerCase().includes(query)) {
                link.style.display = 'inline-block';
                matchFound = true;
            } else {
                link.style.display = 'none';
            }
        });

        card.style.display = matchFound ? 'block' : 'none';
    });
});
