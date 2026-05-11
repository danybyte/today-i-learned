Today I Learned about the `useState` hook in React, a fundamental tool for adding state to functional components.

## What is `useState`?

`useState` is a Hook that allows you to add React state to functional components. It returns a pair of values: the current state and a function that updates it.

## Why use `useState`?

Before Hooks, state could only be managed within class components. `useState` enables functional components to have their own mutable state, making them more powerful and allowing for cleaner, more concise code.

## How to use `useState`

1.  You need to import `useState` from React.
2.  Call `useState` inside your functional component. It takes the initial state as an argument and returns an array with two elements: the current state value and a function to update that value.

### Example with Objects

`useState` can also hold objects as state:

```jsx
import React, { useState } from 'react';

function UserProfile() {
  const [user, setUser] = useState({ name: 'Alice', age: 30 });

  const updateAge = () => {
    // When updating objects, it's common to spread the previous state
    // to ensure other properties are not lost.
    setUser({ ...user, age: user.age + 1 });
  };

  return (
    <div>
      <p>Name: {user.name}</p>
      <p>Age: {user.age}</p>
      <button onClick={updateAge}>Happy Birthday!</button>
    </div>
  );
}

export default UserProfile;
```

## Functional Updates

The `set` function (e.g., `setCount`, `setUser`) can also accept a function as an argument. This function will receive the *previous* state as its argument and should return the *new* state. This is especially useful when the new state depends on the previous state, as it helps avoid issues with stale closures in certain scenarios.

```jsx
import React, { useState } from 'react';

function FunctionalCounter() {
  const [count, setCount] = useState(0);

  const increment = () => {
    // Using a functional update to ensure we always get the latest state
    setCount(prevCount => prevCount + 1);
  };

  const decrement = () => {
    setCount(prevCount => prevCount - 1);
  };

  return (
    <div>
      <p>Count: {count}</p>
      <button onClick={increment}>Increment</button>
      <button onClick={decrement}>Decrement</button>
    </div>
  );
}

export default FunctionalCounter;
```
