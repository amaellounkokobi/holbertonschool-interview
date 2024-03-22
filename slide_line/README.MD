# Slide line


2048 line exercise

tab is the actual game line received
way is left or right

1 - create a parameter for storing a number different than 0 : index
2 - create a list filled with 0 : tab2
3 - create a variable forthe size of the table to store the values on the second table : currlen
4 - create an index : i 

5 - the condition if the parameter is left or right

6-right - browse th table from right to left
7 - if tab[i] != 0
  8 - if index == 0
      	 index = tab[i]
      else if index == tab[i]
      	  tab2[currlen] = index + tab[i]

	index = 0
	currlen --

if index !=0
tab2[currlen] = index

print right
print table