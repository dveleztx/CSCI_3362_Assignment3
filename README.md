```markdown
# CSCI_3362_Assignment3

## Overview
This repository contains the third assignment for the CSCI 3362 course, focusing on the implementation and analysis of various scheduling algorithms used in operating systems. The project aims to provide a deeper understanding of how different scheduling techniques work and their impact on system performance.

## Features
- **Implementation of Scheduling Algorithms**: Includes First-Come-First-Served (FCFS), Shortest Job Next (SJN), Priority Scheduling, and Round Robin (RR).
- **Performance Metrics**: Evaluate algorithms based on turnaround time, waiting time, and CPU utilization.
- **Simulation Environment**: A simple command-line interface to simulate and compare different scheduling strategies.

## Setup
To set up the project locally, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/CSCI_3362_Assignment3.git
   cd CSCI_3362_Assignment3
   ```

2. **Compile the code**:
   Ensure you have a C++ compiler installed. Then compile the source files:
   ```bash
   g++ -o scheduler main.cpp scheduler.cpp
   ```

3. **Run the executable**:
   ```bash
   ./scheduler
   ```

## Usage
After setting up the project, use the following commands to simulate scheduling algorithms:

- **FCFS**: 
  ```bash
  ./scheduler fcfs input_file.txt
  ```

- **SJN**: 
  ```bash
  ./scheduler sjn input_file.txt
  ```

- **Priority Scheduling**: 
  ```bash
  ./scheduler priority input_file.txt
  ```

- **Round Robin**: 
  ```bash
  ./scheduler rr input_file.txt time_quantum
  ```

Replace `input_file.txt` with your input file containing process details and `time_quantum` with the desired time quantum for Round Robin scheduling.

## Contribution Guidelines
We welcome contributions to improve the project. Please adhere to the following guidelines:

- Fork the repository and create a new branch for your feature or bug fix.
- Make sure your code follows the existing style and conventions.
- Write clear, concise commit messages.
- Open a pull request with a detailed description of your changes.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
```