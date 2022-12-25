�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ s t d _ f 3 2 . c  
   *   D e s c r i p t i o n :     S t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r  
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
   *   @ i n g r o u p   g r o u p S t a t s  
   * /  
  
 / * *  
   *   @ d e f g r o u p   S T D   S t a n d a r d   d e v i a t i o n  
   *  
   *   C a l c u l a t e s   t h e   s t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   i n   t h e   i n p u t   v e c t o r .  
   *   T h e   u n d e r l y i n g   a l g o r i t h m   i s   u s e d :  
   *  
   *   < p r e >  
   *       R e s u l t   =   s q r t ( ( s u m O f S q u a r e s   -   s u m < s u p > 2 < / s u p >   /   b l o c k S i z e )   /   ( b l o c k S i z e   -   1 ) )  
   *  
   *           w h e r e ,   s u m O f S q u a r e s   =   p S r c [ 0 ]   *   p S r c [ 0 ]   +   p S r c [ 1 ]   *   p S r c [ 1 ]   +   . . .   +   p S r c [ b l o c k S i z e - 1 ]   *   p S r c [ b l o c k S i z e - 1 ]  
   *  
   *                                           s u m   =   p S r c [ 0 ]   +   p S r c [ 1 ]   +   p S r c [ 2 ]   +   . . .   +   p S r c [ b l o c k S i z e - 1 ]  
   *   < / p r e >  
   *  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   f l o a t i n g   p o i n t ,   Q 3 1 ,   a n d   Q 1 5   d a t a   t y p e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   S T D  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f   S t a n d a r d   d e v i a t i o n   o f   t h e   e l e m e n t s   o f   a   f l o a t i n g - p o i n t   v e c t o r .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p R e s u l t   s t a n d a r d   d e v i a t i o n   v a l u e   r e t u r n e d   h e r e  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ s t d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     f l o a t 3 2 _ t   *   p R e s u l t )  
 {  
     f l o a t 3 2 _ t   s u m   =   0 . 0 f ;                                                     / *   T e m p o r a r y   r e s u l t   s t o r a g e   * /  
     f l o a t 3 2 _ t   s u m O f S q u a r e s   =   0 . 0 f ;                                   / *   S u m   o f   s q u a r e s   * /  
     f l o a t 3 2 _ t   i n ;                                                                     / *   i n p u t   v a l u e   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     f l o a t 3 2 _ t   m e a n O f S q u a r e s ,   m e a n ,   s q u a r e O f M e a n ;       / *   T e m p o r a r y   v a r i a b l e s   * /  
 # e l s e  
     f l o a t 3 2 _ t   s q u a r e O f S u m ;                                                   / *   S q u a r e   o f   S u m   * /  
     f l o a t 3 2 _ t   v a r ;                                                                   / *   T e m p o r a r y   v a r a i n c e   s t o r a g e   * /  
 # e n d i f  
  
     i f   ( b l o c k S i z e   = =   1 U )  
     {  
         * p R e s u l t   =   0 ;  
         r e t u r n ;  
     }  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     / * l o o p   U n r o l l i n g   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ]   *   A [ b l o c k S i z e - 1 ] )     * /  
         / *   C o m p u t e   S u m   o f   s q u a r e s   o f   t h e   i n p u t   s a m p l e s  
           *   a n d   t h e n   s t o r e   t h e   r e s u l t   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m .   * /  
         i n   =   * p S r c + + ;  
         s u m   + =   i n ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
         i n   =   * p S r c + + ;  
         s u m   + =   i n ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
         i n   =   * p S r c + + ;  
         s u m   + =   i n ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
         i n   =   * p S r c + + ;  
         s u m   + =   i n ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
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
         / *   C o m p u t e   S u m   o f   s q u a r e s   o f   t h e   i n p u t   s a m p l e s  
           *   a n d   t h e n   s t o r e   t h e   r e s u l t   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m .   * /  
         i n   =   * p S r c + + ;  
         s u m   + =   i n ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   C o m p u t e   M e a n   o f   s q u a r e s   o f   t h e   i n p u t   s a m p l e s  
       *   a n d   t h e n   s t o r e   t h e   r e s u l t   i n   a   t e m p o r a r y   v a r i a b l e ,   m e a n O f S q u a r e s .   * /  
     m e a n O f S q u a r e s   =   s u m O f S q u a r e s   /   ( ( f l o a t 3 2 _ t )   b l o c k S i z e   -   1 . 0 f ) ;  
  
     / *   C o m p u t e   m e a n   o f   a l l   i n p u t   v a l u e s   * /  
     m e a n   =   s u m   /   ( f l o a t 3 2 _ t )   b l o c k S i z e ;  
  
     / *   C o m p u t e   s q u a r e   o f   m e a n   * /  
     s q u a r e O f M e a n   =   ( m e a n   *   m e a n )   *   ( ( ( f l o a t 3 2 _ t )   b l o c k S i z e )   /  
                                                                     ( ( f l o a t 3 2 _ t )   b l o c k S i z e   -   1 . 0 f ) ) ;  
  
     / *   C o m p u t e   s t a n d a r d   d e v i a t i o n   a n d   t h e n   s t o r e   t h e   r e s u l t   t o   t h e   d e s t i n a t i o n   * /  
     a r m _ s q r t _ f 3 2 ( ( m e a n O f S q u a r e s   -   s q u a r e O f M e a n ) ,   p R e s u l t ) ;  
  
 # e l s e  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     / *   L o o p   o v e r   b l o c k S i z e   n u m b e r   o f   v a l u e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ]   *   A [ b l o c k S i z e - 1 ] )   * /  
         / *   C o m p u t e   S u m   o f   s q u a r e s   o f   t h e   i n p u t   s a m p l e s  
           *   a n d   t h e n   s t o r e   t h e   r e s u l t   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m O f S q u a r e s .   * /  
         i n   =   * p S r c + + ;  
         s u m O f S q u a r e s   + =   i n   *   i n ;  
  
         / *   C   =   ( A [ 0 ]   +   A [ 1 ]   +   . . .   +   A [ b l o c k S i z e - 1 ] )   * /  
         / *   C o m p u t e   S u m   o f   t h e   i n p u t   s a m p l e s  
           *   a n d   t h e n   s t o r e   t h e   r e s u l t   i n   a   t e m p o r a r y   v a r i a b l e ,   s u m .   * /  
         s u m   + =   i n ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   C o m p u t e   t h e   s q u a r e   o f   s u m   * /  
     s q u a r e O f S u m   =   ( ( s u m   *   s u m )   /   ( f l o a t 3 2 _ t )   b l o c k S i z e ) ;  
  
     / *   C o m p u t e   t h e   v a r i a n c e   * /  
     v a r   =   ( ( s u m O f S q u a r e s   -   s q u a r e O f S u m )   /   ( f l o a t 3 2 _ t )   ( b l o c k S i z e   -   1 . 0 f ) ) ;  
  
     / *   C o m p u t e   s t a n d a r d   d e v i a t i o n   a n d   t h e n   s t o r e   t h e   r e s u l t   t o   t h e   d e s t i n a t i o n   * /  
     a r m _ s q r t _ f 3 2 ( v a r ,   p R e s u l t ) ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
 }  
  
 / * *  
   *   @ }   e n d   o f   S T D   g r o u p  
   * /  