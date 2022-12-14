??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ p i d _ i n i t _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   P I D   C o n t r o l   i n i t i a l i z a t i o n   f u n c t i o n  
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
   / * *  
   *   @ a d d t o g r o u p   P I D  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f     I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   P I D   C o n t r o l .  
   *   @ p a r a m [ i n , o u t ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   P I D   s t r u c t u r e .  
   *   @ p a r a m [ i n ]           r e s e t S t a t e F l a g     f l a g   t o   r e s e t   t h e   s t a t e .   0   =   n o   c h a n g e   i n   s t a t e   &   1   =   r e s e t   t h e   s t a t e .  
   *   @ r e t u r n   n o n e .  
   *   \ p a r   D e s c r i p t i o n :  
   *   \ p a r  
   *   T h e   < c o d e > r e s e t S t a t e F l a g < / c o d e >   s p e c i f i e s   w h e t h e r   t o   s e t   s t a t e   t o   z e r o   o r   n o t .   \ n  
   *   T h e   f u n c t i o n   c o m p u t e s   t h e   s t r u c t u r e   f i e l d s :   < c o d e > A 0 < / c o d e > ,   < c o d e > A 1 < / c o d e >   < c o d e > A 2 < / c o d e >  
   *   u s i n g   t h e   p r o p o r t i o n a l   g a i n (   \ c   K p ) ,   i n t e g r a l   g a i n (   \ c   K i )   a n d   d e r i v a t i v e   g a i n (   \ c   K d )  
   *   a l s o   s e t s   t h e   s t a t e   v a r i a b l e s   t o   a l l   z e r o s .  
   * /  
  
 v o i d   a r m _ p i d _ i n i t _ f 3 2 (  
     a r m _ p i d _ i n s t a n c e _ f 3 2   *   S ,  
     i n t 3 2 _ t   r e s e t S t a t e F l a g )  
 {  
  
     / *   D e r i v e d   c o e f f i c i e n t   A 0   * /  
     S - > A 0   =   S - > K p   +   S - > K i   +   S - > K d ;  
  
     / *   D e r i v e d   c o e f f i c i e n t   A 1   * /  
     S - > A 1   =   ( - S - > K p )   -   ( ( f l o a t 3 2 _ t )   2 . 0   *   S - > K d ) ;  
  
     / *   D e r i v e d   c o e f f i c i e n t   A 2   * /  
     S - > A 2   =   S - > K d ;  
  
     / *   C h e c k   w h e t h e r   s t a t e   n e e d s   r e s e t   o r   n o t   * /  
     i f   ( r e s e t S t a t e F l a g )  
     {  
         / *   C l e a r   t h e   s t a t e   b u f f e r .     T h e   s i z e   w i l l   b e   a l w a y s   3   s a m p l e s   * /  
         m e m s e t ( S - > s t a t e ,   0 ,   3 U   *   s i z e o f ( f l o a t 3 2 _ t ) ) ;  
     }  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   P I D   g r o u p  
   * /  