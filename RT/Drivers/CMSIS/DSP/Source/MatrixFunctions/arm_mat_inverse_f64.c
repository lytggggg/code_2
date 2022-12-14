??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ i n v e r s e _ f 6 4 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   m a t r i x   i n v e r s e  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
   *   @ i n g r o u p   g r o u p M a t r i x  
   * /  
  
 / * *  
   *   @ d e f g r o u p   M a t r i x I n v   M a t r i x   I n v e r s e  
   *  
   *   C o m p u t e s   t h e   i n v e r s e   o f   a   m a t r i x .  
   *  
   *   T h e   i n v e r s e   i s   d e f i n e d   o n l y   i f   t h e   i n p u t   m a t r i x   i s   s q u a r e   a n d   n o n - s i n g u l a r   ( t h e   d e t e r m i n a n t  
   *   i s   n o n - z e r o ) .   T h e   f u n c t i o n   c h e c k s   t h a t   t h e   i n p u t   a n d   o u t p u t   m a t r i c e s   a r e   s q u a r e   a n d   o f   t h e  
   *   s a m e   s i z e .  
   *  
   *   M a t r i x   i n v e r s i o n   i s   n u m e r i c a l l y   s e n s i t i v e   a n d   t h e   C M S I S   D S P   l i b r a r y   o n l y   s u p p o r t s   m a t r i x  
   *   i n v e r s i o n   o f   f l o a t i n g - p o i n t   m a t r i c e s .  
   *  
   *   \ p a r   A l g o r i t h m  
   *   T h e   G a u s s - J o r d a n   m e t h o d   i s   u s e d   t o   f i n d   t h e   i n v e r s e .  
   *   T h e   a l g o r i t h m   p e r f o r m s   a   s e q u e n c e   o f   e l e m e n t a r y   r o w - o p e r a t i o n s   u n t i l   i t  
   *   r e d u c e s   t h e   i n p u t   m a t r i x   t o   a n   i d e n t i t y   m a t r i x .   A p p l y i n g   t h e   s a m e   s e q u e n c e  
   *   o f   e l e m e n t a r y   r o w - o p e r a t i o n s   t o   a n   i d e n t i t y   m a t r i x   y i e l d s   t h e   i n v e r s e   m a t r i x .  
   *   I f   t h e   i n p u t   m a t r i x   i s   s i n g u l a r ,   t h e n   t h e   a l g o r i t h m   t e r m i n a t e s   a n d   r e t u r n s   e r r o r   s t a t u s  
   *   < c o d e > A R M _ M A T H _ S I N G U L A R < / c o d e > .  
   *   \ i m a g e   h t m l   M a t r i x I n v e r s e . g i f   " M a t r i x   I n v e r s e   o f   a   3   x   3   m a t r i x   u s i n g   G a u s s - J o r d a n   M e t h o d "  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x I n v  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   i n v e r s e .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
   *   @ r e t u r n           	 	 T h e   f u n c t i o n   r e t u r n s  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   i f   t h e   i n p u t   m a t r i x   i s   n o t   s q u a r e   o r   i f   t h e   s i z e  
   *   o f   t h e   o u t p u t   m a t r i x   d o e s   n o t   m a t c h   t h e   s i z e   o f   t h e   i n p u t   m a t r i x .  
   *   I f   t h e   i n p u t   m a t r i x   i s   f o u n d   t o   b e   s i n g u l a r   ( n o n - i n v e r t i b l e ) ,   t h e n   t h e   f u n c t i o n   r e t u r n s  
   *   < c o d e > A R M _ M A T H _ S I N G U L A R < / c o d e > .     O t h e r w i s e ,   t h e   f u n c t i o n   r e t u r n s   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e > .  
   * /  
  
 a r m _ s t a t u s   a r m _ m a t _ i n v e r s e _ f 6 4 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 6 4   *   p D s t )  
 {  
     f l o a t 6 4 _ t   * p I n   =   p S r c - > p D a t a ;                                     / *   i n p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 6 4 _ t   * p O u t   =   p D s t - > p D a t a ;                                   / *   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 6 4 _ t   * p I n T 1 ,   * p I n T 2 ;                                             / *   T e m p o r a r y   i n p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 6 4 _ t   * p O u t T 1 ,   * p O u t T 2 ;                                         / *   T e m p o r a r y   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 6 4 _ t   * p P i v o t R o w I n ,   * p P R T _ i n ,   * p P i v o t R o w D s t ,   * p P R T _ p D s t ;     / *   T e m p o r a r y   i n p u t   a n d   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 3 2 _ t   n u m R o w s   =   p S r c - > n u m R o w s ;                             / *   N u m b e r   o f   r o w s   i n   t h e   m a t r i x     * /  
     u i n t 3 2 _ t   n u m C o l s   =   p S r c - > n u m C o l s ;                             / *   N u m b e r   o f   C o l s   i n   t h e   m a t r i x     * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     f l o a t 6 4 _ t   m a x C ;                                                                 / *   m a x i m u m   v a l u e   i n   t h e   c o l u m n   * /  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     f l o a t 6 4 _ t   X c h g ,   i n   =   0 . 0 f ,   i n 1 ;                                 / *   T e m p o r a r y   i n p u t   v a l u e s     * /  
     u i n t 3 2 _ t   i ,   r o w C n t ,   f l a g   =   0 U ,   j ,   l o o p C n t ,   k ,   l ;             / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   i n v e r s e   * /  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p S r c - > n u m C o l s )   | |   ( p D s t - > n u m R o w s   ! =   p D s t - > n u m C o l s )  
           | |   ( p S r c - > n u m R o w s   ! =   p D s t - > n u m R o w s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *         # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
  
     {  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 	   *   M a t r i x   I n v e r s e   c a n   b e   s o l v e d   u s i n g   e l e m e n t a r y   r o w   o p e r a t i o n s .  
 	   *  
 	   * 	 G a u s s - J o r d a n   M e t h o d :  
 	   *  
 	   * 	       1 .   F i r s t   c o m b i n e   t h e   i d e n t i t y   m a t r i x   a n d   t h e   i n p u t   m a t r i x   s e p a r a t e d   b y   a   b a r   t o   f o r m   a n  
 	   *                 a u g m e n t e d   m a t r i x   a s   f o l l o w s :  
 	   * 	 	 	 	                 _   	             	               _                   _ 	               _  
 	   * 	 	 	 	 	       |     a 1 1     a 1 2   |   1       0     |               |     X 1 1   X 1 2     |  
 	   * 	 	 	 	 	       |                       |                 |       =       |                       |  
 	   * 	 	 	 	 	       | _   a 2 1     a 2 2   |   0       1   _ |               | _   X 2 1   X 2 1   _ |  
 	   *  
 	   * 	 	 2 .   I n   o u r   i m p l e m e n t a t i o n ,   p D s t   M a t r i x   i s   u s e d   a s   i d e n t i t y   m a t r i x .  
 	   *  
 	   * 	 	 3 .   B e g i n   w i t h   t h e   f i r s t   r o w .   L e t   i   =   1 .  
 	   *  
 	   * 	         4 .   C h e c k   t o   s e e   i f   t h e   p i v o t   f o r   c o l u m n   i   i s   t h e   g r e a t e s t   o f   t h e   c o l u m n .  
 	   * 	 	       T h e   p i v o t   i s   t h e   e l e m e n t   o f   t h e   m a i n   d i a g o n a l   t h a t   i s   o n   t h e   c u r r e n t   r o w .  
 	   * 	 	       F o r   i n s t a n c e ,   i f   w o r k i n g   w i t h   r o w   i ,   t h e n   t h e   p i v o t   e l e m e n t   i s   a i i .  
 	   * 	 	       I f   t h e   p i v o t   i s   n o t   t h e   m o s t   s i g n i f i c a n t   o f   t h e   c o l u m n s ,   e x c h a n g e   t h a t   r o w   w i t h   a   r o w  
 	   * 	 	       b e l o w   i t   t h a t   d o e s   c o n t a i n   t h e   m o s t   s i g n i f i c a n t   v a l u e   i n   c o l u m n   i .   I f   t h e   m o s t  
 	   *                   s i g n i f i c a n t   v a l u e   o f   t h e   c o l u m n   i s   z e r o ,   t h e n   a n   i n v e r s e   t o   t h a t   m a t r i x   d o e s   n o t   e x i s t .  
 	   * 	 	       T h e   m o s t   s i g n i f i c a n t   v a l u e   o f   t h e   c o l u m n   i s   t h e   a b s o l u t e   m a x i m u m .  
 	   *  
 	   * 	         5 .   D i v i d e   e v e r y   e l e m e n t   o f   r o w   i   b y   t h e   p i v o t .  
 	   *  
 	   * 	         6 .   F o r   e v e r y   r o w   b e l o w   a n d     r o w   i ,   r e p l a c e   t h a t   r o w   w i t h   t h e   s u m   o f   t h a t   r o w   a n d  
 	   * 	 	       a   m u l t i p l e   o f   r o w   i   s o   t h a t   e a c h   n e w   e l e m e n t   i n   c o l u m n   i   b e l o w   r o w   i   i s   z e r o .  
 	   *  
 	   * 	         7 .   M o v e   t o   t h e   n e x t   r o w   a n d   c o l u m n   a n d   r e p e a t   s t e p s   2   t h r o u g h   5   u n t i l   y o u   h a v e   z e r o s  
 	   * 	 	       f o r   e v e r y   e l e m e n t   b e l o w   a n d   a b o v e   t h e   m a i n   d i a g o n a l .  
 	   *  
 	   * 	 	 8 .   N o w   a n   i d e n t i c a l   m a t r i x   i s   f o r m e d   t o   t h e   l e f t   o f   t h e   b a r ( i n p u t   m a t r i x ,   p S r c ) .  
 	   * 	 	       T h e r e f o r e ,   t h e   m a t r i x   t o   t h e   r i g h t   o f   t h e   b a r   i s   o u r   s o l u t i o n ( p D s t   m a t r i x ,   p D s t ) .  
 	   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
         / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   m a t r i x   * /  
         p O u t T 1   =   p O u t ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   r o w s   * /  
         r o w C n t   =   n u m R o w s ;  
  
         / *   M a k i n g   t h e   d e s t i n a t i o n   m a t r i x   a s   i d e n t i t y   m a t r i x   * /  
         w h i l e   ( r o w C n t   >   0 U )  
         {  
             / *   W r i t i n g   a l l   z e r o e s   i n   l o w e r   t r i a n g l e   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             j   =   n u m R o w s   -   r o w C n t ;  
             w h i l e   ( j   >   0 U )  
             {  
                 * p O u t T 1 + +   =   0 . 0 f ;  
                 j - - ;  
             }  
  
             / *   W r i t i n g   a l l   o n e s   i n   t h e   d i a g o n a l   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             * p O u t T 1 + +   =   1 . 0 f ;  
  
             / *   W r i t i n g   a l l   z e r o e s   i n   u p p e r   t r i a n g l e   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             j   =   r o w C n t   -   1 U ;  
             w h i l e   ( j   >   0 U )  
             {  
                 * p O u t T 1 + +   =   0 . 0 f ;  
                 j - - ;  
             }  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             r o w C n t - - ;  
         }  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   o f   t h e   i n p u t   m a t r i x .  
               A l l   t h e   e l e m e n t s   i n   e a c h   c o l u m n   a r e   p r o c e s s e d   b y   t h e   r o w   o p e r a t i o n s   * /  
         l o o p C n t   =   n u m C o l s ;  
  
         / *   I n d e x   m o d i f i e r   t o   n a v i g a t e   t h r o u g h   t h e   c o l u m n s   * /  
         l   =   0 U ;  
  
         w h i l e   ( l o o p C n t   >   0 U )  
         {  
             / *   C h e c k   i f   t h e   p i v o t   e l e m e n t   i s   z e r o . .  
               *   I f   i t   i s   z e r o   t h e n   i n t e r c h a n g e   t h e   r o w   w i t h   n o n   z e r o   r o w   b e l o w .  
               *   I f   t h e r e   i s   n o   n o n   z e r o   e l e m e n t   t o   r e p l a c e   i n   t h e   r o w s   b e l o w ,  
               *   t h e n   t h e   m a t r i x   i s   S i n g u l a r .   * /  
  
             / *   W o r k i n g   p o i n t e r   f o r   t h e   i n p u t   m a t r i x   t h a t   p o i n t s  
               *   t o   t h e   p i v o t   e l e m e n t   o f   t h e   p a r t i c u l a r   r o w     * /  
             p I n T 1   =   p I n   +   ( l   *   n u m C o l s ) ;  
  
             / *   W o r k i n g   p o i n t e r   f o r   t h e   d e s t i n a t i o n   m a t r i x   t h a t   p o i n t s  
               *   t o   t h e   p i v o t   e l e m e n t   o f   t h e   p a r t i c u l a r   r o w     * /  
             p O u t T 1   =   p O u t   +   ( l   *   n u m C o l s ) ;  
  
             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   p i v o t   v a l u e   * /  
             i n   =   * p I n T 1 ;  
  
             / *   G r a b   t h e   m o s t   s i g n i f i c a n t   v a l u e   f r o m   c o l u m n   l   * /  
             m a x C   =   0 ;  
             f o r   ( i   =   l ;   i   <   n u m R o w s ;   i + + )  
             {  
                 m a x C   =   * p I n T 1   >   0   ?   ( * p I n T 1   >   m a x C   ?   * p I n T 1   :   m a x C )   :   ( - * p I n T 1   >   m a x C   ?   - * p I n T 1   :   m a x C ) ;  
                 p I n T 1   + =   n u m C o l s ;  
             }  
  
             / *   U p d a t e   t h e   s t a t u s   i f   t h e   m a t r i x   i s   s i n g u l a r   * /  
             i f   ( m a x C   = =   0 . 0 f )  
             {  
                 r e t u r n   A R M _ M A T H _ S I N G U L A R ;  
             }  
  
             / *   R e s t o r e   p I n T 1     * /  
             p I n T 1   =   p I n ;  
  
             / *   D e s t i n a t i o n   p o i n t e r   m o d i f i e r   * /  
             k   =   1 U ;  
  
             / *   C h e c k   i f   t h e   p i v o t   e l e m e n t   i s   t h e   m o s t   s i g n i f i c a n t   o f   t h e   c o l u m n   * /  
             i f   (   ( i n   >   0 . 0 f   ?   i n   :   - i n )   ! =   m a x C )  
             {  
                 / *   L o o p   o v e r   t h e   n u m b e r   r o w s   p r e s e n t   b e l o w   * /  
                 i   =   n u m R o w s   -   ( l   +   1 U ) ;  
  
                 w h i l e   ( i   >   0 U )  
                 {  
                     / *   U p d a t e   t h e   i n p u t   a n d   d e s t i n a t i o n   p o i n t e r s   * /  
                     p I n T 2   =   p I n T 1   +   ( n u m C o l s   *   l ) ;  
                     p O u t T 2   =   p O u t T 1   +   ( n u m C o l s   *   k ) ;  
  
                     / *   L o o k   f o r   t h e   m o s t   s i g n i f i c a n t   e l e m e n t   t o  
                       *   r e p l a c e   i n   t h e   r o w s   b e l o w   * /  
                     i f   ( ( * p I n T 2   >   0 . 0 f   ?   * p I n T 2 :   - * p I n T 2 )   = =   m a x C )  
                     {  
                         / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s  
                           *   t o   t h e   r i g h t   o f   t h e   p i l o t   e l e m e n t   * /  
                         j   =   n u m C o l s   -   l ;  
  
                         w h i l e   ( j   >   0 U )  
                         {  
                             / *   E x c h a n g e   t h e   r o w   e l e m e n t s   o f   t h e   i n p u t   m a t r i x   * /  
                             X c h g   =   * p I n T 2 ;  
                             * p I n T 2 + +   =   * p I n T 1 ;  
                             * p I n T 1 + +   =   X c h g ;  
  
                             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                             j - - ;  
                         }  
  
                         / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
                         j   =   n u m C o l s ;  
  
                         w h i l e   ( j   >   0 U )  
                         {  
                             / *   E x c h a n g e   t h e   r o w   e l e m e n t s   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
                             X c h g   =   * p O u t T 2 ;  
                             * p O u t T 2 + +   =   * p O u t T 1 ;  
                             * p O u t T 1 + +   =   X c h g ;  
  
                             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                             j - - ;  
                         }  
  
                         / *   F l a g   t o   i n d i c a t e   w h e t h e r   e x c h a n g e   i s   d o n e   o r   n o t   * /  
                         f l a g   =   1 U ;  
  
                         / *   B r e a k   a f t e r   e x c h a n g e   i s   d o n e   * /  
                         b r e a k ;  
                     }  
  
                     / *   U p d a t e   t h e   d e s t i n a t i o n   p o i n t e r   m o d i f i e r   * /  
                     k + + ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     i - - ;  
                 }  
             }  
  
             / *   U p d a t e   t h e   s t a t u s   i f   t h e   m a t r i x   i s   s i n g u l a r   * /  
             i f   ( ( f l a g   ! =   1 U )   & &   ( i n   = =   0 . 0 f ) )  
             {  
                 r e t u r n   A R M _ M A T H _ S I N G U L A R ;  
             }  
  
             / *   P o i n t s   t o   t h e   p i v o t   r o w   o f   i n p u t   a n d   d e s t i n a t i o n   m a t r i c e s   * /  
             p P i v o t R o w I n   =   p I n   +   ( l   *   n u m C o l s ) ;  
             p P i v o t R o w D s t   =   p O u t   +   ( l   *   n u m C o l s ) ;  
  
             / *   T e m p o r a r y   p o i n t e r s   t o   t h e   p i v o t   r o w   p o i n t e r s   * /  
             p I n T 1   =   p P i v o t R o w I n ;  
             p I n T 2   =   p P i v o t R o w D s t ;  
  
             / *   P i v o t   e l e m e n t   o f   t h e   r o w   * /  
             i n   =   * p P i v o t R o w I n ;  
  
             / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s  
               *   t o   t h e   r i g h t   o f   t h e   p i l o t   e l e m e n t   * /  
             j   =   ( n u m C o l s   -   l ) ;  
  
             w h i l e   ( j   >   0 U )  
             {  
                 / *   D i v i d e   e a c h   e l e m e n t   o f   t h e   r o w   o f   t h e   i n p u t   m a t r i x  
                   *   b y   t h e   p i v o t   e l e m e n t   * /  
                 i n 1   =   * p I n T 1 ;  
                 * p I n T 1 + +   =   i n 1   /   i n ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 j - - ;  
             }  
  
             / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             j   =   n u m C o l s ;  
  
             w h i l e   ( j   >   0 U )  
             {  
                 / *   D i v i d e   e a c h   e l e m e n t   o f   t h e   r o w   o f   t h e   d e s t i n a t i o n   m a t r i x  
                   *   b y   t h e   p i v o t   e l e m e n t   * /  
                 i n 1   =   * p I n T 2 ;  
                 * p I n T 2 + +   =   i n 1   /   i n ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 j - - ;  
             }  
  
             / *   R e p l a c e   t h e   r o w s   w i t h   t h e   s u m   o f   t h a t   r o w   a n d   a   m u l t i p l e   o f   r o w   i  
               *   s o   t h a t   e a c h   n e w   e l e m e n t   i n   c o l u m n   i   a b o v e   r o w   i   i s   z e r o . * /  
  
             / *   T e m p o r a r y   p o i n t e r s   f o r   i n p u t   a n d   d e s t i n a t i o n   m a t r i c e s   * /  
             p I n T 1   =   p I n ;  
             p I n T 2   =   p O u t ;  
  
             / *   i n d e x   u s e d   t o   c h e c k   f o r   p i v o t   e l e m e n t   * /  
             i   =   0 U ;  
  
             / *   L o o p   o v e r   n u m b e r   o f   r o w s   * /  
             / *     t o   b e   r e p l a c e d   b y   t h e   s u m   o f   t h a t   r o w   a n d   a   m u l t i p l e   o f   r o w   i   * /  
             k   =   n u m R o w s ;  
  
             w h i l e   ( k   >   0 U )  
             {  
                 / *   C h e c k   f o r   t h e   p i v o t   e l e m e n t   * /  
                 i f   ( i   = =   l )  
                 {  
                     / *   I f   t h e   p r o c e s s i n g   e l e m e n t   i s   t h e   p i v o t   e l e m e n t ,  
                           o n l y   t h e   c o l u m n s   t o   t h e   r i g h t   a r e   t o   b e   p r o c e s s e d   * /  
                     p I n T 1   + =   n u m C o l s   -   l ;  
  
                     p I n T 2   + =   n u m C o l s ;  
                 }  
                 e l s e  
                 {  
                     / *   E l e m e n t   o f   t h e   r e f e r e n c e   r o w   * /  
                     i n   =   * p I n T 1 ;  
  
                     / *   W o r k i n g   p o i n t e r s   f o r   i n p u t   a n d   d e s t i n a t i o n   p i v o t   r o w s   * /  
                     p P R T _ i n   =   p P i v o t R o w I n ;  
                     p P R T _ p D s t   =   p P i v o t R o w D s t ;  
  
                     / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   t o   t h e   r i g h t   o f   t h e   p i v o t   e l e m e n t ,  
                           t o   r e p l a c e   t h e   e l e m e n t s   i n   t h e   i n p u t   m a t r i x   * /  
                     j   =   ( n u m C o l s   -   l ) ;  
  
                     w h i l e   ( j   >   0 U )  
                     {  
                         / *   R e p l a c e   t h e   e l e m e n t   b y   t h e   s u m   o f   t h a t   r o w  
                               a n d   a   m u l t i p l e   o f   t h e   r e f e r e n c e   r o w     * /  
                         i n 1   =   * p I n T 1 ;  
                         * p I n T 1 + +   =   i n 1   -   ( i n   *   * p P R T _ i n + + ) ;  
  
                         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                         j - - ;  
                     }  
  
                     / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   t o  
                           r e p l a c e   t h e   e l e m e n t s   i n   t h e   d e s t i n a t i o n   m a t r i x   * /  
                     j   =   n u m C o l s ;  
  
                     w h i l e   ( j   >   0 U )  
                     {  
                         / *   R e p l a c e   t h e   e l e m e n t   b y   t h e   s u m   o f   t h a t   r o w  
                               a n d   a   m u l t i p l e   o f   t h e   r e f e r e n c e   r o w     * /  
                         i n 1   =   * p I n T 2 ;  
                         * p I n T 2 + +   =   i n 1   -   ( i n   *   * p P R T _ p D s t + + ) ;  
  
                         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                         j - - ;  
                     }  
  
                 }  
  
                 / *   I n c r e m e n t   t h e   t e m p o r a r y   i n p u t   p o i n t e r   * /  
                 p I n T 1   =   p I n T 1   +   l ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 k - - ;  
  
                 / *   I n c r e m e n t   t h e   p i v o t   i n d e x   * /  
                 i + + ;  
             }  
  
             / *   I n c r e m e n t   t h e   i n p u t   p o i n t e r   * /  
             p I n + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             l o o p C n t - - ;  
  
             / *   I n c r e m e n t   t h e   i n d e x   m o d i f i e r   * /  
             l + + ;  
         }  
  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     f l o a t 6 4 _ t   X c h g ,   i n   =   0 . 0 f ;                                           / *   T e m p o r a r y   i n p u t   v a l u e s     * /  
     u i n t 3 2 _ t   i ,   r o w C n t ,   f l a g   =   0 U ,   j ,   l o o p C n t ,   k ,   l ;             / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   i n v e r s e   * /  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p S r c - > n u m C o l s )   | |   ( p D s t - > n u m R o w s   ! =   p D s t - > n u m C o l s )  
           | |   ( p S r c - > n u m R o w s   ! =   p D s t - > n u m R o w s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *             # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
     {  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
 	   *   M a t r i x   I n v e r s e   c a n   b e   s o l v e d   u s i n g   e l e m e n t a r y   r o w   o p e r a t i o n s .  
 	   *  
 	   * 	 G a u s s - J o r d a n   M e t h o d :  
 	   *  
 	   * 	       1 .   F i r s t   c o m b i n e   t h e   i d e n t i t y   m a t r i x   a n d   t h e   i n p u t   m a t r i x   s e p a r a t e d   b y   a   b a r   t o   f o r m   a n  
 	   *                 a u g m e n t e d   m a t r i x   a s   f o l l o w s :  
 	   * 	 	 	 	                 _     _ 	             _ 	         _ 	       _       _                   _ 	               _  
 	   * 	 	 	 	 	       |     |     a 1 1     a 1 2     |   |   |   1       0     |       |               |     X 1 1   X 1 2     |  
 	   * 	 	 	 	 	       |     |                         |   |   |                 |       |       =       |                       |  
 	   * 	 	 	 	 	       | _   | _   a 2 1     a 2 2   _ |   |   | _ 0       1   _ |     _ |               | _   X 2 1   X 2 1   _ |  
 	   *  
 	   * 	 	 2 .   I n   o u r   i m p l e m e n t a t i o n ,   p D s t   M a t r i x   i s   u s e d   a s   i d e n t i t y   m a t r i x .  
 	   *  
 	   * 	 	 3 .   B e g i n   w i t h   t h e   f i r s t   r o w .   L e t   i   =   1 .  
 	   *  
 	   * 	         4 .   C h e c k   t o   s e e   i f   t h e   p i v o t   f o r   r o w   i   i s   z e r o .  
 	   * 	 	       T h e   p i v o t   i s   t h e   e l e m e n t   o f   t h e   m a i n   d i a g o n a l   t h a t   i s   o n   t h e   c u r r e n t   r o w .  
 	   * 	 	       F o r   i n s t a n c e ,   i f   w o r k i n g   w i t h   r o w   i ,   t h e n   t h e   p i v o t   e l e m e n t   i s   a i i .  
 	   * 	 	       I f   t h e   p i v o t   i s   z e r o ,   e x c h a n g e   t h a t   r o w   w i t h   a   r o w   b e l o w   i t   t h a t   d o e s   n o t  
 	   * 	 	       c o n t a i n   a   z e r o   i n   c o l u m n   i .   I f   t h i s   i s   n o t   p o s s i b l e ,   t h e n   a n   i n v e r s e  
 	   * 	 	       t o   t h a t   m a t r i x   d o e s   n o t   e x i s t .  
 	   *  
 	   * 	         5 .   D i v i d e   e v e r y   e l e m e n t   o f   r o w   i   b y   t h e   p i v o t .  
 	   *  
 	   * 	         6 .   F o r   e v e r y   r o w   b e l o w   a n d     r o w   i ,   r e p l a c e   t h a t   r o w   w i t h   t h e   s u m   o f   t h a t   r o w   a n d  
 	   * 	 	       a   m u l t i p l e   o f   r o w   i   s o   t h a t   e a c h   n e w   e l e m e n t   i n   c o l u m n   i   b e l o w   r o w   i   i s   z e r o .  
 	   *  
 	   * 	         7 .   M o v e   t o   t h e   n e x t   r o w   a n d   c o l u m n   a n d   r e p e a t   s t e p s   2   t h r o u g h   5   u n t i l   y o u   h a v e   z e r o s  
 	   * 	 	       f o r   e v e r y   e l e m e n t   b e l o w   a n d   a b o v e   t h e   m a i n   d i a g o n a l .  
 	   *  
 	   * 	 	 8 .   N o w   a n   i d e n t i c a l   m a t r i x   i s   f o r m e d   t o   t h e   l e f t   o f   t h e   b a r ( i n p u t   m a t r i x ,   s r c ) .  
 	   * 	 	       T h e r e f o r e ,   t h e   m a t r i x   t o   t h e   r i g h t   o f   t h e   b a r   i s   o u r   s o l u t i o n ( d s t   m a t r i x ,   d s t ) .  
 	   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
         / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   m a t r i x   * /  
         p O u t T 1   =   p O u t ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   r o w s   * /  
         r o w C n t   =   n u m R o w s ;  
  
         / *   M a k i n g   t h e   d e s t i n a t i o n   m a t r i x   a s   i d e n t i t y   m a t r i x   * /  
         w h i l e   ( r o w C n t   >   0 U )  
         {  
             / *   W r i t i n g   a l l   z e r o e s   i n   l o w e r   t r i a n g l e   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             j   =   n u m R o w s   -   r o w C n t ;  
             w h i l e   ( j   >   0 U )  
             {  
                 * p O u t T 1 + +   =   0 . 0 f ;  
                 j - - ;  
             }  
  
             / *   W r i t i n g   a l l   o n e s   i n   t h e   d i a g o n a l   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             * p O u t T 1 + +   =   1 . 0 f ;  
  
             / *   W r i t i n g   a l l   z e r o e s   i n   u p p e r   t r i a n g l e   o f   t h e   d e s t i n a t i o n   m a t r i x   * /  
             j   =   r o w C n t   -   1 U ;  
             w h i l e   ( j   >   0 U )  
             {  
                 * p O u t T 1 + +   =   0 . 0 f ;  
                 j - - ;  
             }  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             r o w C n t - - ;  
         }  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   o f   t h e   i n p u t   m a t r i x .  
               A l l   t h e   e l e m e n t s   i n   e a c h   c o l u m n   a r e   p r o c e s s e d   b y   t h e   r o w   o p e r a t i o n s   * /  
         l o o p C n t   =   n u m C o l s ;  
  
         / *   I n d e x   m o d i f i e r   t o   n a v i g a t e   t h r o u g h   t h e   c o l u m n s   * /  
         l   =   0 U ;  
         / / f o r ( l o o p C n t   =   0 U ;   l o o p C n t   <   n u m C o l s ;   l o o p C n t + + )  
         w h i l e   ( l o o p C n t   >   0 U )  
         {  
             / *   C h e c k   i f   t h e   p i v o t   e l e m e n t   i s   z e r o . .  
               *   I f   i t   i s   z e r o   t h e n   i n t e r c h a n g e   t h e   r o w   w i t h   n o n   z e r o   r o w   b e l o w .  
               *   I f   t h e r e   i s   n o   n o n   z e r o   e l e m e n t   t o   r e p l a c e   i n   t h e   r o w s   b e l o w ,  
               *   t h e n   t h e   m a t r i x   i s   S i n g u l a r .   * /  
  
             / *   W o r k i n g   p o i n t e r   f o r   t h e   i n p u t   m a t r i x   t h a t   p o i n t s  
               *   t o   t h e   p i v o t   e l e m e n t   o f   t h e   p a r t i c u l a r   r o w     * /  
             p I n T 1   =   p I n   +   ( l   *   n u m C o l s ) ;  
  
             / *   W o r k i n g   p o i n t e r   f o r   t h e   d e s t i n a t i o n   m a t r i x   t h a t   p o i n t s  
               *   t o   t h e   p i v o t   e l e m e n t   o f   t h e   p a r t i c u l a r   r o w     * /  
             p O u t T 1   =   p O u t   +   ( l   *   n u m C o l s ) ;  
  
             / *   T e m p o r a r y   v a r i a b l e   t o   h o l d   t h e   p i v o t   v a l u e   * /  
             i n   =   * p I n T 1 ;  
  
             / *   D e s t i n a t i o n   p o i n t e r   m o d i f i e r   * /  
             k   =   1 U ;  
  
             / *   C h e c k   i f   t h e   p i v o t   e l e m e n t   i s   z e r o   * /  
             i f   ( * p I n T 1   = =   0 . 0 f )  
             {  
                 / *   L o o p   o v e r   t h e   n u m b e r   r o w s   p r e s e n t   b e l o w   * /  
                 f o r   ( i   =   ( l   +   1 U ) ;   i   <   n u m R o w s ;   i + + )  
                 {  
                     / *   U p d a t e   t h e   i n p u t   a n d   d e s t i n a t i o n   p o i n t e r s   * /  
                     p I n T 2   =   p I n T 1   +   ( n u m C o l s   *   l ) ;  
                     p O u t T 2   =   p O u t T 1   +   ( n u m C o l s   *   k ) ;  
  
                     / *   C h e c k   i f   t h e r e   i s   a   n o n   z e r o   p i v o t   e l e m e n t   t o  
                       *   r e p l a c e   i n   t h e   r o w s   b e l o w   * /  
                     i f   ( * p I n T 2   ! =   0 . 0 f )  
                     {  
                         / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s  
                           *   t o   t h e   r i g h t   o f   t h e   p i l o t   e l e m e n t   * /  
                         f o r   ( j   =   0 U ;   j   <   ( n u m C o l s   -   l ) ;   j + + )  
                         {  
                             / *   E x c h a n g e   t h e   r o w   e l e m e n t s   o f   t h e   i n p u t   m a t r i x   * /  
                             X c h g   =   * p I n T 2 ;  
                             * p I n T 2 + +   =   * p I n T 1 ;  
                             * p I n T 1 + +   =   X c h g ;  
                         }  
  
                         f o r   ( j   =   0 U ;   j   <   n u m C o l s ;   j + + )  
                         {  
                             X c h g   =   * p O u t T 2 ;  
                             * p O u t T 2 + +   =   * p O u t T 1 ;  
                             * p O u t T 1 + +   =   X c h g ;  
                         }  
  
                         / *   F l a g   t o   i n d i c a t e   w h e t h e r   e x c h a n g e   i s   d o n e   o r   n o t   * /  
                         f l a g   =   1 U ;  
  
                         / *   B r e a k   a f t e r   e x c h a n g e   i s   d o n e   * /  
                         b r e a k ;  
                     }  
  
                     / *   U p d a t e   t h e   d e s t i n a t i o n   p o i n t e r   m o d i f i e r   * /  
                     k + + ;  
                 }  
             }  
  
             / *   U p d a t e   t h e   s t a t u s   i f   t h e   m a t r i x   i s   s i n g u l a r   * /  
             i f   ( ( f l a g   ! =   1 U )   & &   ( i n   = =   0 . 0 f ) )  
             {  
                 r e t u r n   A R M _ M A T H _ S I N G U L A R ;  
             }  
  
             / *   P o i n t s   t o   t h e   p i v o t   r o w   o f   i n p u t   a n d   d e s t i n a t i o n   m a t r i c e s   * /  
             p P i v o t R o w I n   =   p I n   +   ( l   *   n u m C o l s ) ;  
             p P i v o t R o w D s t   =   p O u t   +   ( l   *   n u m C o l s ) ;  
  
             / *   T e m p o r a r y   p o i n t e r s   t o   t h e   p i v o t   r o w   p o i n t e r s   * /  
             p I n T 1   =   p P i v o t R o w I n ;  
             p O u t T 1   =   p P i v o t R o w D s t ;  
  
             / *   P i v o t   e l e m e n t   o f   t h e   r o w   * /  
             i n   =   * ( p I n   +   ( l   *   n u m C o l s ) ) ;  
  
             / *   L o o p   o v e r   n u m b e r   o f   c o l u m n s  
               *   t o   t h e   r i g h t   o f   t h e   p i l o t   e l e m e n t   * /  
             f o r   ( j   =   0 U ;   j   <   ( n u m C o l s   -   l ) ;   j + + )  
             {  
                 / *   D i v i d e   e a c h   e l e m e n t   o f   t h e   r o w   o f   t h e   i n p u t   m a t r i x  
                   *   b y   t h e   p i v o t   e l e m e n t   * /  
                 * p I n T 1   =   * p I n T 1   /   i n ;  
                 p I n T 1 + + ;  
             }  
             f o r   ( j   =   0 U ;   j   <   n u m C o l s ;   j + + )  
             {  
                 / *   D i v i d e   e a c h   e l e m e n t   o f   t h e   r o w   o f   t h e   d e s t i n a t i o n   m a t r i x  
                   *   b y   t h e   p i v o t   e l e m e n t   * /  
                 * p O u t T 1   =   * p O u t T 1   /   i n ;  
                 p O u t T 1 + + ;  
             }  
  
             / *   R e p l a c e   t h e   r o w s   w i t h   t h e   s u m   o f   t h a t   r o w   a n d   a   m u l t i p l e   o f   r o w   i  
               *   s o   t h a t   e a c h   n e w   e l e m e n t   i n   c o l u m n   i   a b o v e   r o w   i   i s   z e r o . * /  
  
             / *   T e m p o r a r y   p o i n t e r s   f o r   i n p u t   a n d   d e s t i n a t i o n   m a t r i c e s   * /  
             p I n T 1   =   p I n ;  
             p O u t T 1   =   p O u t ;  
  
             f o r   ( i   =   0 U ;   i   <   n u m R o w s ;   i + + )  
             {  
                 / *   C h e c k   f o r   t h e   p i v o t   e l e m e n t   * /  
                 i f   ( i   = =   l )  
                 {  
                     / *   I f   t h e   p r o c e s s i n g   e l e m e n t   i s   t h e   p i v o t   e l e m e n t ,  
                           o n l y   t h e   c o l u m n s   t o   t h e   r i g h t   a r e   t o   b e   p r o c e s s e d   * /  
                     p I n T 1   + =   n u m C o l s   -   l ;  
                     p O u t T 1   + =   n u m C o l s ;  
                 }  
                 e l s e  
                 {  
                     / *   E l e m e n t   o f   t h e   r e f e r e n c e   r o w   * /  
                     i n   =   * p I n T 1 ;  
  
                     / *   W o r k i n g   p o i n t e r s   f o r   i n p u t   a n d   d e s t i n a t i o n   p i v o t   r o w s   * /  
                     p P R T _ i n   =   p P i v o t R o w I n ;  
                     p P R T _ p D s t   =   p P i v o t R o w D s t ;  
  
                     / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   t o   t h e   r i g h t   o f   t h e   p i v o t   e l e m e n t ,  
                           t o   r e p l a c e   t h e   e l e m e n t s   i n   t h e   i n p u t   m a t r i x   * /  
                     f o r   ( j   =   0 U ;   j   <   ( n u m C o l s   -   l ) ;   j + + )  
                     {  
                         / *   R e p l a c e   t h e   e l e m e n t   b y   t h e   s u m   o f   t h a t   r o w  
                               a n d   a   m u l t i p l e   o f   t h e   r e f e r e n c e   r o w     * /  
                         * p I n T 1   =   * p I n T 1   -   ( i n   *   * p P R T _ i n + + ) ;  
                         p I n T 1 + + ;  
                     }  
                     / *   L o o p   o v e r   t h e   n u m b e r   o f   c o l u m n s   t o  
                           r e p l a c e   t h e   e l e m e n t s   i n   t h e   d e s t i n a t i o n   m a t r i x   * /  
                     f o r   ( j   =   0 U ;   j   <   n u m C o l s ;   j + + )  
                     {  
                         / *   R e p l a c e   t h e   e l e m e n t   b y   t h e   s u m   o f   t h a t   r o w  
                               a n d   a   m u l t i p l e   o f   t h e   r e f e r e n c e   r o w     * /  
                         * p O u t T 1   =   * p O u t T 1   -   ( i n   *   * p P R T _ p D s t + + ) ;  
                         p O u t T 1 + + ;  
                     }  
  
                 }  
                 / *   I n c r e m e n t   t h e   t e m p o r a r y   i n p u t   p o i n t e r   * /  
                 p I n T 1   =   p I n T 1   +   l ;  
             }  
             / *   I n c r e m e n t   t h e   i n p u t   p o i n t e r   * /  
             p I n + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             l o o p C n t - - ;  
             / *   I n c r e m e n t   t h e   i n d e x   m o d i f i e r   * /  
             l + + ;  
         }  
  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S U C C E S S   * /  
         s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
  
         i f   ( ( f l a g   ! =   1 U )   & &   ( i n   = =   0 . 0 f ) )  
         {  
             p I n   =   p S r c - > p D a t a ;  
             f o r   ( i   =   0 ;   i   <   n u m R o w s   *   n u m C o l s ;   i + + )  
             {  
                 i f   ( p I n [ i ]   ! =   0 . 0 f )  
                         b r e a k ;  
             }  
  
             i f   ( i   = =   n u m R o w s   *   n u m C o l s )  
                 s t a t u s   =   A R M _ M A T H _ S I N G U L A R ;  
         }  
     }  
     / *   R e t u r n   t o   a p p l i c a t i o n   * /  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M a t r i x I n v   g r o u p  
   * /  