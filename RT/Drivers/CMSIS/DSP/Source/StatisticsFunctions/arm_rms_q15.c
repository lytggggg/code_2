??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ r m s _ q 1 5 . c  
   *   D e s c r i p t i o n :     R o o t   M e a n   S q u a r e   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r  
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
   *   @ a d d t o g r o u p   R M S  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   R o o t   M e a n   S q u a r e   o f   t h e   e l e m e n t s   o f   a   Q 1 5   v e c t o r .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p R e s u l t   r m s   v a l u e   r e t u r n e d   h e r e  
   *   @ r e t u r n   n o n e .  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a   6 4 - b i t   i n t e r n a l   a c c u m u l a t o r .  
   *   T h e   i n p u t   i s   r e p r e s e n t e d   i n   1 . 1 5   f o r m a t .  
   *   I n t e r m e d i a t e   m u l t i p l i c a t i o n   y i e l d s   a   2 . 3 0   f o r m a t ,   a n d   t h i s  
   *   r e s u l t   i s   a d d e d   w i t h o u t   s a t u r a t i o n   t o   a   6 4 - b i t   a c c u m u l a t o r   i n   3 4 . 3 0   f o r m a t .  
   *   W i t h   3 3   g u a r d   b i t s   i n   t h e   a c c u m u l a t o r ,   t h e r e   i s   n o   r i s k   o f   o v e r f l o w ,   a n d   t h e  
   *   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   i s   p r e s e r v e d .  
   *   F i n a l l y ,   t h e   3 4 . 3 0   r e s u l t   i s   t r u n c a t e d   t o   3 4 . 1 5   f o r m a t   b y   d i s c a r d i n g   t h e   l o w e r  
   *   1 5   b i t s ,   a n d   t h e n   s a t u r a t e d   t o   y i e l d   a   r e s u l t   i n   1 . 1 5   f o r m a t .  
   *  
   * /  
  
 v o i d   a r m _ r m s _ q 1 5 (  
     q 1 5 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 1 5 _ t   *   p R e s u l t )  
 {  
     q 6 3 _ t   s u m   =   0 ;                                                                   / *   a c c u m u l a t o r   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     q 3 1 _ t   i n ;                                                                             / *   t e m p o r a r y   v a r i a b l e   t o   s t o r e   t h e   i n p u t   v a l u e   * /  
     q 1 5 _ t   i n 1 ;                                                                           / *   t e m p o r a r y   v a r i a b l e   t o   s t o r e   t h e   i n p u t   v a l u e   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
     / *   l o o p   U n r o l l i n g   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ]   *   A [ b l o c k S i z e - 1 ] )   * /  
         / *   C o m p u t e   s u m   o f   t h e   s q u a r e s   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m   * /  
         i n   =   * _ _ S I M D 3 2 ( p S r c ) + + ;  
         s u m   =   _ _ S M L A L D ( i n ,   i n ,   s u m ) ;  
         i n   =   * _ _ S I M D 3 2 ( p S r c ) + + ;  
         s u m   =   _ _ S M L A L D ( i n ,   i n ,   s u m ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ]   *   A [ b l o c k S i z e - 1 ] )   * /  
         / *   C o m p u t e   s u m   o f   t h e   s q u a r e s   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m   * /  
         i n 1   =   * p S r c + + ;  
         s u m   =   _ _ S M L A L D ( i n 1 ,   i n 1 ,   s u m ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   T r u n c a t i n g   a n d   s a t u r a t i n g   t h e   a c c u m u l a t o r   t o   1 . 1 5   f o r m a t   * /  
     / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   * /  
     a r m _ s q r t _ q 1 5 ( _ _ S S A T ( ( s u m   /   ( q 6 3 _ t ) b l o c k S i z e )   > >   1 5 ,   1 6 ) ,   p R e s u l t ) ;  
  
 # e l s e  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     q 1 5 _ t   i n ;                                                                             / *   t e m p o r a r y   v a r i a b l e   t o   s t o r e   t h e   i n p u t   v a l u e   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
     / *   L o o p   o v e r   b l o c k S i z e   n u m b e r   o f   v a l u e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ]   *   A [ b l o c k S i z e - 1 ] )   * /  
         / *   C o m p u t e   s u m   o f   t h e   s q u a r e s   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m   * /  
         i n   =   * p S r c + + ;  
         s u m   + =   ( ( q 3 1 _ t )   i n   *   i n ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   T r u n c a t i n g   a n d   s a t u r a t i n g   t h e   a c c u m u l a t o r   t o   1 . 1 5   f o r m a t   * /  
     / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   * /  
     a r m _ s q r t _ q 1 5 ( _ _ S S A T ( ( s u m   /   ( q 6 3 _ t ) b l o c k S i z e )   > >   1 5 ,   1 6 ) ,   p R e s u l t ) ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   R M S   g r o u p  
   * /  