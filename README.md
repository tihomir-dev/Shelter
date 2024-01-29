The program reads from data from “input.txt” file, which is located in the project file.
Every row starts with a specific character, that the program reads and determines what type of Shelter object to instantiate. Then it reads information that is used in the constructor of every object. 
1st row: B (Bunker), 5.0 (seismic activity), 3.0 (strength) 12 (age), 3(integer position for the enum type of Atmospheric condition), 60 (capacity), 5.0 (depth), 40.0 (area), 2 (anti fire systems), 4 (anti-tank mines)
2nd row: X (Barracks), 6.0 (seismic activity), 2.0 (strength), 10 (age), 2 (integer position for the enum type of Atmospheric condition), 30 (capacity), 30 (years practicable), 8 (secret entrances), 4 (rooms for weapons), 24 (beds for injured)
3rd row: T (Tunnel), 2.0 (seismic activity), 5.0 (strength), 14 (age), 3 (integer position for the enum type of Atmospheric condition), 45 (capacity), 8.0 (depth), 56.0 (area), 2(radioactive systems), 4 (inventories for vehicles)
4th row: C (Control Tower), 4.0 (seismic activity), 6.0 (strength), 16 (age), 1 (integer position for the enum type of Atmospheric condition), 10 (capacity), 12 (years practicable), 3 (secret entrances), 40 (visibility), 6 (snipers capacity). 
The execution of the program starts with input of the file name that stores the information: "Enter file name to read"
The user should write “input.txt” in order to invoke the text file that stores the input for the program. 
After the information from the input file is shown a message appears whether the user wants the Shelters to be merge sorted based on effective attack. After that another question appears that ask the user to write where they want to store the total effective attacks and total effective defenses. The results are displayed in that chosen file (In my case, the output is stored in out.txt). 



