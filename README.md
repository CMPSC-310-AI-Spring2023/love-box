# Project 1: Reflex Agent

## Deadlines:

- _Project Planning_: January 27th by 9:30am
- _Project Walkthrough_: February 1st, 2:30pm - 4:20pm
- _Code and Report_: February 8th by 2:30pm
- _Project Demonstration_: February 8th, 2:30pm - 4:20pm

## Table of Contents

- [Summary](#summary)
- [Objectives](#objectives)
- [Agreement](#agreement)
- [Code of Conduct](#code-of-conduct)
- [Learning](#learning)
- [Assignment Specification](#assignment-specification)
  - [Set Up](#set-up)
  - [Arduino Programming](#arduino-programming)
- [Planning](#planning)
- [Project Walkthrough](#project-walkthrough)
- [Project Demonstration](#project-demonstration)
- [Required Deliverables](#required-deliverables)
- [Assignment Assessment](#assignment-assessment)
- [GatorGrade](#gatorgrade)
  - [Automated Checks with GatorGrader](#automated-checks-with-gatorgrader)
- [Receiving Assistance](receiving-assistance)

## Summary

This project assignment invites you to work in a team to implement a simple reflex agent using an interactive application with an Arduino board and sensors. You are also responsible for writing a detailed report, stored in the file `writing/report.md`. This is a Markdown file that must adhere to the standards described in the [Markdown Syntax Guide](https://guides.github.com/features/mastering-markdown/).

## Objectives

To apply concepts of agent types and agent environment to a practical application. Specifically, you will use an open-source electronics platform called Arduino to develop a simple agent. You will learn how to use Arduino programming language, its IDE, Arduino board and other hardware components such as sensors and motors. Finally, you will reflect on the design of your agent, its attribute and type, its decision making within the environment, and its social responsibility.

## Agreement

This laboratory assignment will be completed in groups of two or three (max). Each team member must follow the [community guidelines](https://github.com/CMPSC-310-AI-Spring2023/course_information/blob/main/community_guidelines.md), including team guidelines, developed by the students in this class.

By working on and completing this laboratory assignment you agree to use the hardware given to you in a responsible manner. Each team is responsible for the safety and security of the Arduino board and any sensors, motors, cables and other electronics equipment utilized for their lab. Malicious unsafe operation of the hardware by any team member will result in the inability of that team member to work with the hardware provided by the instructor.

By class time on Friday, January 27th, you must specify all hardware components you are planning to use in the appropriate section of your report document. At the completion of the lab, the instructor will check all of your specified equipment back in. All equipment must be returned before grades can be released.

## Code of Conduct

Throughout the completion of this project you must adhere to the [community guidelines](https://github.com/CMPSC-310-AI-Spring2023/course_information/blob/main/community_guidelines.md) that we developed as a class. In addition to reporting any violations of the code of conduct using [this form](https://forms.gle/W6Kf2jt1DmmKEdAs6), please make sure that you attest to the fact that you followed the code of conduct. Students who think that the class should revise some aspect of the guidelines must use the GitHub issue tracker for that repository to suggest, discuss, and implement any required changes.

## Learning

To review what you have learned about agents, their attributes, types, and environments, please read sections 1.3-1.5, 2.1-2.2 from the [Artificial Intelligence: Foundations of Computational Agents](https://artint.info/2e/html/ArtInt2e.Ch1.html) textbook.

If you have not done so already, please read all of the relevant [GitHub Guides](https://guides.github.com/) that explain how to use many of the features that GitHub provides. In particular, please make sure that you have read the following GitHub guides: [Mastering Markdown](https://guides.github.com/features/mastering-markdown/), [Hello World](https://guides.github.com/activities/hello-world/), and [Documenting Your Projects on GitHub](https://guides.github.com/features/wikis/).

## Assignment Specification

In this two-week lab students are invited to implement a rational agent using an open-source electronics platform, Arduino, for some application of your choosing (within the realm of available hardware resources). As you select a specific application, you must identify the agent type, its attributes, and its task environment. The developed applications will be used during outreach activities in Crawford Central school district.

Arduino platform makes it relatively easy to develop interactive applications that utilize both hardware and software by taking inputs from a variety of switches or sensors and controlling a variety of outputs (lights, motors, etc.). You will be working with an Arduino microcontroller board, a small circuit (the board) that essentially contains a small computer on a small chip (the microcontroller). There are different versions of the Arduino board that differ in components and size, you will work with either UNO or DUE versions. Other electronics components that are available are light sensor, infrared distance sensor, LED module, light sensor, push button, sound sensor, temperature sensor, tilt sensor, motion sensor, rotation sensor, buzzer module, servo, among others.

There are many examples for sample Arduino projects, including the following:

- [ProjectHub](https://create.arduino.cc/projecthub)
- [Hackster](https://www.hackster.io/arduino/projects)
- [DF robot](https://www.dfrobot.com/product-1454.html?search=Gravity%3A%20Starter%20Kit%20for%%3E)
- [Elegoo](https://www.elegoo.com/download/)

Although you are encouraged to use the sample examples included with Arduino IDE or sample projects from existing online resources, your solution to this lab can not be just an existing project that you have put to practice. You must add at least one small extension or make a small change to the project providing an inspiration for your work. In your report document, you must also include a reference (URL is sufficient) to all resources that you have used when learning about Arduino and possible projects.

### Set Up

Arduino programs are written in the Arduino Integrated Development Environment (IDE). In ALIC, Arduino IDE is already installed on the machines. If you would like to use your own laptop, you can obtain the necessary software from [Arduino website](https://www.arduino.cc/en/Main/Software). You also have an option of developing and testing your program on [Arduino Wed Editor](https://create.arduino.cc/editor).

### Arduino Programming

Arduino IDE enables you to write sketches (programs in Arduino) for different Arduino boards. The Arduino programming language is based on a very simple language called processing, which is similar to the C language. After the sketch is written in the Arduino IDE it can be uploaded on the Arduino board for execution.

The structure of an Arduino program contains a minimum of 2 blocks responsible for preparation and execution, setup and loop methods respectfully in the example below.

```
void setup( ) {
   statements;
...
}
void loop( ) {
   statements; ...
}
```

When program is run, the setup function is executed first, and it is responsible for initializing the pin modes and starting serial communication. This function has to be included even if there are no statements to execute but it is only executed once. After the setup function runs, the execution block runs next. The execution block contains statements that are responsible for specific tasks, such as reading inputs, triggering outputs, checking conditions etc. For example, a loop function is a part of execution block and it executes the set of statements repeatedly.

## Planning

Once you have chosen the Arduino project you want to implement and the type of agent you want to develop, identify the tasks that need to be completed for this lab. Then, by class time on Friday, January 27th, complete and submit the planning portion in your report that includes the tasks your team has to complete and a timetable for their completion. In this section of your report you must also indicate all of the hardware components that your team will need for the lab completion.

## Project Walkthrough

During the lab session on Wednesday, February 1st, each team will participate in the project walk-through process. Project walkthrough is an informal process where the instructor leads the process of reviewing the progress of the project and the written code is reviewed for technical accuracy with the objective of finding errors and improving the quality of the code. The purpose of this walkthrough is to motivate continuous progression on the project, identification of any conceptual issues, and detection of any technical errors. When the walkthrough is finished, the authors of the project are responsible for taking the necessary actions to correct the identified issues.

By this project walkthrough, each team should have identified the agent they plan to develop, have gotten to know Arduino IDE and hardware component interactions, and have started writing some code. During the walkthrough, the team members will collaboratively lead the walkthrough process, which should last 5-10 minutes for each team. Each team should:

- Describe the chosen application.
- Discuss what makes the agent being developed in this application "an agent", what its attributes, its type, and its environment are.
- Explain the written code.
- Identify the steps left to complete for this project.

## Project Demonstration

At the beginning of the lab session on Wednesday, February 8th, each team will be given an opportunity to demonstrate their project. When the lab session starts, teams will be given a few minutes to set up their demonstrations and get them running. Then, class members will participate in an interactive demonstration session, where everyone will be able to view each demonstration.

## Required Deliverables

This assignment invites you to submit the following deliverables through your team repository.

1. Planning portion of the report due on January 27th by 9:30am. The rest of the written requirements are due at 2:30 pm on February 8th.
2. A properly completed and commented source program(s). Please make sure your source code is titled "Application" and located inside "src/lab01/Application" directory in your lab01 repository.
3. The report, stored in /writing/report.md and written in Markdown, that contains the planning portion as described above, and provides answers in all remaining sections (follow the prompts inside the report document).
4. Lab session on February 1st will be used to conduct project walkthroughs and for lab work.
5. The lab session on February 8th will be used for demonstrations.

## Assignment Assessment

The grade that a student receives on this assignment will have the following components.

- **GitHub Actions CI Build Status [up to 15%]:**: For lab01 repository associated with this assignment students will receive a checkmark grade if their last before-the-deadline build passes.

- **Mastery of Verbal Explanation during Walkthrough and Demonstration [up to 20%]:**: Since the continuous and timely project development and the ability to communicate technical details of a project is crucial to building successful software and hardware applications, a portion of students' lab grade will be determined based on the quality of the project walkthrough and the project demonstration.

- **Mastery of Technical Writing [up to 20%]:**: Students will also receive a checkmark grade when the responses to the writing questions presented in the `report.md` reveal a proficiency of both writing skills and technical knowledge. To receive a checkmark grade, the submitted writing should have correct spelling, grammar, and punctuation in addition to following the rules of Markdown and providing conceptually and technically accurate answers.

- **Mastery of Technical Knowledge and Skills [up to 45%]**: Students will receive a portion of their assignment grade when their project implementation reveals that they have mastered all of the technical knowledge and skills developed during the completion of this project. As a part of this grade, the instructor will assess aspects of the project including, but not limited to, the correctness of the program, the completeness and correctness of the software and hardware integration, the use of effective source code comments and Git commit messages.

All grades for this project will be reported through a student's gradebook GitHub repository.

## GatorGrade

You can check the baseline requirements of this project by running department's assignment checking `gatorgrade` tool. To use `gatorgrade`, you first need to make sure you have Python installed. If not, please see:

- [Setting Up Python on Windows](https://realpython.com/lessons/python-windows-setup/)
- [Python 3 Installation and Setup Guide](https://realpython.com/installing-python/)
- [How to Install Python 3 and Set Up a Local Programming Environment on Windows 10](https://www.digitalocean.com/community/tutorials/how-to-install-python-3-and-set-up-a-local-programming-environment-on-windows-10)

Then, you need to install `gatorgrade`:

- First, [install `pipx`](https://pypa.github.io/pipx/installation/)
- Then, install `gatorgrade` with `pipx install gatorgrade`

Finally, you can run `gatorgrade`:

`gatorgrade --config config/gatorgrade.yml`

## Automated Checks with GatorGrader

Your submission must pass the following checks that [GatorGrader](https://github.com/GatorEducator/gatorgrade) automatically assesses. If [GatorGrader's](https://github.com/GatorEducator/gatorgrade) automated checks pass correctly, the tool will produce the output similar to the one below.

```
✔  The report.md in writing has exactly 0 of the 'Add Your Names Here' fragment
✔  The Application.ino in src/lab01/Application has at least 2 single-line Java comment(s)
✔  The Application.ino in src/lab01/Application has exactly 0 of the 'TODO' fragment
✔  The Application.ino in src/lab01/Application has exactly 1 of the 'setup(' fragment
✔  The Application.ino in src/lab01/Application has exactly 0 of the 'Add Your Names Here' fragment
✔  The report.md in writing has exactly 9 of the 'heading' tag
✔  The repository has at least 10 commit(s)
✔  The file Application.ino exists in the src/lab01/Application directory
✔  The report.md in writing has at least 200 word(s) in total
✔  The file report.md exists in the writing directory
✔  The Application.ino in src/lab01/Application has at least 1 of the 'loop(' fragment
✔  The report.md in writing has exactly 0 of the 'TODO' fragment
```

## Receiving Assistance

If you are having trouble completing any part of this project, then please talk with either the course instructor during the lab session. Alternatively, you may ask questions in the Slack workspace for this course. Finally, you can schedule a meeting during the course instructor's office hours.
