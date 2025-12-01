# C Programming T3 2025 - Study Guide

## Q1: User-Defined Functions vs Built-in Functions

**User-Defined Functions:**
- Functions created by the programmer for specific tasks
- Tailored to program requirements
- Improve code readability and reusability

**Differences:**
| Aspect | User-Defined | Built-in |
|--------|--------------|----------|
| Created by | Programmer | C library |
| Location | Source code | Library files |
| Customization | Full control | Pre-defined |

**Advantages:**
- Code reusability and modularity
- Easier debugging and maintenance
- Reduced code length
- Better organization
- Improved readability

---

## Q2: Iteration vs Recursion (4+ Differences)

| Difference | Iteration | Recursion |
|-----------|-----------|-----------|
| Definition | Repeats block using loops (for, while, do-while) | Function calls itself repeatedly |
| Base Condition | Loop termination condition | Base case in function |
| Memory | Uses loop variable, less memory | Uses call stack, more memory |
| Speed | Faster (no function call overhead) | Slower (function call overhead) |
| Code Simplicity | Simple to understand | Complex logic, harder to trace |
| Stack Overflow Risk | Low | High (if base case missing) |

**Example:**
- **Iteration:** `for(i=0; i<5; i++)` prints 0-4
- **Recursion:** `void print(int n) { if(n==0) return; print(n-1); }`

---

## Q3: Local vs Global Variables

**Local Variables:**
- Declared inside a function/block
- Scope: Only within that function/block
- Memory: Allocated on stack
- Lifetime: Destroyed after function exits

**Global Variables:**
- Declared outside all functions
- Scope: Entire program
- Memory: Allocated in data segment
- Lifetime: Entire program execution

**Preferred: Local Variables**
- **Why?** Avoid naming conflicts, reduce side effects, easier to maintain, better security

**Examples:**
```c
int global = 10;  // Global variable

void func() {
    int local = 5;  // Local variable - only accessible here
    printf("%d %d", global, local);  // Both accessible in function
}

int main() {
    printf("%d", global);   // ✓ Works
    printf("%d", local);    // ✗ Error - local not accessible
}
```

---

## Q4: Formal vs Actual Parameters

**Formal Parameters:**
- Declared in function definition
- Act as placeholders
- Receive values from actual parameters

**Actual Parameters:**
- Passed during function call
- Provide real values to formal parameters

**Example:**
```c
// Formal parameters: a, b
void add(int a, int b) {
    printf("Sum: %d", a + b);
}

int main() {
    int x = 5, y = 10;
    add(x, y);  // Actual parameters: x, y
    add(3, 7);  // Actual parameters: 3, 7
}
```

---

## Q5: Base Condition in Recursion

**Base Condition:**
- The termination condition for recursion
- Stops infinite recursive calls
- Must be checked first in recursive function

**If Base Condition is Missing:**
- Function keeps calling itself infinitely
- Stack overflow occurs
- Program crashes
- Memory exhausted

**Example:**
```c
// Correct - with base condition
int factorial(int n) {
    if (n == 0) return 1;  // Base condition ✓
    return n * factorial(n - 1);
}

// Wrong - infinite recursion
int factorial(int n) {
    return n * factorial(n - 1);  // No base condition ✗
}
```

---

## Q6: Arrays in C

**What is an Array?**
- Collection of homogeneous elements (same data type)
- Fixed size, contiguous memory
- Access elements using index (0-based)

**Memory Storage:**
- Elements stored in **contiguous memory blocks**
- Address of element: `Base_Address + (Index × Size_of_Element)`
- Example: `int arr[5]` occupies 20 bytes (5 × 4 bytes)

**Advantages:**
- Easy access using index
- Memory efficient
- Random access - O(1) time complexity
- Useful for storing multiple values

**Disadvantages:**
- Fixed size (can't grow dynamically)
- Wastage if fewer elements used
- Difficult insertion/deletion in middle
- Contiguous memory required
- Cannot store different data types

---

## Q7: Strings in C

**What is a String?**
- Array of characters
- Sequence of characters ending with null character

**Null Character (\\0):**
- Special character ASCII value 0
- Marks end of string
- Automatically added by compiler

**Significance of \\0:**
- Indicates where string ends
- Without it, string functions don't know when to stop
- Essential for string processing functions (strlen, strcpy, etc.)
- Memory requirement: actual characters + 1 for \\0

**Example:**
```c
char str[] = "Hello";  // Stored as: H e l l o \0 (6 bytes)
```

**String Comparison:**
```c
strcmp(str1, str2);  // Returns 0 if equal, <0 if str1<str2, >0 if str1>str2
```

**Sorting in Alphabetical Order:**
- Use `qsort()` with string comparison function
- Or use `strcmp()` in bubble sort

---

## Q8: Call by Value vs Call by Reference

**Call by Value:**
- **What:** Copy of actual parameter passed to function
- **Changes:** Don't affect original variable
- **Memory:** Creates separate copy
- **Syntax:** Pass variable directly

```c
void modify(int x) {
    x = 100;  // Changes only local copy
}

int main() {
    int a = 5;
    modify(a);
    printf("%d", a);  // Output: 5 (unchanged)
}
```

**Call by Reference:**
- **What:** Address of actual parameter passed to function
- **Changes:** Affect original variable
- **Memory:** No separate copy
- **Syntax:** Use pointers (`int *p`)

```c
void modify(int *x) {
    *x = 100;  // Changes original variable
}

int main() {
    int a = 5;
    modify(&a);
    printf("%d", a);  // Output: 100 (changed)
}
```

---

## Q9: Pointers - Why and Arithmetic Operations

**Why Use Pointers?**
- Dynamic memory allocation
- Pass variables by reference
- Create complex data structures (linked lists, trees)
- Efficient array/string handling
- Function pointers for callbacks
- Variable indirection

**Pointer Arithmetic Operations:**

| Operation | Syntax | Effect |
|-----------|--------|--------|
| Increment | `ptr++` | Move to next address (size of data type) |
| Decrement | `ptr--` | Move to previous address |
| Addition | `ptr + n` | Add n units (each unit = data type size) |
| Subtraction | `ptr - n` | Subtract n units |
| Difference | `ptr1 - ptr2` | Number of elements between pointers |

**Example:**
```c
int arr[] = {10, 20, 30};
int *ptr = arr;

ptr++;           // Points to 20 (moves 4 bytes)
ptr += 2;        // Points to 30
int diff = ptr - arr;  // diff = 2
```

---

## Q10: Null and Void Pointers

**Null Pointer:**
- Points to no address (address 0)
- Declared as: `int *ptr = NULL;`
- Used to indicate uninitialized or invalid pointer

**Void Pointer:**
- Generic pointer (can point to any data type)
- Declared as: `void *ptr;`
- Cannot be dereferenced directly without casting

**Comparison:**

| Aspect | Null Pointer | Void Pointer |
|--------|-------------|-------------|
| Value | Points to address 0 | Points to valid address |
| Dereference | Cannot dereference | Must cast before use |
| Purpose | Safety indicator | Generic pointer type |
| Use | Check if pointer valid | Accept any data type |

**Examples:**

```c
// Null Pointer
int *ptr = NULL;
if (ptr == NULL) {
    printf("Invalid pointer");
}

// Void Pointer
int x = 10;
void *vptr = &x;  // Can point to any type
int *iptr = (int *)vptr;  // Cast to int pointer
printf("%d", *iptr);  // Output: 10
```

**Use Cases:**
- **Null Pointer:** Safety checks, initialization
- **Void Pointer:** Dynamic memory allocation (malloc returns void*), generic functions

---

## Quick Revision Checklist

- [ ] Functions: Advantages, parameters, call mechanisms
- [ ] Iteration vs Recursion: Key differences, base condition
- [ ] Variables: Scope, lifetime, preference
- [ ] Arrays: Memory layout, pros/cons
- [ ] Strings: Null character significance, comparison
- [ ] Pointers: Arithmetic, null, void pointers
- [ ] Memory management concepts

---

**Good luck with your T3 exam! 🎯**
