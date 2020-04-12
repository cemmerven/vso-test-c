
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//------------------------------------------------------------------------------

int Adsiz( int x, int y ) {

  int a = 0;
  return x + y + 3;

}//Adsiz

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

int MinIndex(int array[], int elementCount) {

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

}

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

_Bool SayiTekMi( int sayi ) {

   _Bool result = false;

   result = sayi & 1;

   return result;

}//SayiTekMi

//------------------------------------------------------------------------------

int Min2( int array[], int elementCount ) {

   int min = array[ 0 ];

   for ( int i = 0; i < elementCount ; i++ ) {

	   if ( min > array[ i ] )
		   min = array[ i ];

   }

  return min;

}//Min2

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

void deney0() {

  int sayilar[] = { 3, 5, 7, 0, -1, 1, 2, 4, 5, 6 };

  int elemanSayisi = sizeof( sayilar ) / sizeof( int );

  int aranacak_sayi = 7;
  int yeri = -1;


  for ( int i = 0; i < elemanSayisi; ++i ) {

     if ( sayilar[ i ] == aranacak_sayi )
        yeri = i;

  }

  // "yeri" değişkeninde -1 varsa sayıyı bulamadık demektir.
  // 0 ve daha büyük bir değer varsa aranan sayının dizideki yeridir

}//keyfi

//------------------------------------------------------------------------------

void Console( int argc, char* argv[] ) {

   float value = 8;
   float root = sqrtf( value );

   printf( "square root of %f is %f\r\n", value, root );

}//Console

//------------------------------------------------------------------------------

int g_a;
int g_b = 1;

int main( int argc, char* argv[] ) {

   Console( argc, argv );
   
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
