�?# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ s u b _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 p D s t [ i ]   =   p S r c A [ i ]   -   p S r c B [ i ] ;  
 	 }  
 }  
  
 v o i d   r e f _ s u b _ q 3 1 (  
     q 3 1 _ t   *   p S r c A ,  
     q 3 1 _ t   *   p S r c B ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 p D s t [ i ]   =   r e f _ s a t _ q 3 1 (   ( q 6 3 _ t ) p S r c A [ i ]   -   p S r c B [ i ]   ) ;  
 	 }  
 }  
  
 v o i d   r e f _ s u b _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 p D s t [ i ]   =   r e f _ s a t _ q 1 5 (   ( q 3 1 _ t ) p S r c A [ i ]   -   p S r c B [ i ]   ) ;  
 	 }  
 }  
  
 v o i d   r e f _ s u b _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
 	 u i n t 3 2 _ t   i ;  
 	  
 	 f o r ( i = 0 ; i < b l o c k S i z e ; i + + )  
 	 {  
 	 	 p D s t [ i ]   =   r e f _ s a t _ q 7 (   ( q 1 5 _ t ) p S r c A [ i ]   -   p S r c B [ i ]   ) ;  
 	 }  
 }  