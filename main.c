

#include <stdlib.h>
#include <stdio.h>
//#include <math.h>
#include <stdbool.h>

//------------------------------------------------------------------------------

void deney0( void ) {

   int a;
   int *address;

   a = 1;
   address = &a;

}//deney0

//------------------------------------------------------------------------------

void deney1( void ) {

int x = 5;
int y = 3;
int z = 0;

// üç değişenle değer takası
z = x;
x = y;
y = z;

// iki değişkenle değer takası
x = x + y;
y = x - y;
x = x - y;

}//deney1

//------------------------------------------------------------------------------

void deney2( void ) {

  int a[4] = {10,20,30,40};
  int i = 0;

  a[ i ] = a[ i ] + 1;

  i = 0;
  while ( i < 4 ) {

	a[ i ] = a[ i ] + 1;
	i = i + 1;

  }

}//deney2

//------------------------------------------------------------------------------

void deney3( void ) {

  int x[] = { 3,5,7,0,-1,1 };
  int i = 0;
  int min = 1;

  while ( i < 6 ) {

	 if ( min > x[ i ] )
		 min = x[ i ];

	 i = i + 1;

  }

}//deney3

//------------------------------------------------------------------------------

void deney4( void ) {

  int x[] = { 3,5,7,0,-1,1 };

  int min = 1;

  int index = 0;

  for ( int i = 0; i < 6; i++ ) {

	  if ( min > x[ i ] ) {

		 min = x[ i ];
		 index = i;

	  }

  }

}//deney4

//------------------------------------------------------------------------------

void deney5( void ) {

  int x[] = { 3,5,7,0,-1,1 };

  int index = -1;

  int aranan_sayi = 8;

  for ( int i = 0; i < 6; i++ ) {

	  if ( aranan_sayi == x[ i ] ) {
		 index = i;
		 break;
	  }

  }//for



}//deney5

//------------------------------------------------------------------------------

void enBasitFonksiyon( void ) {
}

//------------------------------------------------------------------------------

void deney6( void ) {

  int x[] = { 3, 5, 7, 0, -1, 1, 3 };

  int aranan_sayi = 8;
  int kacTaneVar = 0;

  int elemanSayisi = sizeof( x ) / sizeof( int );

  for ( int i = 0; i < elemanSayisi; i++ ) {

	  if ( aranan_sayi == x[ i ] ) {
		  kacTaneVar++;

	  }

  }//for

}//deney6

//------------------------------------------------------------------------------

void deney7( void ) {

   int x[] = { 3, 5, 7, 0, -1, 1, 3 };
   int kacTaneVar = 0;
   int elemanSayisi = sizeof( x ) / sizeof( int );

   for ( int i = 0; i < elemanSayisi; i++ ) {

	  int ara_deger = ( x[i] / 2 ) * 2;

	  if ( x[i] == ara_deger ) {

		  kacTaneVar++;

	  }

   }//for


}//deney7

//------------------------------------------------------------------------------

void deney8( void ) {

   int x[] = { 3, 5, 7, 0, -1, 1, 3 };
   int kacTaneVar = 0;
   int elemanSayisi = sizeof( x ) / sizeof( int );

   for ( int i = 0; i < elemanSayisi; i++ ) {

	  if ( ! ( x[i] % 2 ) ) {


		  kacTaneVar++;

	  }

   }//for


}//deney8

//------------------------------------------------------------------------------

void deney9( void ) {

	int x[] = { 3, 5, 7, 0, -1, 1, 3 };
    int kacTaneVar = 0;
    int elemanSayisi = sizeof( x ) / sizeof( int );

    for ( int i = 0; i < elemanSayisi; i++ ) {

        if ( ! ( x[i] & 1 ) )  {

        kacTaneVar++;

        }//if

    }//for

}//deney9

//------------------------------------------------------------------------------

_Bool SayiCiftMi( int sayi ) {

   return ! ( sayi & 1 );

}//SayiCiftMi

//------------------------------------------------------------------------------

void deney10( void ) {

	int x[] = { 3, 5, 7, 0, -1, 1, 3 };
    int kacTaneVar = 0;
    int elemanSayisi = sizeof( x ) / sizeof( int );

    for ( int i = 0; i < elemanSayisi; i++ ) {

        _Bool sonuc = SayiCiftMi( x[ i ] );

        if ( sonuc )  {

          kacTaneVar++;

        }//if

    }//for

}//deney10

//------------------------------------------------------------------------------

int Min( int array[], int elementCount ) {

  int min = array[ 0 ];
  int i = 0;

   while ( i < elementCount ) {

	   if ( min > array[ i ] )
		   min = array[ i ];

	   i = i + 1;

   }

  return min;

}//Min

//------------------------------------------------------------------------------

int Min2( int array[], int elementCount ) {

   int min = array[ 0 ];

   for ( int i = 0; i < elementCount; i++ ) {

	   if ( min > array[ i ] )
		   min = array[ i ];

   }

  return min;

}//Min2

//------------------------------------------------------------------------------

int MinIndex( int array[], int elementCount ) {

   int min = array[0];
   int i = 0;
   int minindex = 0;
   while ( i < elementCount ) {

      if ( min > array[i] ) {
         min = array[i];
         minindex = i;
      }

      i = i + 1;
   }

   return minindex;

} //Min

//------------------------------------------------------------------------------

void sirala( int array[], int elementCount ) {

   for ( int i = 0; i < elementCount; i++ ) {

	   int min = Min( &array[i], elementCount - i );
	   int minindex = MinIndex( &array[ i ], elementCount - i ) + i;

	   int  yedekle = array[ i ];
       array[ minindex ] = yedekle;
       array[ i ] = min;

   }//for

}//sirala

//------------------------------------------------------------------------------

void deney11( void ) {

	int x[] = { 3, 5, 7, 0, -1, 1, 3, -2, 5 };
	int elemanSayisi = sizeof( x ) / sizeof( int );
	sirala( x, elemanSayisi );

}

//------------------------------------------------------------------------------

void bubbleSort( int array[], int elementCount ) {

   for ( int soneleman = elementCount; soneleman > 0; --soneleman ) {

	   for ( int i = 1; i < soneleman; ++i ) {

		   if ( array[ i - 1 ] > array[ i ] ) {

			  int a = array[ i - 1 ];
			  array[ i - 1 ] = array[ i ];
			  array[ i ] = a;

		   }

	   }//for

   }//for

}//bubbleSort

//------------------------------------------------------------------------------

void deney12( void ) {

	int x[] = { 3, 5, 7, 0, -1, 1, 3, -2, 5 };
	int elemanSayisi = sizeof( x ) / sizeof( int );
	bubbleSort( x, elemanSayisi );

}//deney12

//-----------------------------------------------------------------------------

void deney13( void ) {  

   int x = 0;
   int y = 1;
   int max = 0;
     
   if ( x < y ) {
      max = y;
   } else { 
      max = x;
   }

   max = x < y ? y : x; 

}

//-----------------------------------------------------------------------------

_Bool sayi_varmi( int sayilar[], int elemanSayisi, int aranan_sayi ) {

   for ( int i = 0; i < elemanSayisi; ++i ) {

      if ( sayilar[ i ] == aranan_sayi )
     	   return true;

   }

   return false;

}//sayi_varmi

//------------------------------------------------------------------------------

int sayinin_son_yeri( int sayilar[], int elemanSayisi, int aranan_sayi ) {

   int yeri = -1;

   for ( int i = 0; i < elemanSayisi; ++i ) {

      if ( sayilar[ i ] == aranan_sayi ) {
         yeri = i;
      }   

   }//for

  // "yeri" değişkeninde -1 varsa (-1 dizi için geçersiz bir index değeridir) sayıyı
  // bulamadık demektir. 0 ve daha büyük bir değer varsa aranan sayının dizideki yeridir.
  return yeri;

}//sayinin_son_yeri

//------------------------------------------------------------------------------

int sayinin_ilk_yeri( int sayilar[], int elemanSayisi, int aranan_sayi ) {

  int yeri = -1;

   for ( int i = 0; i < elemanSayisi; ++i ) {

      if ( sayilar[ i ] == aranan_sayi ) {
         yeri = i;
         break;
      }   

   }//for

  // "yeri" değişkeninde -1 varsa (-1 dizi için geçersiz bir index değeridir) sayıyı
  // bulamadık demektir. 0 ve daha büyük bir değer varsa aranan sayının dizideki yeridir.
  return yeri;

}//sayinin_ilk_yeri

//------------------------------------------------------------------------------

void deney14( void ) {

   int array[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
   int elementCount = sizeof( array ) / sizeof( int); 
   int set[ elementCount ];
   int j = 0;
   int setSize = 0;

   for ( int i = 0; i < elementCount ; ++i ) {
 
      if ( ! sayi_varmi( set, j, array[ i ] ) ) {

         set[ j++ ] = array[ i ];

      }

   }

   setSize = j + 1;

}//deney14

//-----------------------------------------------------------------------------

int random( int lower, int upper )  {

   int raw = rand();
   int result = raw % ( upper - lower + 1 ) + lower;

   return result;
   
}//random

//-----------------------------------------------------------------------------

void deney15(  void ) {

  int number = -1;

  for ( int i = 0; i < 100; i++ ) {

     number = random( 10, 20 );
     printf( "%d\r\n", number );
 
  }
 
}//deney15

//-----------------------------------------------------------------------------

_Bool SayiTekMi( int sayi ) {

   _Bool result = false;

   result = sayi & 1;

   return result;

}//SayiTekMi

//------------------------------------------------------------------------------

int Max( int array[], int elementCount ) {

   int max = array[ 0 ];
   int i = 0;

   while ( i < elementCount ) {

      if ( max < array[ i ] )
	     max = array[ i ];

	  i++;

   }//while

   return max;

}//Max

//------------------------------------------------------------------------------

void sizeof_operatoru() {

  int sayilar[] = { 3, 5, 7, 0, -1, 1, 2, 4, 5, 6 };


  int sizeInteger = sizeof(int);
  int sizeArray   = sizeof( sayilar );

  int elemanSayisi = sizeof( sayilar ) / sizeof( int );

}//sizeof_operatoru

//------------------------------------------------------------------------------

/*
  Requires:
    * stdio header file for "printf" function declaration
    * math header file for "sqrtf" function declaration
    * linking math library (gcc -lm)
*/
void PrintSquareRoot( float decimalNumber ) {

   //float root = sqrtf( decimalNumber );

   // TODO : don't forget the CRLF chars at the end of the string.
   //printf( "square root of %f is %f", decimalNumber, root );

}//PrintSquareRoot

//------------------------------------------------------------------------------

/*
  Requires:
    * stdlib header file for "rand" & "srand" function declarations
*/

void Random( void ) {

   //int value_1 = rand();
   //int value_2 = rand();

}//Random

//------------------------------------------------------------------------------

void CommandLineArguments( int argc, char* argv[] ) {

  // TODO : print all command line arguments to the Console/Terminal/Command-Line

}//CommandLineArguments

//------------------------------------------------------------------------------

// global varaibles 
int g_a;
int g_b = 1;

int main( int argc, char* argv[] ) {
 
   PrintSquareRoot( 0 );
   Random(); 
   CommandLineArguments( argc, argv );

   deney15(); 
   deney14();
   deney13();
   deney12();
   deney11();
   deney10();
   deney9();
   deney8();
   deney7();
   deney6();
   deney5();
   deney4();
   deney3();
   deney2();
   deney1();
   deney0();

   sizeof_operatoru();

   int result = 0;
   int x[] = { 3,5,7,0,-1,1 };
   result = sayi_varmi( x , 6 , 5 );
   result = sayi_varmi( x , 6 , 'a' );

   result = Min2( x, 6 );
   result = Min( x, 6 );

   return 0; 

}//main
