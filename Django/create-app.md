# Creating a Django App

> — A Django project is made up of one or more **apps**. Use `python manage.py startapp <appname>` to create a new app inside your project directory.

---

## Project vs App

Before diving in, understand the distinction:

- A **project** is the entire website (the one you created with `django-admin startproject`)
- An **app** is a module that handles a specific feature (e.g., a members section, a blog, a store)

A project can contain multiple apps, and an app can even be reused across different projects. This is where Django's **reusability** (DRY principle) shines.

---

## Step 1: Activate the Virtual Environment

Open a terminal and activate your virtual environment:

```bash
source myworld/bin/activate          # Unix/macOS
myworld\Scripts\activate.bat         # Windows
```

Make sure you see the environment prefix in your terminal:

```
(myworld) $
```

---

## Step 2: Navigate to the Project Directory

Move into the folder where your `manage.py` file lives:

```bash
cd myproject
```

> **Important:** The app will be created inside your current working directory. Make sure you're in the project root (the folder containing `manage.py`), not inside the inner `myproject/` subfolder.

---

## Step 3: Create the App

Run the following command:

```bash
python manage.py startapp members
```

- `python manage.py` — Django's management utility (must be run from the project root)
- `startapp` — tells Django to generate the boilerplate for a new app
- `members` — the name of your app (replace with whatever you need)

This creates a `members/` directory with the following structure:

```
members/
├── __init__.py
├── admin.py
├── apps.py
├── migrations/
│   └── __init__.py
├── models.py
├── tests.py
└── views.py
```

**What these files do:**

- `models.py` — define your database tables here (data models)
- `views.py` — write the logic that handles requests and returns responses
- `admin.py` — register your models to manage them in Django's admin panel
- `apps.py` — app configuration (Django auto-fills this)
- `migrations/` — stores database migration files (auto-generated when you change models)
- `tests.py` — write your tests here

---

## Step 4: Register the App in the Project

Creating the app isn't enough — you need to tell the project it exists. Open `myproject/settings.py` and add your app to the `INSTALLED_APPS` list:

```python
INSTALLED_APPS = [
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
    'members',   # <-- add this line
]
```

Without this step, Django won't recognize your app — templates won't load, models won't migrate, and URLs won't resolve.

---

## Quick Reference

```bash
# Make sure virtual environment is active
source myworld/bin/activate          # Unix/macOS
myworld\Scripts\activate.bat         # Windows

# Navigate to the project root
cd myproject

# Create a new app
python manage.py startapp members

# Don't forget to add 'members' to INSTALLED_APPS in settings.py
```

---

## What Does the File Look Like Now?

After creating the app, your project structure looks like this:

```
myproject/
├── manage.py
├── myproject/
│   ├── __init__.py
│   ├── settings.py
│   ├── urls.py
│   └── wsgi.py
└── members/          <-- new app
    ├── __init__.py
    ├── admin.py
    ├── apps.py
    ├── migrations/
    ├── models.py
    ├── tests.py
    └── views.py
```

---

## Source

Based on [W3Schools Django Tutorial](https://www.w3schools.com/django).
