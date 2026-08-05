# Creating Your First Django Project

> — After setting up your virtual environment with Django installed, use `django-admin startproject` to scaffold a new project, then run the development server with `python manage.py runserver` to see it live at `127.0.0.1:8000`.

---

## Prerequisites

Before starting, make sure you have:

- Python installed
- A virtual environment created and activated (see [venv-django-setup.md](./venv-django-setup.md))
- Django installed inside that virtual environment

You should see the environment prefix in your terminal:

```
(myworld) $
```

---

## Step 1: Create the Project

Run the following command to generate a new Django project:

```bash
django-admin startproject myproject
```

- `django-admin` — Django's command-line utility for administrative tasks
- `startproject` — tells Django to scaffold a brand new project
- `myproject` — the name of your project (replace with whatever you like)

This creates a `myproject/` directory with Django's default file structure:

```
myproject/
├── manage.py
└── myproject/
    ├── __init__.py
    ├── asgi.py
    ├── settings.py
    ├── urls.py
    └── wsgi.py
```

**What these files do:**

- `manage.py` — a command-line tool that lets you interact with your project (run the server, migrate databases, etc.)
- `settings.py` — your project's configuration (installed apps, database settings, allowed hosts, etc.)
- `urls.py` — maps URLs to views (this is where URL routing lives)
- `wsgi.py` / `asgi.py` — entry points for deploying to a web server (you don't touch these much as a beginner)

---

## Step 2: Run the Development Server

Navigate into the project folder and start the server:

```bash
cd myproject
python manage.py runserver
```

- `cd myproject` — enter the project directory (where `manage.py` lives)
- `python manage.py runserver` — starts Django's built-in development server

You'll see output like:

```
Starting development server at http://127.0.0.1:8000/
Quit the server with CONTROL-C.
```

> **Note:** The development server is for local development only. Do NOT use it in production. Django comes with a lightweight server built-in so you can iterate quickly without setting up Apache or Nginx.

---

## Step 3: View It in Your Browser

Open your browser and go to:

```
http://127.0.0.1:8000
```

or equivalently:

```
http://localhost:8000
```

You should see Django's default welcome page with a rocket and the message:

**"The install worked successfully! Congratulations!"**

This means your first Django project is up and running. You just served a web page with Django.

---

## Quick Reference

```bash
# Make sure virtual environment is active
source myworld/bin/activate          # Unix/macOS
myworld\Scripts\activate.bat         # Windows

# Create a new project
django-admin startproject myproject

# Navigate into the project
cd myproject

# Start the development server
python manage.py runserver

# Open in browser
# http://127.0.0.1:8000
```

---

read [MVT.md](./intro-and-MVT.md) for how these pieces fit together.

---

## Common Gotcha

Running `python manage.py runserver` from the wrong directory. The `manage.py` file lives **inside** the project folder — you must `cd` into it first. If you run the command from outside, you'll get an error saying the command is not found.

---

## Source

Based on [W3Schools Django](https://www.w3schools.com/django).
