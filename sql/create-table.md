### Creating a Table

Once you've created a database, the next step is to create **tables**. A table is where your data is actually stored. Each table consists of **columns** (which define the type of data) and **rows** (which contain the actual records).

To create a table, use the `CREATE TABLE` statement.

```sql id="xq7m8k"
CREATE TABLE table_name (
    column1 DATA_TYPE,
    column2 DATA_TYPE,
    column3 DATA_TYPE
);
```

Replace `table_name` with the name of your table, and define each column with its corresponding data type.

#### Example

```sql id="l9d2pa"
CREATE TABLE Students (
    Id INT,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Email VARCHAR(100)
);
```

This creates a table named `Students` with five columns.

### Naming Tips

* Use descriptive table names.
* Use singular or plural names consistently (e.g., `Student` or `Students`).
* Give columns clear and meaningful names.
* Choose the appropriate data type for each column.

### Notes

* Every table should represent a single entity (such as `Students`, `Products`, or `Orders`).
* Each column stores one type of data.
* It's a good practice to define a **Primary Key** (such as `Id`) for every table. We'll cover primary keys in the next section.
* The order of columns matters only for how data is displayed or inserted without specifying column names, not for performance.

After creating the table, you're ready to insert data into it using the `INSERT INTO` statement.
