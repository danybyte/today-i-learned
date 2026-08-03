# Django MVT Pattern Explained

>Django uses the **MVT (Model-View-Template)** pattern to organize web apps. Think of it as a three-part pipeline: *data → logic → presentation*.

---

## What is Django?

Django is a **Python web framework** that makes building websites easier. It handles the hard parts (database connections, user login, CRUD operations) so you can focus on your app's actual logic.

- Built on the **DRY principle** — *Don't Repeat Yourself*
- Comes with batteries included: auth system, ORM, admin panel, etc.
- Especially great for **database-driven** websites

---

## The MVT Pattern

MVT stands for **Model – View – Template**. It's Django's way of keeping your code organized by separating concerns into three layers:

```
User Request → URL → View → Model (data) → Template (HTML) → Response
```

Let's break each piece down.

---

## Model (The Data Layer)

The **Model** defines *what* your data looks like. It talks to the database for you using something called an **ORM** (Object Relational Mapping).

- **ORM** = a technique that lets you work with databases using Python objects instead of writing raw SQL
- You don't need to understand the database schema — Django abstracts it away
- Models live in a file called `models.py`

> **Why ORM matters:** Writing `SELECT * FROM users WHERE age > 25` becomes `User.objects.filter(age__gt=25)` — way more Pythonic and less error-prone.

---

## View (The Logic Layer)

The **View** is the *brain* of the operation. When a user makes a request:

- The view receives the **HTTP request**
- It grabs the relevant data by calling **models**
- It decides which **template** to use
- It sends the data + template back to the user

Views live in a file called `views.py` and are just regular Python functions (or class-based methods).

---

## Template (The Presentation Layer)

The **Template** is what the user actually sees. It's basically an **HTML file** with special Django tags mixed in.

```html
<h1>My Homepage</h1>
<p>My name is {{ firstname }}.</p>
```

- Uses standard HTML for layout
- Uses **Django template tags** (like `{{ variable }}`) to inject dynamic data
- Templates live in a `templates/` folder

---

## URLs (The Glue)

**URLs** connect incoming web requests to the right view. When someone visits a page:

- Django checks `urls.py`
- It matches the URL pattern to a view function
- That view takes over from there

---

## The Full Request Cycle (Step by Step)

Here's what happens when a user opens your Django site:

1. **Browser sends a URL request** → Django receives it
2. **Django checks `urls.py`** → finds the matching view
3. **View loads models** → fetches data from `models.py`
4. **View picks a template** → sends the data to the right template
5. **Template builds HTML** → combines data + HTML layout
6. **Finished HTML returns to browser** → user sees the page

```
Browser → urls.py → views.py → models.py → templates/ → Browser
```

---

## Quick Reference: File Layout

```
myproject/
├── models.py      ← Data definitions (what your data looks like)
├── views.py       ← Business logic (what to do with requests)
├── urls.py        ← URL routing (which URL goes where)
└── templates/     ← HTML files with Django tags
```

---

## Django History (Fun Fact)

- Created in **2003** by *Lawrence Journal-World* newspaper
- Built to meet tight newspaper deadlines while satisfying experienced devs
- First public release: **July 2005**
- Named after guitarist **Django Reinhardt**

---

## Source

Based on [W3Schools Django Introduction](https://www.w3schools.com/django/django_intro.php).
