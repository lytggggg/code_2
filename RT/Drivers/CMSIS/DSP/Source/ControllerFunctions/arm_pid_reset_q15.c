??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ p i d _ r e s e t _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   P I D   C o n t r o l   r e s e t   f u n c t i o n  
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
 *   @ b r i e f     R e s e t   f u n c t i o n   f o r   t h e   Q 1 5   P I D   C o n t r o l .  
 *   @ p a r a m [ i n ]   * S 	 	 I n s t a n c e   p o i n t e r   o f   P I D   c o n t r o l   d a t a   s t r u c t u r e .  
 *   @ r e t u r n   n o n e .  
 *   \ p a r   D e s c r i p t i o n :  
 *   T h e   f u n c t i o n   r e s e t s   t h e   s t a t e   b u f f e r   t o   z e r o s .  
 * /  
 v o i d   a r m _ p i d _ r e s e t _ q 1 5 (  
     a r m _ p i d _ i n s t a n c e _ q 1 5   *   S )  
 {  
     / *   R e s e t   s t a t e   t o   z e r o ,   T h e   s i z e   w i l l   b e   a l w a y s   3   s a m p l e s   * /  
     m e m s e t ( S - > s t a t e ,   0 ,   3 U   *   s i z e o f ( q 1 5 _ t ) ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   P I D   g r o u p  
   * /  