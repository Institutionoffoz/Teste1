 #include <stdio.h>
 
 void BubbleSort(char *array, char size) {
 
    char i, j;
    char temp;
    char swap = 1;

   while (swap == 1) {
 
        swap = 0;

        for(i = 0, j = 1; j < size; i++, j++)
            if (array[i] > array[j]) {
                 temp = array[j];
                array[j] = array[i];
                array[i] = temp;
                   swap = 1;
            }
       }
  }

  int main()
  {
      char size = 6;
      char array[size];
      int i;

      for(i=0; i<=size; i++)
      {
          printf("digite um valor: ");
          scanf("%c", &array[i]);
      }
      BubbleSort(array,size);

      for(i = 0; i<=size; i++)
      {
          printf("v %i   =   %c",i,array);
      }
      return 0;
  }