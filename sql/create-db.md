### Creating a Database

A **database** is a structured collection of data used to store, organize, and retrieve information efficiently. Before creating tables, inserting data, or defining relationships, you first need to create a database.

The SQL statement used to create a new database is:

```sql
CREATE DATABASE database_name;
```

Replace `database_name` with the name you want for your database.

#### Example

```sql
CREATE DATABASE SchoolDB;
```

This command creates a new database named **SchoolDB**.

#### Best Practices

* Use meaningful and descriptive names.
* Avoid spaces and special characters.
* Follow a consistent naming convention (e.g., `SchoolDB`, `InventoryDB`, `BlogDatabase`).

#### Common Use Cases

* Creating a database for a new application.
* Separating development, testing, and production environments.
* Organizing different projects into independent databases.

> **Note:** Creating a database only creates an empty container. You must create tables inside it before storing any data.
