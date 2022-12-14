??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ r f f t _ q 3 1 . c  
   *   D e s c r i p t i o n :     F F T   &   R I F F T   Q 3 1   p r o c e s s   f u n c t i o n  
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
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   I n t e r n a l   f u n c t i o n s   p r o t o t y p e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 v o i d   a r m _ s p l i t _ r f f t _ q 3 1 (  
         q 3 1 _ t   *   p S r c ,  
         u i n t 3 2 _ t   f f t L e n ,  
         q 3 1 _ t   *   p A T a b l e ,  
         q 3 1 _ t   *   p B T a b l e ,  
         q 3 1 _ t   *   p D s t ,  
         u i n t 3 2 _ t   m o d i f i e r ) ;  
  
 v o i d   a r m _ s p l i t _ r i f f t _ q 3 1 (  
         q 3 1 _ t   *   p S r c ,  
         u i n t 3 2 _ t   f f t L e n ,  
         q 3 1 _ t   *   p A T a b l e ,  
         q 3 1 _ t   *   p B T a b l e ,  
         q 3 1 _ t   *   p D s t ,  
         u i n t 3 2 _ t   m o d i f i e r ) ;  
  
 / * *  
 *   @ a d d t o g r o u p   R e a l F F T  
 *   @ {  
 * /  
  
 / * *  
 *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   R F F T / R I F F T .  
 *   @ p a r a m [ i n ]     * S         p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   R F F T / R I F F T   s t r u c t u r e .  
 *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   i n p u t   b u f f e r .  
 *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   o u t p u t   b u f f e r .  
 *   @ r e t u r n   n o n e .  
 *  
 *   \ p a r   I n p u t   a n   o u t p u t   f o r m a t s :  
 *   \ p a r  
 *   I n t e r n a l l y   i n p u t   i s   d o w n s c a l e d   b y   2   f o r   e v e r y   s t a g e   t o   a v o i d   s a t u r a t i o n s   i n s i d e   C F F T / C I F F T   p r o c e s s .  
 *   H e n c e   t h e   o u t p u t   f o r m a t   i s   d i f f e r e n t   f o r   d i f f e r e n t   R F F T   s i z e s .  
 *   T h e   i n p u t   a n d   o u t p u t   f o r m a t s   f o r   d i f f e r e n t   R F F T   s i z e s   a n d   n u m b e r   o f   b i t s   t o   u p s c a l e   a r e   m e n t i o n e d   i n   t h e   t a b l e s   b e l o w   f o r   R F F T   a n d   R I F F T :  
 *   \ p a r  
 *   \ i m a g e   h t m l   R F F T Q 3 1 . g i f   " I n p u t   a n d   O u t p u t   F o r m a t s   f o r   Q 3 1   R F F T "  
 *  
 *   \ p a r  
 *   \ i m a g e   h t m l   R I F F T Q 3 1 . g i f   " I n p u t   a n d   O u t p u t   F o r m a t s   f o r   Q 3 1   R I F F T "  
 * /  
 v o i d   a r m _ r f f t _ q 3 1 (  
         c o n s t   a r m _ r f f t _ i n s t a n c e _ q 3 1   *   S ,  
         q 3 1 _ t   *   p S r c ,  
         q 3 1 _ t   *   p D s t )  
 {  
         c o n s t   a r m _ c f f t _ i n s t a n c e _ q 3 1   * S _ C F F T   =   S - > p C f f t ;  
         u i n t 3 2 _ t   i ;  
         u i n t 3 2 _ t   L 2   =   S - > f f t L e n R e a l   > >   1 ;  
  
         / *   C a l c u l a t i o n   o f   R I F F T   o f   i n p u t   * /  
         i f   ( S - > i f f t F l a g R   = =   1 U )  
         {  
                 / *     R e a l   I F F T   c o r e   p r o c e s s   * /  
                 a r m _ s p l i t _ r i f f t _ q 3 1 ( p S r c ,   L 2 ,   S - > p T w i d d l e A R e a l ,  
                                                         S - > p T w i d d l e B R e a l ,   p D s t ,   S - > t w i d C o e f R M o d i f i e r ) ;  
  
                 / *   C o m p l e x   I F F T   p r o c e s s   * /  
                 a r m _ c f f t _ q 3 1 ( S _ C F F T ,   p D s t ,   S - > i f f t F l a g R ,   S - > b i t R e v e r s e F l a g R ) ;  
  
                 f o r ( i = 0 ; i < S - > f f t L e n R e a l ; i + + )  
                 {  
                         p D s t [ i ]   =   p D s t [ i ]   < <   1 ;  
                 }  
         }  
         e l s e  
         {  
                 / *   C a l c u l a t i o n   o f   R F F T   o f   i n p u t   * /  
  
                 / *   C o m p l e x   F F T   p r o c e s s   * /  
                 a r m _ c f f t _ q 3 1 ( S _ C F F T ,   p S r c ,   S - > i f f t F l a g R ,   S - > b i t R e v e r s e F l a g R ) ;  
  
                 / *     R e a l   F F T   c o r e   p r o c e s s   * /  
                 a r m _ s p l i t _ r f f t _ q 3 1 ( p S r c ,   L 2 ,   S - > p T w i d d l e A R e a l ,  
                                                         S - > p T w i d d l e B R e a l ,   p D s t ,   S - > t w i d C o e f R M o d i f i e r ) ;  
         }  
 }  
  
 / * *  
 *   @ }   e n d   o f   R e a l F F T   g r o u p  
 * /  
  
 / * *  
 *   @ b r i e f     C o r e   R e a l   F F T   p r o c e s s  
 *   @ p a r a m [ i n ]       * p S r c   	 	 	 	 p o i n t s   t o   t h e   i n p u t   b u f f e r .  
 *   @ p a r a m [ i n ]       f f t L e n     	 	 	         l e n g t h   o f   F F T .  
 *   @ p a r a m [ i n ]       * p A T a b l e   	 	 	 p o i n t s   t o   t h e   t w i d d l e   C o e f   A   b u f f e r .  
 *   @ p a r a m [ i n ]       * p B T a b l e   	 	 	 p o i n t s   t o   t h e   t w i d d l e   C o e f   B   b u f f e r .  
 *   @ p a r a m [ o u t ]     * p D s t   	 	 	 	 p o i n t s   t o   t h e   o u t p u t   b u f f e r .  
 *   @ p a r a m [ i n ]       m o d i f i e r   	                 t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .  
 *   @ r e t u r n   n o n e .  
 * /  
 v o i d   a r m _ s p l i t _ r f f t _ q 3 1 (  
         q 3 1 _ t   *   p S r c ,  
         u i n t 3 2 _ t   f f t L e n ,  
         q 3 1 _ t   *   p A T a b l e ,  
         q 3 1 _ t   *   p B T a b l e ,  
         q 3 1 _ t   *   p D s t ,  
         u i n t 3 2 _ t   m o d i f i e r )  
 {  
         u i n t 3 2 _ t   i ;                                                                         / *   L o o p   C o u n t e r   * /  
         q 3 1 _ t   o u t R ,   o u t I ;                                                             / *   T e m p o r a r y   v a r i a b l e s   f o r   o u t p u t   * /  
         q 3 1 _ t   * p C o e f A ,   * p C o e f B ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   t w i d d l e   f a c t o r s   * /  
         q 3 1 _ t   C o e f A 1 ,   C o e f A 2 ,   C o e f B 1 ;                                     / *   T e m p o r a r y   v a r i a b l e s   f o r   t w i d d l e   c o e f f i c i e n t s   * /  
         q 3 1 _ t   * p O u t 1   =   & p D s t [ 2 ] ,   * p O u t 2   =   & p D s t [ ( 4 U   *   f f t L e n )   -   1 U ] ;  
         q 3 1 _ t   * p I n 1   =   & p S r c [ 2 ] ,   * p I n 2   =   & p S r c [ ( 2 U   *   f f t L e n )   -   1 U ] ;  
  
         / *   I n i t   c o e f f i c i e n t   p o i n t e r s   * /  
         p C o e f A   =   & p A T a b l e [ m o d i f i e r   *   2 U ] ;  
         p C o e f B   =   & p B T a b l e [ m o d i f i e r   *   2 U ] ;  
  
         i   =   f f t L e n   -   1 U ;  
  
         w h i l e   ( i   >   0 U )  
         {  
                 / *  
                 o u t R   =   ( p S r c [ 2   *   i ]   *   p A T a b l e [ 2   *   i ]   -   p S r c [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i   +   1 ]  
                 +   p S r c [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i ]   +  
                 p S r c [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i   +   1 ] ) ;  
                 * /  
  
                 / *   o u t I   =   ( p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i ]   +   p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i   +   1 ]   +  
                 p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i   +   1 ]   -  
                 p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i ] ) ;   * /  
  
                 C o e f A 1   =   * p C o e f A + + ;  
                 C o e f A 2   =   * p C o e f A ;  
  
                 / *   o u t R   =   ( p S r c [ 2   *   i ]   *   p A T a b l e [ 2   *   i ]   * /  
                 m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 1 ,   C o e f A 1 ) ;  
  
                 / *   o u t I   =   p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 1 + + ,   C o e f A 2 ) ;  
  
                 / *   -   p S r c [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 1 ,   C o e f A 2 ) ;  
  
                 / *   ( p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 1 + + ,   C o e f A 1 ) ;  
  
                 / *   p S r c [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i ]     * /  
                 m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 2 ,   C o e f A 2 ) ;  
                 C o e f B 1   =   * p C o e f B ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 2 - - ,   C o e f B 1 ) ;  
  
                 / *   p S r c [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 2 ,   C o e f B 1 ) ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i ]   * /  
                 m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 2 - - ,   C o e f A 2 ) ;  
  
                 / *   w r i t e   o u t p u t   * /  
                 * p O u t 1 + +   =   o u t R ;  
                 * p O u t 1 + +   =   o u t I ;  
  
                 / *   w r i t e   c o m p l e x   c o n j u g a t e   o u t p u t   * /  
                 * p O u t 2 - -   =   - o u t I ;  
                 * p O u t 2 - -   =   o u t R ;  
  
                 / *   u p d a t e   c o e f f i c i e n t   p o i n t e r   * /  
                 p C o e f B   =   p C o e f B   +   ( m o d i f i e r   *   2 U ) ;  
                 p C o e f A   =   p C o e f A   +   ( ( m o d i f i e r   *   2 U )   -   1 U ) ;  
  
                 i - - ;  
         }  
         p D s t [ 2 U   *   f f t L e n ]   =   ( p S r c [ 0 ]   -   p S r c [ 1 ] )   > >   1 ;  
         p D s t [ ( 2 U   *   f f t L e n )   +   1 U ]   =   0 ;  
  
         p D s t [ 0 ]   =   ( p S r c [ 0 ]   +   p S r c [ 1 ] )   > >   1 ;  
         p D s t [ 1 ]   =   0 ;  
 }  
  
 / * *  
 *   @ b r i e f     C o r e   R e a l   I F F T   p r o c e s s  
 *   @ p a r a m [ i n ]       * p S r c   	 	 	 	 p o i n t s   t o   t h e   i n p u t   b u f f e r .  
 *   @ p a r a m [ i n ]       f f t L e n     	 	 	         l e n g t h   o f   F F T .  
 *   @ p a r a m [ i n ]       * p A T a b l e   	 	 	 p o i n t s   t o   t h e   t w i d d l e   C o e f   A   b u f f e r .  
 *   @ p a r a m [ i n ]       * p B T a b l e   	 	 	 p o i n t s   t o   t h e   t w i d d l e   C o e f   B   b u f f e r .  
 *   @ p a r a m [ o u t ]     * p D s t   	 	 	 	 p o i n t s   t o   t h e   o u t p u t   b u f f e r .  
 *   @ p a r a m [ i n ]       m o d i f i e r   	                 t w i d d l e   c o e f f i c i e n t   m o d i f i e r   t h a t   s u p p o r t s   d i f f e r e n t   s i z e   F F T s   w i t h   t h e   s a m e   t w i d d l e   f a c t o r   t a b l e .  
 *   @ r e t u r n   n o n e .  
 * /  
 v o i d   a r m _ s p l i t _ r i f f t _ q 3 1 (  
         q 3 1 _ t   *   p S r c ,  
         u i n t 3 2 _ t   f f t L e n ,  
         q 3 1 _ t   *   p A T a b l e ,  
         q 3 1 _ t   *   p B T a b l e ,  
         q 3 1 _ t   *   p D s t ,  
         u i n t 3 2 _ t   m o d i f i e r )  
 {  
         q 3 1 _ t   o u t R ,   o u t I ;                                                             / *   T e m p o r a r y   v a r i a b l e s   f o r   o u t p u t   * /  
         q 3 1 _ t   * p C o e f A ,   * p C o e f B ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   t w i d d l e   f a c t o r s   * /  
         q 3 1 _ t   C o e f A 1 ,   C o e f A 2 ,   C o e f B 1 ;                                     / *   T e m p o r a r y   v a r i a b l e s   f o r   t w i d d l e   c o e f f i c i e n t s   * /  
         q 3 1 _ t   * p I n 1   =   & p S r c [ 0 ] ,   * p I n 2   =   & p S r c [ ( 2 U   *   f f t L e n )   +   1 U ] ;  
  
         p C o e f A   =   & p A T a b l e [ 0 ] ;  
         p C o e f B   =   & p B T a b l e [ 0 ] ;  
  
         w h i l e   ( f f t L e n   >   0 U )  
         {  
                 / *  
                 o u t R   =   ( p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i ]   +   p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i   +   1 ]   +  
                 p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i ]   -  
                 p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i   +   1 ] ) ;  
  
                 o u t I   =   ( p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i ]   -   p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i   +   1 ]   -  
                 p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i   +   1 ]   -  
                 p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i ] ) ;  
                 * /  
                 C o e f A 1   =   * p C o e f A + + ;  
                 C o e f A 2   =   * p C o e f A ;  
  
                 / *   o u t R   =   ( p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i ]   * /  
                 m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 1 ,   C o e f A 1 ) ;  
  
                 / *   -   p I n [ 2   *   i ]   *   p A T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 1 + + ,   - C o e f A 2 ) ;  
  
                 / *   p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 1 ,   C o e f A 2 ) ;  
  
                 / *   p I n [ 2   *   i   +   1 ]   *   p A T a b l e [ 2   *   i ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 1 + + ,   C o e f A 1 ) ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 2 ,   C o e f A 2 ) ;  
                 C o e f B 1   =   * p C o e f B ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i ]   *   p B T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 2 - - ,   C o e f B 1 ) ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i   +   1 ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t R ,   * p I n 2 ,   C o e f B 1 ) ;  
  
                 / *   p I n [ 2   *   n   -   2   *   i   +   1 ]   *   p B T a b l e [ 2   *   i ]   * /  
                 m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( o u t I ,   * p I n 2 - - ,   C o e f A 2 ) ;  
  
                 / *   w r i t e   o u t p u t   * /  
                 * p D s t + +   =   o u t R ;  
                 * p D s t + +   =   o u t I ;  
  
                 / *   u p d a t e   c o e f f i c i e n t   p o i n t e r   * /  
                 p C o e f B   =   p C o e f B   +   ( m o d i f i e r   *   2 U ) ;  
                 p C o e f A   =   p C o e f A   +   ( ( m o d i f i e r   *   2 U )   -   1 U ) ;  
  
                 / *   D e c r e m e n t   l o o p   c o u n t   * /  
                 f f t L e n - - ;  
         }  
 }  