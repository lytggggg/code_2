??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ l m s _ i n i t _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   L M S   f i l t e r   i n i t i a l i z a t i o n   f u n c t i o n  
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
   *   @ i n g r o u p   g r o u p F i l t e r s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   L M S  
   *   @ {  
   * /  
  
 / * *  
 *   @ b r i e f   I n i t i a l i z a t i o n   f u n c t i o n   f o r   t h e   Q 1 5   L M S   f i l t e r .  
 *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   L M S   f i l t e r   s t r u c t u r e .  
 *   @ p a r a m [ i n ]   n u m T a p s     n u m b e r   o f   f i l t e r   c o e f f i c i e n t s .  
 *   @ p a r a m [ i n ]   * p C o e f f s   p o i n t s   t o   t h e   c o e f f i c i e n t   b u f f e r .  
 *   @ p a r a m [ i n ]   * p S t a t e   p o i n t s   t o   t h e   s t a t e   b u f f e r .  
 *   @ p a r a m [ i n ]   m u   s t e p   s i z e   t h a t   c o n t r o l s   f i l t e r   c o e f f i c i e n t   u p d a t e s .  
 *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
 *   @ p a r a m [ i n ]   p o s t S h i f t   b i t   s h i f t   a p p l i e d   t o   c o e f f i c i e n t s .  
 *   @ r e t u r n         n o n e .  
 *  
 *   \ p a r   D e s c r i p t i o n :  
 *   < c o d e > p C o e f f s < / c o d e >   p o i n t s   t o   t h e   a r r a y   o f   f i l t e r   c o e f f i c i e n t s   s t o r e d   i n   t i m e   r e v e r s e d   o r d e r :  
 *   < p r e >  
 *         { b [ n u m T a p s - 1 ] ,   b [ n u m T a p s - 2 ] ,   b [ N - 2 ] ,   . . . ,   b [ 1 ] ,   b [ 0 ] }  
 *   < / p r e >  
 *   T h e   i n i t i a l   f i l t e r   c o e f f i c i e n t s   s e r v e   a s   a   s t a r t i n g   p o i n t   f o r   t h e   a d a p t i v e   f i l t e r .  
 *   < c o d e > p S t a t e < / c o d e >   p o i n t s   t o   t h e   a r r a y   o f   s t a t e   v a r i a b l e s   a n d   s i z e   o f   a r r a y   i s  
 *   < c o d e > n u m T a p s + b l o c k S i z e - 1 < / c o d e >   s a m p l e s ,   w h e r e   < c o d e > b l o c k S i z e < / c o d e >   i s   t h e   n u m b e r   o f  
 *   i n p u t   s a m p l e s   p r o c e s s e d   b y   e a c h   c a l l   t o   < c o d e > a r m _ l m s _ q 1 5 ( ) < / c o d e > .  
 * /  
  
 v o i d   a r m _ l m s _ i n i t _ q 1 5 (  
     a r m _ l m s _ i n s t a n c e _ q 1 5   *   S ,  
     u i n t 1 6 _ t   n u m T a p s ,  
     q 1 5 _ t   *   p C o e f f s ,  
     q 1 5 _ t   *   p S t a t e ,  
     q 1 5 _ t   m u ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     u i n t 3 2 _ t   p o s t S h i f t )  
 {  
     / *   A s s i g n   f i l t e r   t a p s   * /  
     S - > n u m T a p s   =   n u m T a p s ;  
  
     / *   A s s i g n   c o e f f i c i e n t   p o i n t e r   * /  
     S - > p C o e f f s   =   p C o e f f s ;  
  
     / *   C l e a r   s t a t e   b u f f e r   a n d   s i z e   i s   a l w a y s   b l o c k S i z e   +   n u m T a p s   -   1   * /  
     m e m s e t ( p S t a t e ,   0 ,   ( n u m T a p s   +   ( b l o c k S i z e   -   1 U ) )   *   s i z e o f ( q 1 5 _ t ) ) ;  
  
     / *   A s s i g n   s t a t e   p o i n t e r   * /  
     S - > p S t a t e   =   p S t a t e ;  
  
     / *   A s s i g n   S t e p   s i z e   v a l u e   * /  
     S - > m u   =   m u ;  
  
     / *   A s s i g n   p o s t S h i f t   v a l u e   t o   b e   a p p l i e d   * /  
     S - > p o s t S h i f t   =   p o s t S h i f t ;  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   L M S   g r o u p  
   * /  