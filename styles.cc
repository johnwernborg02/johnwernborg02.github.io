:root {
    --background: #f4f1ea;
    --surface: #ffffff;
    --text: #172033;
    --muted: #5f6878;
    --accent: #456b8c;
    --dark: #101827;
    --border: #dfe3e8;
}

* {
    box-sizing: border-box;
}

html {
    scroll-behavior: smooth;
}

body {
    margin: 0;
    color: var(--text);
    background: var(--background);
    font-family: Arial, Helvetica, sans-serif;
    line-height: 1.6;
}

a {
    color: inherit;
}

.hero {
    min-height: 70vh;
    padding: 0 7%;
    color: white;
    background:
        linear-gradient(135deg, rgba(16, 24, 39, 0.98), rgba(38, 62, 82, 0.9));
}

nav {
    display: flex;
    align-items: center;
    justify-content: space-between;
    max-width: 1200px;
    margin: auto;
    padding: 28px 0;
}

.logo {
    font-size: 1.1rem;
    font-weight: bold;
    text-decoration: none;
}

.nav-links {
    display: flex;
    gap: 28px;
}

.nav-links a {
    text-decoration: none;
}

.hero-content {
    max-width: 850px;
    margin: 10vh auto 0;
}

.hero h1 {
    max-width: 750px;
    margin: 10px 0 20px;
    font-size: clamp(2.8rem, 7vw, 5.5rem);
    line-height: 1;
}

.hero-content > p:not(.eyebrow) {
    max-width: 650px;
    color: #dce5ed;
    font-size: 1.2rem;
}

.eyebrow,
.tag {
    color: var(--accent);
    font-size: 0.8rem;
    font-weight: bold;
    letter-spacing: 0.12em;
    text-transform: uppercase;
}

.hero .eyebrow {
    color: #a8cbe6;
}

.button {
    display: inline-block;
    margin-top: 20px;
    padding: 12px 20px;
    color: var(--dark);
    background: white;
    border-radius: 6px;
    font-weight: bold;
    text-decoration: none;
}

main {
    max-width: 1200px;
    margin: auto;
    padding: 90px 7%;
}

.section-heading {
    margin-bottom: 35px;
}

.section-heading h2,
.about h2 {
    margin: 4px 0;
    font-size: 2.4rem;
}

.project-grid {
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 28px;
}

.project-card {
    overflow: hidden;
    background: var(--surface);
    border: 1px solid var(--border);
    border-radius: 12px;
    box-shadow: 0 10px 30px rgba(16, 24, 39, 0.06);
}

.project-card img {
    display: block;
    width: 100%;
    height: 250px;
    object-fit: cover;
    background: #d9dde2;
}

.project-content {
    padding: 25px;
}

.project-content h3 {
    margin: 5px 0 10px;
    font-size: 1.5rem;
}

.project-content p {
    color: var(--muted);
}

.project-content .tag {
    color: var(--accent);
}

.project-links {
    display: flex;
    flex-wrap: wrap;
    gap: 18px;
    margin-top: 20px;
}

.project-links a {
    color: var(--accent);
    font-weight: bold;
}

.about {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 60px;
    margin-top: 100px;
    padding-top: 50px;
    border-top: 1px solid var(--border);
}

footer {
    padding: 60px 7%;
    color: white;
    text-align: center;
    background: var(--dark);
}

footer a {
    color: #b8d8f0;
}

@media (max-width: 750px) {
    .nav-links {
        display: none;
    }

    .project-grid,
    .about {
        grid-template-columns: 1fr;
    }

    .hero {
        min-height: 620px;
    }

    .project-card img {
        height: 210px;
    }
}
