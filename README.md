<div align="center">
<pre>
 ██████╗██████╗ ██████╗     ███╗   ███╗ ██████╗ ██████╗ ██╗   ██╗██╗     ███████╗███████╗
██╔════╝██╔══██╗██╔══██╗    ████╗ ████║██╔═══██╗██╔══██╗██║   ██║██║     ██╔════╝██╔════╝
██║     ██████╔╝██████╔╝    ██╔████╔██║██║   ██║██║  ██║██║   ██║██║     █████╗  ███████╗
██║     ██╔═══╝ ██╔═══╝     ██║╚██╔╝██║██║   ██║██║  ██║██║   ██║██║     ██╔══╝  ╚════██║
╚██████╗██║     ██║         ██║ ╚═╝ ██║╚██████╔╝██████╔╝╚██████╔╝███████╗███████╗███████║
 ╚═════╝╚═╝     ╚═╝         ╚═╝     ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝╚══════╝╚══════╝
</pre>
</div>


<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>CPP Modules 00-04</title>

<style>
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: "Segoe UI", sans-serif;
}

body {
    background: linear-gradient(135deg, #0f172a, #1e293b);
    color: #e2e8f0;
    padding: 40px;
}

/* Container */
.container {
    max-width: 1000px;
    margin: auto;
}

/* Header */
.header {
    text-align: center;
    margin-bottom: 50px;
}

.header h1 {
    font-size: 2.5rem;
    color: #38bdf8;
}

.header p {
    margin-top: 10px;
    color: #94a3b8;
}

/* Cards */
.card {
    background: rgba(255, 255, 255, 0.05);
    backdrop-filter: blur(10px);
    border-radius: 20px;
    padding: 20px 25px;
    margin-bottom: 20px;
    transition: 0.3s;
    border: 1px solid rgba(255,255,255,0.1);
}

.card:hover {
    transform: translateY(-5px);
    border-color: #38bdf8;
}

/* Titles */
.card h2 {
    color: #38bdf8;
    margin-bottom: 10px;
}

.card h3 {
    margin-top: 10px;
    color: #22c55e;
}

/* Lists */
ul {
    margin-left: 20px;
    margin-top: 5px;
}

li {
    margin: 4px 0;
}

/* Code blocks */
.code {
    background: #020617;
    padding: 15px;
    border-radius: 10px;
    font-family: monospace;
    margin-top: 10px;
    color: #38bdf8;
}

/* Footer */
.footer {
    text-align: center;
    margin-top: 50px;
    color: #94a3b8;
}
</style>
</head>

<body>

<div class="container">

    <div class="header">
        <h1>📚 CPP Modules (00 → 04)</h1>
        <p>Object-Oriented Programming in C++ — 42 Curriculum</p>
    </div>

    <div class="card">
        <h2>🧠 Overview</h2>
        <p>
            This repository contains my implementation of the C++ Modules (00 to 04) from the 42 curriculum.
            These modules introduce the core concepts of Object-Oriented Programming (OOP) in C++, 
            starting from basic syntax and progressing to inheritance and polymorphism.
        </p>
    </div>

    <div class="card">
        <h2>🔹 Module 00 — Basics of C++</h2>
        <h3>Concepts</h3>
        <ul>
            <li>Namespaces</li>
            <li>Classes & member functions</li>
            <li>Input / Output streams</li>
            <li>Static vs instance attributes</li>
        </ul>

        <h3>Exercises</h3>
        <ul>
            <li>megaphone</li>
            <li>phonebook</li>
        </ul>
    </div>

    <div class="card">
        <h2>🔹 Module 01 — Memory & References</h2>
        <h3>Concepts</h3>
        <ul>
            <li>Pointers & references</li>
            <li>Dynamic memory allocation (new / delete)</li>
            <li>File streams</li>
        </ul>

        <h3>Exercises</h3>
        <ul>
            <li>zombie</li>
            <li>brain</li>
            <li>replace</li>
        </ul>
    </div>

    <div class="card">
        <h2>🔹 Module 02 — Ad-hoc Polymorphism</h2>
        <h3>Concepts</h3>
        <ul>
            <li>Operator overloading</li>
            <li>Orthodox Canonical Form</li>
            <li>Fixed-point numbers</li>
        </ul>

        <h3>Exercises</h3>
        <ul>
            <li>Fixed</li>
            <li>Point</li>
            <li>BSP</li>
        </ul>
    </div>

    <div class="card">
        <h2>🔹 Module 03 — Inheritance</h2>
        <h3>Concepts</h3>
        <ul>
            <li>Inheritance</li>
            <li>Base and derived classes</li>
            <li>Constructors and destructors</li>
        </ul>

        <h3>Exercises</h3>
        <ul>
            <li>ClapTrap</li>
            <li>ScavTrap</li>
            <li>FragTrap</li>
        </ul>
    </div>

    <div class="card">
        <h2>🔹 Module 04 — Polymorphism</h2>
        <h3>Concepts</h3>
        <ul>
            <li>Virtual functions</li>
            <li>Abstract classes</li>
            <li>Interfaces</li>
            <li>Deep vs shallow copy</li>
        </ul>

        <h3>Exercises</h3>
        <ul>
            <li>Animal</li>
            <li>WrongAnimal</li>
            <li>Brain</li>
        </ul>
    </div>

    <div class="card">
        <h2>⚙️ Compilation</h2>
        <div class="code">
            c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
        </div>
    </div>

    <div class="card">
        <h2>🚀 Usage</h2>
        <div class="code">
            ./program
        </div>
    </div>

    <div class="card">
        <h2>📌 Notes</h2>
        <ul>
            <li>All projects follow the C++98 standard</li>
            <li>Focus on clean and structured OOP design</li>
            <li>No external libraries are used</li>
        </ul>
    </div>

    <div class="footer">
        👨‍💻 Abde Rahmane Skhairi (Abdo) — 1337 Student | Computer Science
    </div>

</div>

</body>
</html>
