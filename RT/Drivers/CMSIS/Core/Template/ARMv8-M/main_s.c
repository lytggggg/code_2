??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
   *   @ f i l e           m a i n _ s . c  
   *   @ b r i e f         C o d e   t e m p l a t e   f o r   s e c u r e   m a i n   f u n c t i o n  
   *   @ v e r s i o n     V 1 . 1 . 1  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 3 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 / *   U s e   C M S E   i n t r i n s i c s   * /  
 # i n c l u d e   < a r m _ c m s e . h >  
    
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i n c l u d e   C M S I S _ d e v i c e _ h e a d e r  
    
 / *   T Z _ S T A R T _ N S :   S t a r t   a d d r e s s   o f   n o n - s e c u r e   a p p l i c a t i o n   * /  
 # i f n d e f   T Z _ S T A R T _ N S  
 # d e f i n e   T Z _ S T A R T _ N S   ( 0 x 2 0 0 0 0 0 U )  
 # e n d i f  
    
 / *   t y p e d e f   f o r   n o n - s e c u r e   c a l l b a c k   f u n c t i o n s   * /  
 t y p e d e f   v o i d   ( * f u n c p t r _ v o i d )   ( v o i d )   _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ c a l l ) ) ;  
    
 / *   S e c u r e   m a i n ( )   * /  
 i n t   m a i n ( v o i d )   {  
     f u n c p t r _ v o i d   N o n S e c u r e _ R e s e t H a n d l e r ;  
    
     / *   A d d   u s e r   s e t u p   c o d e   f o r   s e c u r e   p a r t   h e r e * /  
    
     / *   S e t   n o n - s e c u r e   m a i n   s t a c k   ( M S P _ N S )   * /  
     _ _ T Z _ s e t _ M S P _ N S ( * ( ( u i n t 3 2 _ t   * ) ( T Z _ S T A R T _ N S ) ) ) ;  
    
     / *   G e t   n o n - s e c u r e   r e s e t   h a n d l e r   * /  
     N o n S e c u r e _ R e s e t H a n d l e r   =   ( f u n c p t r _ v o i d ) ( * ( ( u i n t 3 2 _ t   * ) ( ( T Z _ S T A R T _ N S )   +   4 U ) ) ) ;  
    
     / *   S t a r t   n o n - s e c u r e   s t a t e   s o f t w a r e   a p p l i c a t i o n   * /  
     N o n S e c u r e _ R e s e t H a n d l e r ( ) ;  
    
     / *   N o n - s e c u r e   s o f t w a r e   d o e s   n o t   r e t u r n ,   t h i s   c o d e   i s   n o t   e x e c u t e d   * /  
     w h i l e   ( 1 )   {  
         _ _ N O P ( ) ;  
     }  
 }  