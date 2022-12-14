??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           c m s i s _ c o m p i l e r . h  
   *   @ b r i e f         C M S I S   c o m p i l e r   s p e c i f i c   m a c r o s ,   f u n c t i o n s ,   i n s t r u c t i o n s  
   *   @ v e r s i o n     V 1 . 0 . 2  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i f n d e f   _ _ C M S I S _ C O M P I L E R _ H  
 # d e f i n e   _ _ C M S I S _ C O M P I L E R _ H  
  
 # i n c l u d e   < s t d i n t . h >  
  
 / *  
   *   A r m   C o m p i l e r   4 / 5  
   * /  
 # i f       d e f i n e d   (   _ _ C C _ A R M   )  
     # i n c l u d e   " c m s i s _ a r m c c . h "  
  
  
 / *  
   *   A r m   C o m p i l e r   6   ( a r m c l a n g )  
   * /  
 # e l i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )  
     # i n c l u d e   " c m s i s _ a r m c l a n g . h "  
  
  
 / *  
   *   G N U   C o m p i l e r  
   * /  
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )  
     # i n c l u d e   " c m s i s _ g c c . h "  
  
  
 / *  
   *   I A R   C o m p i l e r  
   * /  
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   )  
     # i n c l u d e   " c m s i s _ i c c a r m . h "  
  
  
 / *  
   *   T I   A r m   C o m p i l e r  
   * /  
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   )  
     # i n c l u d e   < c m s i s _ c c s . h >  
  
     # i f n d e f       _ _ A S M  
         # d e f i n e   _ _ A S M                                           _ _ a s m  
     # e n d i f  
     # i f n d e f       _ _ I N L I N E  
         # d e f i n e   _ _ I N L I N E                                     i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ I N L I N E  
         # d e f i n e   _ _ S T A T I C _ I N L I N E                       s t a t i c   i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ I N L I N E  
         # d e f i n e   _ _ S T A T I C _ I N L I N E                       s t a t i c   i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E  
         # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E             _ _ S T A T I C _ I N L I N E  
     # e n d i f  
     # i f n d e f       _ _ N O _ R E T U R N  
         # d e f i n e   _ _ N O _ R E T U R N                               _ _ a t t r i b u t e _ _ ( ( n o r e t u r n ) )  
     # e n d i f  
     # i f n d e f       C M S I S _ D E P R E C A T E D  
         # d e f i n e   C M S I S _ D E P R E C A T E D                     _ _ a t t r i b u t e _ _ ( ( d e p r e c a t e d ) )  
     # e n d i f  
     # i f n d e f       _ _ U S E D  
         # d e f i n e   _ _ U S E D                                         _ _ a t t r i b u t e _ _ ( ( u s e d ) )  
     # e n d i f  
     # i f n d e f       _ _ W E A K  
         # d e f i n e   _ _ W E A K                                         _ _ a t t r i b u t e _ _ ( ( w e a k ) )  
     # e n d i f  
     # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2  
         s t r u c t   _ _ a t t r i b u t e _ _ ( ( p a c k e d ) )   T _ U I N T 3 2   {   u i n t 3 2 _ t   v ;   } ;  
         # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 ( x )           ( ( ( s t r u c t   T _ U I N T 3 2   * ) ( x ) ) - > v )  
     # e n d i f  
     # i f n d e f       _ _ A L I G N E D  
         # d e f i n e   _ _ A L I G N E D ( x )                             _ _ a t t r i b u t e _ _ ( ( a l i g n e d ( x ) ) )  
     # e n d i f  
     # i f n d e f       _ _ P A C K E D  
         # d e f i n e   _ _ P A C K E D                                     _ _ a t t r i b u t e _ _ ( ( p a c k e d ) )  
     # e n d i f  
  
  
 / *  
   *   T A S K I N G   C o m p i l e r  
   * /  
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   )  
     / *  
       *   T h e   C M S I S   f u n c t i o n s   h a v e   b e e n   i m p l e m e n t e d   a s   i n t r i n s i c s   i n   t h e   c o m p i l e r .  
       *   P l e a s e   u s e   " c a r m   - ? i "   t o   g e t   a n   u p   t o   d a t e   l i s t   o f   a l l   i n t r i n s i c s ,  
       *   I n c l u d i n g   t h e   C M S I S   o n e s .  
       * /  
  
     # i f n d e f       _ _ A S M  
         # d e f i n e   _ _ A S M                                           _ _ a s m  
     # e n d i f  
     # i f n d e f       _ _ I N L I N E  
         # d e f i n e   _ _ I N L I N E                                     i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ I N L I N E  
         # d e f i n e   _ _ S T A T I C _ I N L I N E                       s t a t i c   i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E  
         # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E             _ _ S T A T I C _ I N L I N E  
     # e n d i f  
     # i f n d e f       _ _ N O _ R E T U R N  
         # d e f i n e   _ _ N O _ R E T U R N                               _ _ a t t r i b u t e _ _ ( ( n o r e t u r n ) )  
     # e n d i f  
     # i f n d e f       C M S I S _ D E P R E C A T E D  
         # d e f i n e   C M S I S _ D E P R E C A T E D                     _ _ a t t r i b u t e _ _ ( ( d e p r e c a t e d ) )  
     # e n d i f  
     # i f n d e f       _ _ U S E D  
         # d e f i n e   _ _ U S E D                                         _ _ a t t r i b u t e _ _ ( ( u s e d ) )  
     # e n d i f  
     # i f n d e f       _ _ W E A K  
         # d e f i n e   _ _ W E A K                                         _ _ a t t r i b u t e _ _ ( ( w e a k ) )  
     # e n d i f  
     # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2  
         s t r u c t   _ _ p a c k e d _ _   T _ U I N T 3 2   {   u i n t 3 2 _ t   v ;   } ;  
         # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 ( x )           ( ( ( s t r u c t   T _ U I N T 3 2   * ) ( x ) ) - > v )  
     # e n d i f  
     # i f n d e f       _ _ A L I G N E D  
         # d e f i n e   _ _ A L I G N E D ( x )                             _ _ a l i g n ( x )  
     # e n d i f  
     # i f n d e f       _ _ P A C K E D  
         # d e f i n e   _ _ P A C K E D                                     _ _ p a c k e d _ _  
     # e n d i f  
  
  
 / *  
   *   C O S M I C   C o m p i l e r  
   * /  
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   )  
       # i n c l u d e   < c m s i s _ c s m . h >  
  
   # i f n d e f       _ _ A S M  
         # d e f i n e   _ _ A S M                                           _ a s m  
     # e n d i f  
     # i f n d e f       _ _ I N L I N E  
         # d e f i n e   _ _ I N L I N E                                     i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ I N L I N E  
         # d e f i n e   _ _ S T A T I C _ I N L I N E                       s t a t i c   i n l i n e  
     # e n d i f  
     # i f n d e f       _ _ S T A T I C _ F O R C E I N L I N E  
         # d e f i n e   _ _ S T A T I C _ F O R C E I N L I N E             _ _ S T A T I C _ I N L I N E  
     # e n d i f  
     # i f n d e f       _ _ N O _ R E T U R N  
         / /   N O   R E T U R N   i s   a u t o m a t i c a l l y   d e t e c t e d   h e n c e   n o   w a r n i n g   h e r e  
         # d e f i n e   _ _ N O _ R E T U R N  
     # e n d i f  
     # i f n d e f       _ _ U S E D  
         # w a r n i n g   N o   c o m p i l e r   s p e c i f i c   s o l u t i o n   f o r   _ _ U S E D .   _ _ U S E D   i s   i g n o r e d .  
         # d e f i n e   _ _ U S E D  
     # e n d i f  
     # i f n d e f       C M S I S _ D E P R E C A T E D  
         # w a r n i n g   N o   c o m p i l e r   s p e c i f i c   s o l u t i o n   f o r   C M S I S _ D E P R E C A T E D .   C M S I S _ D E P R E C A T E D   i s   i g n o r e d .  
         # d e f i n e   C M S I S _ D E P R E C A T E D  
     # e n d i f  
     # i f n d e f       _ _ W E A K  
         # d e f i n e   _ _ W E A K                                         _ _ w e a k  
     # e n d i f  
     # i f n d e f       _ _ U N A L I G N E D _ U I N T 3 2  
         @ p a c k e d   s t r u c t   T _ U I N T 3 2   {   u i n t 3 2 _ t   v ;   } ;  
         # d e f i n e   _ _ U N A L I G N E D _ U I N T 3 2 ( x )           ( ( ( s t r u c t   T _ U I N T 3 2   * ) ( x ) ) - > v )  
     # e n d i f  
     # i f n d e f       _ _ A L I G N E D  
         # w a r n i n g   N o   c o m p i l e r   s p e c i f i c   s o l u t i o n   f o r   _ _ A L I G N E D .   _ _ A L I G N E D   i s   i g n o r e d .  
         # d e f i n e   _ _ A L I G N E D ( x )  
     # e n d i f  
     # i f n d e f       _ _ P A C K E D  
         # d e f i n e   _ _ P A C K E D                                     @ p a c k e d  
     # e n d i f  
  
  
 # e l s e  
     # e r r o r   U n k n o w n   c o m p i l e r .  
 # e n d i f  
  
  
 # e n d i f   / *   _ _ C M S I S _ C O M P I L E R _ H   * /  
  