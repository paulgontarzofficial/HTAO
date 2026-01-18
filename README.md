# Hacking: The Art of Exploitation — Study & Lab Repository

This repository contains hands-on code, notes, and walkthroughs based on  
**_Hacking: The Art of Exploitation (2nd Edition)_ by Jon Erickson**.

The goal of this project is to deeply understand **low-level programming, memory corruption, exploitation techniques, and system internals** by recreating and expanding upon the concepts presented in the book.

> ⚠️ **Educational Use Only**  
> This repository exists solely for educational, defensive, and research purposes.  
> Do not use these techniques on systems you do not own or have explicit permission to test.

---

## Repository Goals

- Build strong intuition for **C, assembly, and memory**
- Understand **why vulnerabilities exist**, not just how to exploit them
- Practice **manual exploitation** using GDB and low-level tooling
- Bridge classic exploitation concepts to **modern systems**

---

## Chapter Breakdown

### Chapter 0 — Introduction
Introduces the hacker mindset, problem-solving philosophy, and learning approach used throughout the book. Emphasizes understanding systems deeply rather than relying on tools or automation.

---

### Chapter 1 — Programming
Covers foundational C programming concepts required for exploitation:
- Variables and data types
- Control flow
- Functions and stack frames
- Compilation and debugging basics

This chapter establishes the baseline needed to reason about memory and execution flow.

---

### Chapter 2 — Programming Continued
Expands into:
- Pointers and pointer arithmetic
- Arrays and strings
- Memory layout in C programs
- Common programming mistakes

Understanding this chapter is critical for identifying and exploiting memory corruption bugs.

---

### Chapter 3 — Exploitation
Introduces classic exploitation concepts:
- Stack-based buffer overflows
- Saved return addresses
- Instruction pointer control
- Payload construction

This chapter demonstrates how simple programming errors can lead to full program control.

---

### Chapter 4 — Shellcode
Focuses on payload development:
- Writing position-independent shellcode
- System calls
- Avoiding null bytes
- Assembly-level control

You learn how attackers turn instruction pointer control into meaningful execution.

---

### Chapter 5 — Networking
Explores low-level networking concepts:
- Sockets
- Packet structures
- Client/server communication
- Raw packet manipulation

Provides the foundation for sniffing, spoofing, and network-based attacks.

---

### Chapter 6 — Shellcode in Networking
Combines shellcode with networking:
- Bind shells
- Reverse shells
- Network-aware payloads

Demonstrates how exploits transition from local execution to remote access.

---

### Chapter 7 — Exploitation Techniques
Introduces more advanced exploitation ideas:
- Environment variables
- NOP sleds
- Memory reliability
- Exploit optimization

This chapter focuses on making exploits **reliable**, not just functional.

---

### Chapter 8 — Cryptology
Covers basic cryptographic concepts:
- Hashing
- Encryption vs encoding
- Common cryptographic mistakes
- Weak implementations

Emphasizes how misunderstanding cryptography leads to exploitable systems.

---

### Chapter 9 — Writing Your Own Vulnerable Programs
Teaches how vulnerabilities are introduced:
- Poor input validation
- Unsafe standard library functions
- Logic flaws

Understanding how bugs are created makes exploitation and detection significantly easier.

---

### Chapter 10 — Reverse Engineering
Introduces reverse engineering fundamentals:
- Disassembly
- Understanding compiler output
- Analyzing binaries without source code

This chapter builds the skillset needed to analyze real-world software.

---

## Environment & Tooling

This repository primarily targets **Linux-based systems** and uses:
- `gcc`
- `gdb`
- `objdump`
- `nasm`
- `python3`

Many examples intentionally disable modern protections (ASLR, NX, PIE) **for educational clarity**, and modern mitigations are discussed alongside them.

---

## Modern Context

While some techniques in the book are classic, the concepts remain essential for:
- Understanding modern exploit mitigations
- Reverse engineering
- Secure software development
- Red team and blue team operations

Where applicable, examples are extended or annotated to explain how **modern systems mitigate these attacks**.

---

## References

- *Hacking: The Art of Exploitation* — Jon Erickson
- Linux man pages
- Intel x86 architecture manuals
- GDB documentation

---

## Disclaimer

This repository is for **learning and research only**.  
The author is not responsible for misuse of the information contained herein.

---


