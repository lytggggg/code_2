�?/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 v o i d   a r m _ r e l u _ q 7 _ r e f ( q 7 _ t   *   d a t a ,   u i n t 1 6 _ t   s i z e )  
 {  
         u i n t 1 6 _ t     i ;  
  
         f o r   ( i   =   0 ;   i   <   s i z e ;   i + + )  
         {  
                 i f   ( d a t a [ i ]   <   0 )  
                         d a t a [ i ]   =   0 ;  
         }  
 }  
  
 v o i d   a r m _ r e l u _ q 1 5 _ r e f ( q 1 5 _ t   *   d a t a ,   u i n t 1 6 _ t   s i z e )  
 {  
         u i n t 1 6 _ t     i ;  
  
         f o r   ( i   =   0 ;   i   <   s i z e ;   i + + )  
         {  
                 i f   ( d a t a [ i ]   <   0 )  
                         d a t a [ i ]   =   0 ;  
         }  
 }  