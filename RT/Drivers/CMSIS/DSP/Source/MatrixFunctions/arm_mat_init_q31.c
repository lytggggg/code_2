??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ i n i t _ q 3 1 . c  
   *   D e s c r i p t i o n :     Q 3 1   m a t r i x   i n i t i a l i z a t i o n  
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
   *   @ d e f g r o u p   M a t r i x I n i t   M a t r i x   I n i t i a l i z a t i o n  
   *  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x I n i t  
   *   @ {  
   * /  
  
     / * *  
       *   @ b r i e f     Q 3 1   m a t r i x   i n i t i a l i z a t i o n .  
       *   @ p a r a m [ i n , o u t ]   * S                           p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f l o a t i n g - p o i n t   m a t r i x   s t r u c t u r e .  
       *   @ p a r a m [ i n ]           n R o w s                     n u m b e r   o f   r o w s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           n C o l u m n s               n u m b e r   o f   c o l u m n s   i n   t h e   m a t r i x .  
       *   @ p a r a m [ i n ]           * p D a t a 	       p o i n t s   t o   t h e   m a t r i x   d a t a   a r r a y .  
       *   @ r e t u r n                 n o n e  
       * /  
  
 v o i d   a r m _ m a t _ i n i t _ q 3 1 (  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   S ,  
     u i n t 1 6 _ t   n R o w s ,  
     u i n t 1 6 _ t   n C o l u m n s ,  
     q 3 1 _ t   *   p D a t a )  
 {  
     / *   A s s i g n   N u m b e r   o f   R o w s   * /  
     S - > n u m R o w s   =   n R o w s ;  
  
     / *   A s s i g n   N u m b e r   o f   C o l u m n s   * /  
     S - > n u m C o l s   =   n C o l u m n s ;  
  
     / *   A s s i g n   D a t a   p o i n t e r   * /  
     S - > p D a t a   =   p D a t a ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M a t r i x I n i t   g r o u p  
   * /  