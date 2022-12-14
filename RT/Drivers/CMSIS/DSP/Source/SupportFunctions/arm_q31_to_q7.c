??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ q 3 1 _ t o _ q 7 . c  
   *   D e s c r i p t i o n :     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 3 1   v e c t o r   t o   Q 7   v e c t o r  
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
   *   @ i n g r o u p   g r o u p S u p p o r t  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   q 3 1 _ t o _ x  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 3 1   v e c t o r   t o   Q 7   v e c t o r .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   Q 3 1   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   t h e   Q 7   o u t p u t   v e c t o r  
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ r e t u r n   n o n e .  
   *  
   *   \ p a r   D e s c r i p t i o n :  
   *  
   *   T h e   e q u a t i o n   u s e d   f o r   t h e   c o n v e r s i o n   p r o c e s s   i s :  
   *  
   *   < p r e >  
   *   	 p D s t [ n ]   =   ( q 7 _ t )   p S r c [ n ]   > >   2 4 ;       0   < =   n   <   b l o c k S i z e .  
   *   < / p r e >  
   *  
   * /  
  
  
 v o i d   a r m _ q 3 1 _ t o _ q 7 (  
     q 3 1 _ t   *   p S r c ,  
     q 7 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p I n   =   p S r c ;                                                           / *   S r c   p o i n t e r   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
     q 3 1 _ t   i n 1 ,   i n 2 ,   i n 3 ,   i n 4 ;  
     q 7 _ t   o u t 1 ,   o u t 2 ,   o u t 3 ,   o u t 4 ;  
  
     / * l o o p   U n r o l l i n g   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( q 7 _ t )   A   > >   2 4   * /  
         / *   c o n v e r t   f r o m   q 3 1   t o   q 7   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
         i n 1   =   * p I n + + ;  
         i n 2   =   * p I n + + ;  
         i n 3   =   * p I n + + ;  
         i n 4   =   * p I n + + ;  
  
         o u t 1   =   ( q 7 _ t )   ( i n 1   > >   2 4 ) ;  
         o u t 2   =   ( q 7 _ t )   ( i n 2   > >   2 4 ) ;  
         o u t 3   =   ( q 7 _ t )   ( i n 3   > >   2 4 ) ;  
         o u t 4   =   ( q 7 _ t )   ( i n 4   > >   2 4 ) ;  
  
         * _ _ S I M D 3 2 ( p D s t ) + +   =   _ _ P A C K q 7 ( o u t 1 ,   o u t 2 ,   o u t 3 ,   o u t 4 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     / *   L o o p   o v e r   b l o c k S i z e   n u m b e r   o f   v a l u e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( q 7 _ t )   A   > >   2 4   * /  
         / *   c o n v e r t   f r o m   q 3 1   t o   q 7   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
         * p D s t + +   =   ( q 7 _ t )   ( * p I n + +   > >   2 4 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   q 3 1 _ t o _ x   g r o u p  
   * /  