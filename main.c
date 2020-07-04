

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#include <windows.h>

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

int randomRange( int lower, int upper )  {

   int raw = rand();
   int result = raw % ( upper - lower + 1 ) + lower;

   return result;
   
}//randomRange

//-----------------------------------------------------------------------------

void deney15(  void ) {

  int number = -1;

  for ( int i = 0; i < 100; i++ ) {

     number = randomRange( 10, 20 );
     printf( "%d\r\n", number );
 
  }
 
}//deney15

//-----------------------------------------------------------------------------

void deney16( void ) { 

   int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   int i = 0;
   int j = 0;
   int elementCount = sizeof( array ) / sizeof( int );
   int swap = 0;

   for ( int k = 0; k < elementCount; k++ ) {

      i = randomRange( 0, elementCount - 1 );
      j = randomRange( 0, elementCount - 1 );

      swap = array[ i ];
      array[ i ] = array[ j ];
      array[ j ] = swap;

   }//for

}//deney16

//-----------------------------------------------------------------------------

void deney17( void ) { 

   int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   void *address = 0;

   address = malloc( sizeof( array ) );
   if (  address == 0 ) {
      return;
   }   

   int *newArray = (int*) address;

   int elementCount = sizeof( array ) / sizeof( int );
   for ( int i = 0; i < elementCount; i++ ) {
   
      newArray[ i ] = array[ i ];

   }//for
   
   //free( address );

}//deney17

//-----------------------------------------------------------------------------

int* shuffle( int array[], int elementCount ) {

   int *newArray = malloc( elementCount * sizeof( int ) ); 
   if ( newArray == NULL ) {
      return NULL;
   }

   for ( int i = 0; i < elementCount; i++ ) {
   
      newArray[ i ] = array[ i ];

   }//for

   int i = 0;
   int j = 0;
   int swap = 0;

   int lastIndex = elementCount - 1;
   for ( int k = 0; k < elementCount; k++ ) {

      i = randomRange( 0, lastIndex );
      j = randomRange( 0, lastIndex );

      swap = newArray[ i ];
      newArray[ i ] = newArray[ j ];
      newArray[ j ] = swap;

   }//for

   return newArray;

}//shuffle

//-----------------------------------------------------------------------------

void deney18( void ) {
   
   int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
   int elementCount = sizeof( array ) / sizeof( int );
   int *shuffledArray = shuffle( array, elementCount );

}//deney18

//-----------------------------------------------------------------------------

_Bool asalMi( int x ) {

   for( int i = 2; i < x ; i++ ) {

     if (  x % i == 0 ) {

        return false;

     }

   }//for

   return true;

}//asalMi

//-----------------------------------------------------------------------------

_Bool asalMi2( int x ) {

   int y = x / 2 + 1;

   for( int i = 2; i < y; i++ ) {

     if (  x % i == 0 ) {

        return false;

     }

   }//for

   return true;

}//asalMi2

//-----------------------------------------------------------------------------

void deney19( void ) {

   int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, };
   int elementCount = sizeof( primes ) / sizeof( int );   

   for ( int i = 0; i < elementCount; i++ ) {

         _Bool r0 = asalMi2( primes[ i ] );
         _Bool r1 = asalMi2( primes[ i ] *2 );
   }

   _Bool resultA = asalMi( 6 );
   _Bool resultB = asalMi( 7 );

}//deney19

//-----------------------------------------------------------------------------

void deney20( void ) {

   char x[ 4 ] = { 65, 66 , 'C', '\0' }; 
   char y[ 4 ] = { 'A', 'B','C', '\0' }; 
   char* z     = "ABC";
   char text[] = "ABC";
        
   x[ 0 ] = 'A';
   x[ 2 ] = 66;
   x[ 3 ] = 'A' + 2;

   //printf( "%d %d", x[0], x[1] ); 

}//deney20

//-----------------------------------------------------------------------------

void deney21( void ) {

   char text[] = "qrs";
   size_t textLength = sizeof( text );
   char diff = 'a' - 'A';

   for ( size_t i = 0; textLength - 1; i++ ) {

      text[ i ] -= diff;
   
   }

   for ( size_t i = 0; text[ i ] != 0; i++ ) {

      text[ i ] += diff;
   
   }

   for ( size_t i = 0; text[ i ]; i++ ) {

      text[ i ] -= diff;
   
   }

}//deney21

//-----------------------------------------------------------------------------

_Bool IsLower( char c ) {

   return ( c <= 'z' && c >= 'a' );
     
}

//-----------------------------------------------------------------------------

void deney22( void ) {

   char title[] = "mavi trenin gizemi";
   char fark = 'a' - 'A';
   // TODO : büyük harf ise dokunulmayacak
   // ilk elemanı küçük harfse büyük harfe çevirir
   if ( IsLower( title[ 0 ] ) ) {
      title[ 0 ] -= fark;
   } 

   size_t count = sizeof( title );

   for ( size_t i = 1; i < count - 1; i++ ) {

      if ( IsLower( title[ i ] ) ) {

         if ( title[ i - 1 ] == ' ' ) {
            title[ i ] -= fark;
         }
      }

   }

}//deney22

//-----------------------------------------------------------------------------

void deney23( void ) {

   for ( int ab = 0; ab < 256; ab++ ) {
      printf ( " %d %c \r\n", ab, ab );

   }

}

//-----------------------------------------------------------------------------

_Bool SayiTekMi( int sayi ) {

   _Bool result = false;

   result = sayi & 1;

   return result;

}//SayiTekMi

//-----------------------------------------------------------------------------

_Bool BitDegeri( int a , int b ) {

   a >>= b;

   return  SayiTekMi( a ); 

}

//-----------------------------------------------------------------------------

void deney24( void ) { 

   int birsayi = 6;

   for  ( int i = 32; i > -1 ; i-- ) {

       _Bool bit = BitDegeri( birsayi , i );

      printf( " %d " , bit );

   }   

}

//-----------------------------------------------------------------------------

void printbits( int birsayi ) { 

   for  ( int i = 7; i > -1 ; i-- ) {

      _Bool bit = BitDegeri( birsayi , i );

      char c = bit ? ' ' : 'M'; 

      //printf( "\033[0;31m" );
      //printf("");
      printf( "\x1b[32m%c " , c );

   }   

}

//------------------------------------------------------------------------------

void deney25( void ) {

   for ( int i = 1; i < 256; i += 2 ) {

      printbits( i );
      printf( "\r\n" );

   } 

}

//------------------------------------------------------------------------------

void deney26() {

   int a = 0;
   int b = 0;
   int c = sqrt( 12 );

   float f0A  = __FLT_EPSILON__;
   double d0A = __DBL_EPSILON__;
   
   for (size_t i = 0; i < 100; i++)
   {
      d0A += __DBL_EPSILON__;
   }
   
   float f0B = 0.1; 
   f0B = f0B * 10; 

   double f1 = 2 * sqrt( 3 );
   double f2 = sqrt( 12 );

}//deney26

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

void printLastError()
{
    //Get the error message, if any.
    DWORD errorMessageID = GetLastError();
    if(errorMessageID == 0)
        return; //No error message has been recorded

    LPSTR messageBuffer = NULL;
    size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                                 NULL, errorMessageID, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&messageBuffer, 0, NULL);
   
    printf( "%s", messageBuffer );
    //Free the buffer.
    LocalFree(messageBuffer);

}//printLastError

//------------------------------------------------------------------------------

// global varaibles 
int g_a;
int g_b = 1;


static HANDLE stdoutHandle;
static DWORD outModeInit;
#ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
#endif

void setupConsole(void) {
 	DWORD outMode = 0;
 	stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
 
 	if(stdoutHandle == INVALID_HANDLE_VALUE) {
      printLastError(); 
 		exit(EXIT_FAILURE);
 	}
 	
 	if(!GetConsoleMode(stdoutHandle, &outMode)) {
 		exit(EXIT_FAILURE);
 	}
 
 	outModeInit = outMode;
 	
     // Enable ANSI escape codes
 	outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
 
 	if(!SetConsoleMode(stdoutHandle, outMode)) {
      printLastError(); 
 		exit(EXIT_FAILURE);
 	}	
}

int main( int argc, char* argv[] ) {

   setupConsole();

   PrintSquareRoot( 0 );
   Random(); 
   CommandLineArguments( argc, argv );



   deney25();
   return EXIT_SUCCESS;

   deney24();
   deney23();
   deney22();
   deney21();
   deney20();
   deney19();
   deney18();
   deney17();
   deney16();
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
