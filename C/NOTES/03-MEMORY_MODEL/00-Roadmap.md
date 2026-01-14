
# The Memory Model
---

### **Phase 1: The Master Roadmap**

#### **1. The Grand Illusion: Virtual vs. Physical Memory**

* **Concept:** Why your program thinks it has 4GB of RAM even if your hardware only has 2GB.
* **Deep Dive:** Virtual Address Spaces, Pages, the MMU (Memory Management Unit), and why "Segmentation Faults" happen when you step out of bounds.

#### **2. The Anatomy of a Program (Memory Segments)**

* **Concept:** A running C program is divided into 5 specific zones. We will map them out.
* **The Zones:**
* **Text Segment:** (Code)
* **Initialized Data:** (Globals with values)
* **BSS:** (Globals without values)
* **Heap:** (Manual memory)
* **Stack:** (Automatic memory)



#### **3. The Stack (The CPU's Workspace)**

* **Concept:** How local variables and function calls work.
* **Deep Dive:** Stack Frames, the Stack Pointer (`RSP`), Return Addresses, auto-variable cleanup, and "Stack Overflow."

#### **4. Global & Static Memory (Data & BSS)**

* **Concept:** Where global variables live.
* **Deep Dive:** The difference between `int x = 10;` and `int x;`. Why one takes up disk space in your `.exe` file and the other doesn't. The keyword `static` and how it hides variables.

#### **5. The Heap (Dynamic Memory)**

* **Concept:** Memory you control manually (`malloc`, `free`).
* **Deep Dive:** How the OS finds free space. What is a Memory Leak? What is Heap Fragmentation? The difference between `brk` and `mmap` (System calls).

#### **6. Registers (The "Zero" Latency Memory)**

* **Concept:** Variables that never touch RAM.
* **Deep Dive:** The `register` keyword, compiler optimizations, and why these are the fastest things in the universe.

---

### **How to Proceed**

This is a complete map of C memory.
**Please confirm: Shall we start with Topic 1 (Virtual vs. Physical Memory) to set the foundation, or would you like to jump straight to the map of the segments (Topic 2)?**