
# 🎓 BE/BTech College Counselling System (C Language Project)

A comprehensive terminal-based simulation of the **college admission counselling process** for BE/BTech aspirants. Built entirely in **C language**, this project replicates real-world centralized counselling systems like MHT-CET or JEE-Main counselling by using realistic cutoffs, multiple admission rounds, user inputs, and dynamic decision-making.

---

## 📌 Project Overview

This program mimics how centralized college admissions work:

- Students enter their **CET/JEE percentile**.
- They fill in a **detailed admission form** with academic records and personal data.
- The system shows a **list of top engineering colleges and branches**.
- Based on the student's percentile, the program **checks eligibility against pre-defined cutoffs**.
- It then simulates **three rounds** of counselling and college allotment.
- If eligible, the student can **accept or reject the offer**.
- Once accepted, the program generates a **formatted allotment letter** on the console.

This project is a fantastic example of **logic building, conditional checks, arrays, and user interaction** in C, ideal for academic submission or real-world simulation.

---

## 🔧 Features in Detail

| Feature | Description |
|--------|-------------|
| 📝 Admission Form | Collects full name, parents' names, DOB, academic percentages, school/college names, and year of passing. |
| 🏫 College List | Includes 11 top government and private engineering colleges from India. |
| 🧪 Branch List | Offers 5 common engineering branches (CSE, ENTC, Electrical, Civil, Mech). |
| 📊 Cutoff Logic | 3D cutoff matrix: `[college][branch][round]` representing the percentage required for admission. |
| 🔄 Multiple Rounds | 3 rounds of counselling simulate real-world seat allotment logic. |
| ✅ Allotment Letter | If admitted, a professional-looking letter is displayed with all submitted and assigned details. |
| ❌ Rejection Handling | User can decline allotments or receive rejection messages when cutoffs are not met. |

---

## 🏫 List of Colleges (Sample)

1. COEP Pune  
2. VJTI Mumbai  
3. SPIT Mumbai  
4. GCOE Amravati  
5. GCOE Karad  
6. SGGS Nanded  
7. Walchand College Sangli  
8. ICT Mumbai  
9. GCOE Nagpur  
10. GCOE Yavatmal  
11. LPU Punjab  

---

## 📚 Available Branches

- Computer Science Engineering  
- Electronics & Telecommunication  
- Electrical Engineering  
- Civil Engineering  
- Mechanical Engineering  

Each has a distinct cutoff per college and per round.

---

## 📈 Counselling & Cutoff System

- The cutoff system is based on **multi-dimensional arrays**:  
  `float cutoffs[11][5][3];`  
  → 11 colleges  
  → 5 branches  
  → 3 rounds (Round 1, 2, 3)

- For each round, the system checks if:
```

CET\_Percentage >= Cutoff\[college]\[branch]\[round]

````
If eligible, admission is granted. If not, the student may try again in the next round.

---

## 📤 Sample Run

```bash
$ ./counselling
============================================
       WELCOME TO BE/BTECH COUNSELLING
============================================
      Session 2025-2026 Admissions
============================================

Enter your CET/JEE percentage: 98.45

Available Colleges:
1. COEP Pune
2. VJTI Mumbai
...

Do you want to fill admission form? (y/n): y

--- Fill Admission Form ---

Enter Full Name: Rohan Sharma
Father's Name: Rajeev Sharma
Mother's Name: Sunita Sharma
...

--- ROUND 1 ---

Choose College (1 to 11): 1
Choose Branch:
1. Computer Science Engineering (Cutoff: 99.90)
...

You are allotted:
College: COEP Pune
Branch : Computer Science Engineering

Do you want to accept? (y/n): y

============================================
       COLLEGE ALLOTMENT LETTER
============================================
Name           : Rohan Sharma
Father's Name  : Rajeev Sharma
Mother's Name  : Sunita Sharma
DOB            : 21/06/2007
10th %         : 95.60
12th %         : 92.40
School Name    : XYZ High School
College Name   : ABC Junior College
10th Passed    : 2022
12th Passed    : 2024
--------------------------------------------
Allotted College: COEP Pune
Allotted Branch : Computer Science Engineering
Course Duration : 4 Years
============================================
Thanks! You are successfully admitted.
============================================
````

---

## 🛠️ How to Run This Program

### 💻 Requirements

* C Compiler (GCC recommended)
* Linux / Windows / Mac Terminal

### 🔧 Compile and Run

```bash
gcc counselling.c -o counselling
./counselling
```

---

## 🔍 Learning Objectives

This project strengthens your concepts of:

* 📦 Multi-dimensional arrays and matrices
* 🧠 Conditional logic & nested loops
* 🧾 Input/output formatting (`scanf`, `printf`)
* 👨‍💻 Simulating real-world systems in C
* 🧪 Structuring interactive command-line applications

---

## 🌟 Enhancement Ideas

| Feature             | Description                                                        |
| ------------------- | ------------------------------------------------------------------ |
| 💾 File Handling    | Save allotment letter to `.txt` or `.pdf` format                   |
| 📁 Student Records  | Store all submitted student data in a file for future retrieval    |
| 🧑‍💻 Struct Usage  | Replace primitive variables with C `structs` for better modularity |
| 📊 Rank-Based Logic | Switch from percentage to **rank-based** cutoff comparisons        |
| 🌐 GUI Version      | Build a UI-based version using C++, Python, or web tech            |
| 🔐 Login System     | Add admin/student login system with username/password              |

---

## 📁 Folder Structure

```bash
.
├── counselling.c          # Main C source file
├── README.md              # You’re here
└── output.txt (optional)  # Save allotment letters here
```
---

## 🤝 Connect with Me

**Author**: *Sarthak Jahagirdar*
🔗 [LinkedIn](https://www.linkedin.com/in/sarthak-jahagirdar-59347a365/)

---

> ⚡ If you like this project, give it a ⭐ and share it with your classmates!

```


