# mass-notes
A C++ console application designed to enhance efficiency in Customer Support by automating and accelerating the mass generation of notes based on notifications of traffic fines from France.

# 🚗 Fine Ticket Notes Generator

## 📌 Description
This is a **C++ console application** designed to **streamline and accelerate** the process of generating structured notes based on fine ticket notifications from France. Originally developed to **improve efficiency in Customer Support**, it automates note creation, reducing manual workload and ensuring consistency in formatting.

## ✨ Features
- 📌 **Automated Note Generation** – Quickly create formatted notes for different violations.
- 🚦 **Predefined Categories** – Supports:
  - Speeding violations
  - Red light infractions
  - Phone usage while driving
- 📝 **Structured Output** – Saves notes into a `notatki.txt` file.
- 🕒 **Customizable Date & Time** – Allows user input for violation details.
- 🔄 **Looped Menu Interface** – Enables continuous use without restarting.

## 🛠️ How It Works
1. **Select a violation type** from the menu.
2. **Enter violation details**, including location, date, time, and fine number.
3. **The application automatically formats and saves** the note to a text file.
4. **Repeat or exit** as needed.

## 💻 Usage
1. **Compile the code** using a C++ compiler (e.g., g++):
   ```bash
   g++ -o FineNoteGenerator main.cpp
   ```
2. **Run the program**:
   ```bash
   ./FineNoteGenerator
   ```
3. **Follow the prompts** to generate notes.

## 📂 Example Output (notatki.txt)
```
FRA;;2024-02-05;33177686611;123456;L'officier du ministere public Controle Automatise, CS 41101, 35911 RENNES CEDEX 9, France; Przekroczenie predkosci o godz. 14:30, miejsce: Champs-Élysées
```

## 🔍 Future Improvements
- 🖥️ **Graphical Interface** (GUI version for better usability)
- 🗂️ **Database Integration** (Store and manage records more efficiently)
- 🌍 **Multi-language Support**

## 📧 Contact
Feel free to reach out if you have any suggestions or improvements!

🚀 **Happy Coding!**
