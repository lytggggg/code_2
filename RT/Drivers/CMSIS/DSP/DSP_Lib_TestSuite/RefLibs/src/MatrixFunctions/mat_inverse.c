??# i n c l u d e   " r e f . h "  
  
 a r m _ s t a t u s   r e f _ m a t _ i n v e r s e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
 	 f l o a t 3 2 _ t   d e t ;  
 	 u i n t 3 2 _ t   i ,   s i z e ;  
 	 a r m _ m a t r i x _ i n s t a n c e _ f 3 2   t m p ;  
 	  
 	 t m p . n u m C o l s   =   p S r c - > n u m C o l s ;  
 	 t m p . n u m R o w s   =   p S r c - > n u m R o w s ;  
 	 t m p . p D a t a   =   s c r a t c h A r r a y ;  
 	  
 	 d e t   =   r e f _ d e t r m ( p S r c - > p D a t a , s c r a t c h A r r a y , p S r c - > n u m C o l s ) ;  
 	  
 	 s i z e   =   p S r c - > n u m C o l s   *   p S r c - > n u m C o l s ;  
 	  
 	 r e f _ c o f a c t ( p S r c - > p D a t a , s c r a t c h A r r a y , s c r a t c h A r r a y   +   s i z e , p S r c - > n u m C o l s ) ;  
 	  
 	 r e f _ m a t _ t r a n s _ f 3 2 ( & t m p , p D s t ) ; 	  
 	  
 	 f o r ( i = 0 ; i < s i z e ; i + + )  
 	 {  
 	 	 p D s t - > p D a t a [ i ]   / =   d e t ;  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  
  
 a r m _ s t a t u s   r e f _ m a t _ i n v e r s e _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p D s t )  
 {  
 	 f l o a t 6 4 _ t   d e t ;  
 	 u i n t 3 2 _ t   i ,   s i z e ;  
 	 a r m _ m a t r i x _ i n s t a n c e _ f 6 4   t m p ;  
 	  
 	 t m p . n u m C o l s   =   p S r c - > n u m C o l s ;  
 	 t m p . n u m R o w s   =   p S r c - > n u m R o w s ;  
 	 t m p . p D a t a   =   ( f l o a t 6 4 _ t * ) s c r a t c h A r r a y ;  
 	  
 	 d e t   =   r e f _ d e t r m 6 4 ( p S r c - > p D a t a , ( f l o a t 6 4 _ t * ) s c r a t c h A r r a y , p S r c - > n u m C o l s ) ;  
 	  
 	 s i z e   =   p S r c - > n u m C o l s   *   p S r c - > n u m C o l s ;  
 	  
 	 r e f _ c o f a c t 6 4 ( p S r c - > p D a t a , ( f l o a t 6 4 _ t * ) s c r a t c h A r r a y , ( f l o a t 6 4 _ t * ) s c r a t c h A r r a y   +   s i z e , p S r c - > n u m C o l s ) ;  
 	  
 	 r e f _ m a t _ t r a n s _ f 6 4 ( & t m p , p D s t ) ; 	  
 	  
 	 f o r ( i = 0 ; i < s i z e ; i + + )  
 	 {  
 	 	 p D s t - > p D a t a [ i ]   / =   d e t ;  
 	 }  
 	  
 	 r e t u r n   A R M _ M A T H _ S U C C E S S ;  
 }  