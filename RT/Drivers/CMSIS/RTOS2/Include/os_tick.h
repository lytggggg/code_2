??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           o s _ t i c k . h  
   *   @ b r i e f         C M S I S   O S   T i c k   h e a d e r   f i l e  
   *   @ v e r s i o n     V 1 . 0 . 1  
   *   @ d a t e           2 4 .   N o v e m b e r   2 0 1 7  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i f n d e f   O S _ T I C K _ H  
 # d e f i n e   O S _ T I C K _ H  
  
 # i n c l u d e   < s t d i n t . h >  
  
 / / /   I R Q   H a n d l e r .  
 # i f n d e f   I R Q H A N D L E R _ T  
 # d e f i n e   I R Q H A N D L E R _ T  
 t y p e d e f   v o i d   ( * I R Q H a n d l e r _ t )   ( v o i d ) ;  
 # e n d i f  
  
 / / /   S e t u p   O S   T i c k   t i m e r   t o   g e n e r a t e   p e r i o d i c   R T O S   K e r n e l   T i c k s  
 / / /   \ p a r a m [ i n ]           f r e q                   t i c k   f r e q u e n c y   i n   H z  
 / / /   \ p a r a m [ i n ]           h a n d l e r             t i c k   I R Q   h a n d l e r  
 / / /   \ r e t u r n   0   o n   s u c c e s s ,   - 1   o n   e r r o r .  
 i n t 3 2 _ t     O S _ T i c k _ S e t u p   ( u i n t 3 2 _ t   f r e q ,   I R Q H a n d l e r _ t   h a n d l e r ) ;  
  
 / / /   E n a b l e   O S   T i c k   t i m e r   i n t e r r u p t  
 v o i d           O S _ T i c k _ E n a b l e   ( v o i d ) ;  
  
 / / /   D i s a b l e   O S   T i c k   t i m e r   i n t e r r u p t  
 v o i d           O S _ T i c k _ D i s a b l e   ( v o i d ) ;  
  
 / / /   A c k n o w l e d g e   e x e c u t i o n   o f   O S   T i c k   t i m e r   i n t e r r u p t  
 v o i d           O S _ T i c k _ A c k n o w l e d g e I R Q   ( v o i d ) ;  
  
 / / /   G e t   O S   T i c k   t i m e r   I R Q   n u m b e r  
 / / /   \ r e t u r n   O S   T i c k   I R Q   n u m b e r  
 i n t 3 2 _ t     O S _ T i c k _ G e t I R Q n   ( v o i d ) ;  
  
 / / /   G e t   O S   T i c k   t i m e r   c l o c k   f r e q u e n c y  
 / / /   \ r e t u r n   O S   T i c k   t i m e r   c l o c k   f r e q u e n c y   i n   H z  
 u i n t 3 2 _ t   O S _ T i c k _ G e t C l o c k   ( v o i d ) ;  
  
 / / /   G e t   O S   T i c k   t i m e r   i n t e r v a l   r e l o a d   v a l u e  
 / / /   \ r e t u r n   O S   T i c k   t i m e r   i n t e r v a l   r e l o a d   v a l u e  
 u i n t 3 2 _ t   O S _ T i c k _ G e t I n t e r v a l   ( v o i d ) ;  
  
 / / /   G e t   O S   T i c k   t i m e r   c o u n t e r   v a l u e  
 / / /   \ r e t u r n   O S   T i c k   t i m e r   c o u n t e r   v a l u e  
 u i n t 3 2 _ t   O S _ T i c k _ G e t C o u n t   ( v o i d ) ;  
  
 / / /   G e t   O S   T i c k   t i m e r   o v e r f l o w   s t a t u s  
 / / /   \ r e t u r n   O S   T i c k   o v e r f l o w   s t a t u s   ( 1   -   o v e r f l o w ,   0   -   n o   o v e r f l o w ) .  
 u i n t 3 2 _ t   O S _ T i c k _ G e t O v e r f l o w   ( v o i d ) ;  
  
 # e n d i f     / *   O S _ T I C K _ H   * /  