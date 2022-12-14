??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ f i r _ f 3 2 (  
 	 c o n s t   a r m _ f i r _ i n s t a n c e _ f 3 2   *   S ,  
 	 f l o a t 3 2 _ t   *   p S r c ,  
 	 f l o a t 3 2 _ t   *   p D s t ,  
 	 u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	 	 	 	 / *   L o o p   c o u n t e r s   * /  
       f l o a t 3 2 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   + =   p S t a t e [ i ]   *   p C o e f f s [ i ] ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   a c c ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s - 1 ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  
  
 v o i d   r e f _ f i r _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       q 3 1 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                           / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	 	 / *   L o o p   c o u n t e r s   * /  
       q 6 3 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   + =   ( q 6 3 _ t ) p S t a t e [ i ]   *   p C o e f f s [ i ] ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   ( q 3 1 _ t ) ( a c c   > >   3 1 ) ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s - 1 ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  
  
 v o i d   r e f _ f i r _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       q 3 1 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                           / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	 	 / *   L o o p   c o u n t e r s   * /  
       q 3 1 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   =   ( q 3 1 _ t )   ( ( ( ( ( q 6 3 _ t )   a c c )   < <   3 2 )   +   ( ( q 6 3 _ t )   p S t a t e [ i ]   *   p C o e f f s [ i ] )   +   0 x 8 0 0 0 0 0 0 0 L L   )   > >   3 2 ) ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   ( q 3 1 _ t ) ( a c c   < <   1 ) ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s - 1 ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  
  
 v o i d   r e f _ f i r _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       q 1 5 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                           / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	 	 / *   L o o p   c o u n t e r s   * /  
       q 6 3 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   + =   ( q 3 1 _ t ) p S t a t e [ i ]   *   p C o e f f s [ i ] ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   r e f _ s a t _ q 1 5 ( a c c   > >   1 5 ) ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  
  
 v o i d   r e f _ f i r _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       q 1 5 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                           / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	 	 / *   L o o p   c o u n t e r s   * /  
       q 3 1 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   + =   ( q 3 1 _ t ) p S t a t e [ i ]   *   p C o e f f s [ i ] ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   r e f _ s a t _ q 1 5 ( a c c   > >   1 5 ) ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s - 1 ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  
  
 v o i d   r e f _ f i r _ q 7 (  
     c o n s t   a r m _ f i r _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
       q 7 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
       q 7 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
       q 7 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
       u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                         / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
       u i n t 3 2 _ t   i ;                                         	 	 	 	 	   / *   L o o p   c o u n t e r s   * /  
       q 3 1 _ t   a c c ;  
  
       / *   S - > p S t a t e   p o i n t s   t o   s t a t e   a r r a y   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
       / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
       p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
       w h i l e   ( b l o c k S i z e   >   0 U )  
       {  
             / *   C o p y   o n e   s a m p l e   a t   a   t i m e   i n t o   s t a t e   b u f f e r   * /  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
             / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
             a c c   =   0 . 0 f ;  
  
 	 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 	 {  
 	 	 	 	 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e s   * /  
 	 	 	 	 a c c   + =   ( q 3 1 _ t ) p S t a t e [ i ]   *   p C o e f f s [ i ] ;  
 	 	 	 }  
  
             / *   T h e   r e s u l t   i s   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   r e f _ s a t _ q 7 ( a c c   > >   7 ) ;  
  
             / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
             p S t a t e + + ;  
  
             b l o c k S i z e - - ;  
       }  
  
       / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t i n g   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
       / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
       p S t a t e C u r n t   =   S - > p S t a t e ;  
  
       / *   C o p y   d a t a   * /  
 	   f o r ( i = 0 ; i < n u m T a p s - 1 ; i + + )  
 	   {  
             p S t a t e C u r n t [ i ]   =   p S t a t e [ i ] ;  
 	   }  
 }  