�?# i n c l u d e   " r e f . h "  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p D s t )  
 {  
 	 u i n t 6 4 _ t   r , c ;  
 	 u i n t 6 4 _ t   n u m R   =   p S r c - > n u m R o w s ;  
 	 u i n t 6 4 _ t   n u m C   =   p S r c - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < n u m R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < n u m C ; c + + )  
 	 	 {  
 	 	 	 p D s t - > p D a t a [ c * n u m R   +   r ]   =   p S r c - > p D a t a [ r * n u m C   +   c ] ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c ;  
 	 u i n t 3 2 _ t   n u m R   =   p S r c - > n u m R o w s ;  
 	 u i n t 3 2 _ t   n u m C   =   p S r c - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < n u m R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < n u m C ; c + + )  
 	 	 {  
 	 	 	 p D s t - > p D a t a [ c * n u m R   +   r ]   =   p S r c - > p D a t a [ r * n u m C   +   c ] ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c ;  
 	 u i n t 3 2 _ t   n u m R   =   p S r c - > n u m R o w s ;  
 	 u i n t 3 2 _ t   n u m C   =   p S r c - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < n u m R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < n u m C ; c + + )  
 	 	 {  
 	 	 	 p D s t - > p D a t a [ c * n u m R   +   r ]   =   p S r c - > p D a t a [ r * n u m C   +   c ] ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ t r a n s _ q 1 5 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 1 5   *   p D s t )  
 {  
 	 u i n t 3 2 _ t   r , c ;  
 	 u i n t 3 2 _ t   n u m R   =   p S r c - > n u m R o w s ;  
 	 u i n t 3 2 _ t   n u m C   =   p S r c - > n u m C o l s ;  
 	  
 	 f o r ( r = 0 ; r < n u m R ; r + + )  
 	 {  
 	 	 f o r ( c = 0 ; c < n u m C ; c + + )  
 	 	 {  
 	 	 	 p D s t - > p D a t a [ c * n u m R   +   r ]   =   p S r c - > p D a t a [ r * n u m C   +   c ] ;  
 	 	 }  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  