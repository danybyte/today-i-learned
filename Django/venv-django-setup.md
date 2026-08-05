# Django Virtual Environment Setup

> — Before writing any Django code, you need two things: a **virtual environment** (isolated Python workspace) and the **Django framework** itself installed inside it.

---

## Why a Virtual Environment?

When you work on multiple Python projects, each one might need different packages or even different versions. A **virtual environment** creates a self-contained folder with its own Python and packages, so projects don't interfere with each other.

Think of it as a sandbox — whatever you install here stays here.

---

## Step 1: Create the Virtual Environment

Navigate to your project folder and run:

```bash
python -m venv myworld
```

- `python -m venv` — tells Python to create a virtual environment
- `myworld` — the name of the environment folder (you can name it anything)

This creates a `myworld/` directory with a few files inside:

```
myworld/
├── bin/          (or Scripts/ on Windows)
├── lib/
├── include/
├── pyvenv.cfg
└── ...
```

> **Key point:** The environment folder is just regular files — no magic. It's an isolated Python installation.

---

## Step 2: Activate the Virtual Environment

After creating it, you need to **activate** it before using it. The command differs by OS:

**Windows:**

```bash
myworld\Scripts\activate.bat
```

**Unix / macOS:**

```bash
source myworld/bin/activate
```

Once activated, your terminal prompt changes to something like:

```
(myworld) $
```

That `(myworld)` prefix tells you the environment is active. Every `pip install` from this point on goes only into this environment, not your global Python.

> **Note:** You need to activate the environment every time you open a new terminal session to work on your project.

---

## Step 3: Install Django

With the environment active, install Django:

```bash
python -m pip install Django
```

- `python -m pip` — runs pip through the current Python (which is now the virtual environment's Python)
- This downloads Django from PyPI and installs it inside `myworld/`

After this, you're ready to start creating Django projects.

---

## The Flow at a Glance

```bash
# 1. Go to your project directory
cd my-project

# 2. Create virtual environment
python -m venv myworld

# 3. Activate it (pick your OS)
source myworld/bin/activate          # Unix/macOS
myworld\Scripts\activate.bat         # Windows

# 4. Install Django
python -m pip install Django

# 5. You're ready to go
```

---

## Common Gotcha

Forgetting to activate the environment before installing packages. If you run `pip install Django` without activating, it installs globally on your system instead of inside the virtual environment. Always check for that `(myworld)` prefix in your terminal.

---

## Source

Based on [W3Schools Django](https://www.w3schools.com/django).
