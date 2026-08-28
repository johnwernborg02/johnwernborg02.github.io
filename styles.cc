/* =========================
   Färger och grundinställningar
   ========================= */

:root {
    --navy: #102a43;
    --navy-light: #174a70;
    --blue: #2878a8;
    --blue-hover: #1d638e;
    --sky: #dff2fb;
    --sky-light: #f3faff;
    --surface: #ffffff;
    --text: #17324d;
    --muted: #5d7488;
    --border: #bfdbea;
    --shadow: 0 16px 40px rgba(16, 42, 67, 0.11);
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
    background:
        radial-gradient(
            circle at 10% 15%,
            rgba(117, 196, 229, 0.28),
            transparent 32rem
        ),
        linear-gradient(180deg, var(--sky-light), var(--sky));
    font-family:
        Inter, "Segoe UI", Roboto, Helvetica, Arial, sans-serif;
    line-height: 1.65;
}

img {
    max-width: 100%;
}

a {
    color: inherit;
}


/* =========================
   Sidhuvud och navigation
   ========================= */

.hero {
    position: relative;
    min-height: 680px;
    padding: 0 7%;
    overflow: hidden;
    color: var(--navy);
    background:
        radial-gradient(
            circle at 78% 35%,
            rgba(90, 176, 216, 0.35),
            transparent 25rem
        ),
        linear-gradient(135deg, #eefaff 0%, #cceaf7 100%);
}

/* Dekorativ cirkel i bakgrunden */

.hero::before {
    position: absolute;
    top: 120px;
    right: -130px;
    width: 500px;
    height: 500px;
    content: "";
    background: linear-gradient(
        145deg,
        rgba(40, 120, 168, 0.18),
        rgba(16, 42, 67, 0.05)
    );
    border: 1px solid rgba(40, 120, 168, 0.15);
    border-radius: 50%;
}

.hero::after {
    position: absolute;
    right: 14%;
    bottom: 70px;
    width: 180px;
    height: 180px;
    content: "";
    background: rgba(255, 255, 255, 0.35);
    border: 1px solid rgba(255, 255, 255, 0.65);
    border-radius: 32px;
    transform: rotate(18deg);
}

nav {
    position: relative;
    z-index: 10;
    display: flex;
    align-items: center;
    justify-content: space-between;
    max-width: 1200px;
    margin: auto;
    padding: 18px 25px;
    background: rgba(255, 255, 255, 0.74);
    border: 1px solid rgba(255, 255, 255, 0.9);
    border-radius: 0 0 18px 18px;
    box-shadow: 0 8px 30px rgba(16, 42, 67, 0.08);
    backdrop-filter: blur(12px);
}

.logo {
    color: var(--navy);
    font-size: 1.1rem;
    font-weight: 750;
    letter-spacing: -0.02em;
    text-decoration: none;
}

.nav-links {
    display: flex;
    gap: 8px;
}

.nav-links a {
    padding: 8px 14px;
    color: var(--navy);
    border-radius: 8px;
    font-size: 0.95rem;
    font-weight: 600;
    text-decoration: none;
    transition: 0.2s ease;
}

.nav-links a:hover {
    color: white;
    background: var(--navy);
}


/* =========================
   Introduktion
   ========================= */

.hero-content {
    position: relative;
    z-index: 2;
    max-width: 820px;
    margin: 125px auto 0;
}

.eyebrow,
.tag {
    margin-bottom: 8px;
    color: var(--blue);
    font-size: 0.78rem;
    font-weight: 750;
    letter-spacing: 0.14em;
    text-transform: uppercase;
}

.hero h1 {
    max-width: 800px;
    margin: 0 0 25px;
    color: var(--navy);
    font-size: clamp(3rem, 7vw, 5.8rem);
    font-weight: 750;
    letter-spacing: -0.055em;
    line-height: 0.98;
}

.hero-content > p:not(.eyebrow) {
    max-width: 630px;
    margin-bottom: 30px;
    color: #385970;
    font-size: 1.2rem;
}

.button {
    display: inline-block;
    padding: 13px 22px;
    color: white;
    background: var(--navy);
    border: 2px solid var(--navy);
    border-radius: 9px;
    box-shadow: 0 8px 22px rgba(16, 42, 67, 0.18);
    font-weight: 700;
    text-decoration: none;
    transition:
        transform 0.2s ease,
        background 0.2s ease,
        box-shadow 0.2s ease;
}

.button:hover {
    background: var(--navy-light);
    box-shadow: 0 12px 28px rgba(16, 42, 67, 0.25);
    transform: translateY(-2px);
}


/* =========================
   Huvudinnehåll
   ========================= */

main {
    max-width: 1250px;
    margin: auto;
    padding: 100px 7%;
}

section {
    scroll-margin-top: 40px;
}

.section-heading {
    max-width: 650px;
    margin-bottom: 38px;
}

.section-heading h2,
.about h2 {
    margin: 0;
    color: var(--navy);
    font-size: clamp(2.2rem, 5vw, 3.2rem);
    letter-spacing: -0.04em;
    line-height: 1.1;
}


/* =========================
   Projektkort
   ========================= */

.project-grid {
    display: grid;
    grid-template-columns: repeat(2, minmax(0, 1fr));
    gap: 28px;
}

.project-card {
    position: relative;
    overflow: hidden;
    background: rgba(255, 255, 255, 0.88);
    border: 1px solid rgba(178, 214, 231, 0.9);
    border-radius: 18px;
    box-shadow: var(--shadow);
    transition:
        transform 0.25s ease,
        box-shadow 0.25s ease;
}

.project-card::before {
    position: absolute;
    z-index: 2;
    top: 0;
    left: 0;
    width: 100%;
    height: 5px;
    content: "";
    background: linear-gradient(90deg, var(--navy), #57acd2);
}

.project-card:hover {
    box-shadow: 0 22px 50px rgba(16, 42, 67, 0.17);
    transform: translateY(-6px);
}

.project-card img {
    display: block;
    width: 100%;
    height: 270px;
    object-fit: cover;
    background: #c5e2ef;
    transition: transform 0.4s ease;
}

.project-card:hover img {
    transform: scale(1.025);
}

.project-content {
    padding: 28px;
}

.project-content h3 {
    margin: 2px 0 12px;
    color: var(--navy);
    font-size: 1.55rem;
    letter-spacing: -0.025em;
    line-height: 1.2;
}

.project-content p {
    color: var(--muted);
}

.project-content .tag {
    margin: 0 0 8px;
    color: var(--blue);
}

.project-links {
    display: flex;
    flex-wrap: wrap;
    gap: 12px;
    margin-top: 24px;
}

.project-links a {
    display: inline-block;
    padding: 9px 14px;
    color: var(--navy);
    background: #e5f4fb;
    border: 1px solid #b6dceb;
    border-radius: 7px;
    font-size: 0.92rem;
    font-weight: 700;
    text-decoration: none;
    transition: 0.2s ease;
}

.project-links a:hover {
    color: white;
    background: var(--navy);
    border-color: var(--navy);
}

.coming-soon {
    display: inline-block;
    padding: 9px 14px;
    color: var(--muted);
    background: #edf5f8;
    border-radius: 7px;
    font-size: 0.92rem;
}


/* =========================
   Om mig
   ========================= */

.about {
    display: grid;
    grid-template-columns: 0.9fr 1.1fr;
    gap: 70px;
    align-items: center;
    margin-top: 110px;
    padding: 55px;
    background:
        linear-gradient(
            135deg,
            rgba(255, 255, 255, 0.94),
            rgba(224, 244, 252, 0.94)
        );
    border: 1px solid var(--border);
    border-radius: 22px;
    box-shadow: var(--shadow);
}

.about > p {
    margin: 0;
    color: var(--muted);
    font-size: 1.08rem;
}


/* =========================
   Sidfot
   ========================= */

footer {
    position: relative;
    padding: 70px 7%;
    overflow: hidden;
    color: #d9ebf5;
    text-align: center;
    background:
        radial-gradient(
            circle at 20% 20%,
            rgba(66, 144, 184, 0.28),
            transparent 25rem
        ),
        var(--navy);
}

footer h2 {
    margin: 0 0 12px;
    color: white;
    font-size: 2rem;
}

footer a {
    color: #9ed2ea;
    font-weight: 650;
    text-decoration: none;
}

footer a:hover {
    color: white;
    text-decoration: underline;
}


/* =========================
   Mobilanpassning
   ========================= */

@media (max-width: 800px) {
    .hero {
        min-height: 650px;
    }

    nav {
        padding: 17px 18px;
    }

    .nav-links {
        display: none;
    }

    .hero-content {
        margin-top: 100px;
    }

    .project-grid,
    .about {
        grid-template-columns: 1fr;
    }

    .about {
        gap: 25px;
        padding: 35px 28px;
    }

    .project-card img {
        height: 220px;
    }
}

@media (max-width: 480px) {
    .hero,
    main {
        padding-right: 5%;
        padding-left: 5%;
    }

    .hero h1 {
        font-size: 3.2rem;
    }

    .hero-content > p:not(.eyebrow) {
        font-size: 1.05rem;
    }

    main {
        padding-top: 70px;
    }

    .project-content {
        padding: 23px;
    }
}
