# Facade Design Pattern

This repository contains a simple C++ example of the **Facade Design Pattern**.

## What is the Facade Pattern?

The Facade Pattern provides a **simple, unified interface** to a group of complex classes or subsystems.

Instead of making the client interact with every subsystem separately, we create one facade class. The facade handles the required steps internally and gives the client one easy method to call.

### Example in this project

The computer startup process involves multiple components:

- `harddrive` reads the required data.
- `ram` loads the data.
- `cpu` starts processing.
- `gpu` initializes.
- `operating_system` boots.

The `oncomputer` class acts as the facade. It contains objects of these subsystem classes and provides a single `execute()` method to coordinate the startup process.

So, in `main()`, the client only needs to write:

```cpp
oncomputer b;
b.execute();
```

The client does not need to know the internal startup sequence or call each subsystem separately.

## Facade vs Adapter

Both patterns sit between a client and other classes, but they solve different problems.

| Facade Pattern | Adapter Pattern |
|---|---|
| Hides the complexity of multiple classes or subsystems. | Makes incompatible interfaces work together. |
| Provides a simple, unified interface to the client. | Converts one interface into another interface expected by the client. |
| Focuses on simplifying how the client uses a system. | Focuses on compatibility between interfaces. |
| Example: one `execute()` call starts several computer components. | Example: an adapter converts data or method calls from an existing class into the format expected by the client. |

### Main difference

- **Adapter:** The client expects one interface, but an existing class provides a different interface. The adapter acts as a bridge between them.
- **Facade:** The subsystem classes may already work correctly, but using them directly is complicated. The facade hides those details and provides one simple entry point.

**In short:** Adapter is about *interface compatibility*, while Facade is about *hiding complexity and simplifying usage*.

## Files

- `main.cpp` — C++ implementation of the Facade Design Pattern.

## How to run

Compile and run using a C++ compiler:

```bash
g++ main.cpp -o main
./main
```

On Windows, run the generated executable:

```bash
g++ main.cpp -o main.exe
main.exe
```
