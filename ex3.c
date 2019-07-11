   #include <stdio.h>
   #include <string.h>
 
   char animals[20][15];
   char lyrics[20][60];
   int  number;
  
   void nurseryrhyme(int current) {
       for(int i = 0; i < current; i++)    //maybe <= instead                                            // print "current" number of spaces
          printf(" ");
                                                  // print something before the recursive call
      if(current == 0)                                            // you need to check if the current level is 0
          printf("There was an old lady who swallowed a %s;\n",animals[current]);  //   if so, print "There was an old lady
      if(current > 0)        //   or if it is > 0, print "She swallowed ..."
          printf("She swallowed the %s to catch the %s;\n", animals[current - 1], animals[current]);
      if(current < number-1)                        // if we are not at the last animal, make the recursive call
          nurseryrhyme(current+1);
      for(int i = 0; i < current; i++)
          printf(" ");
      printf("I don't know why she swallowed a %s - %s", animals[current],lyrics[current]);                    // print something after the recursive call
  }
 
 
  int main() {
    int i=0;
 
    while (1) {
      fgets(animals[i], 15, stdin);                                                // read the next animal name
      if (strcmp(animals[i], "END\n") == 0)       // if it is "END\n", we are done reading
        break;
      int length = strlen(animals[i]);                                            // determine the length of the string read
      animals[i][length - 1] = '\0';                                            // strip the newline at the end
      fgets(lyrics[i], 60, stdin);                                            // read the lyric corresponding to the animal
      i++;
    }
 
    number = i;
 
    nurseryrhyme(0);
  }

