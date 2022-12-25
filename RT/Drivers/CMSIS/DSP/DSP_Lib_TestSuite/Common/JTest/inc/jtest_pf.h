�?# i f n d e f   _ J T E S T _ P F _ H _  
 # d e f i n e   _ J T E S T _ P F _ H _  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P u r p o s e   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   j t e s t _ p f . h   C o n t a i n s   m a c r o s   u s e f u l   f o r   c a p t u r i n g   p a s s / f a i l   d a t a .   * /  
  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a c r o s   a n d   D e f i n e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *   M e m b e r s   t h a t   c a n   b e   a d d e d   t o   o t h e r   s t r u c t s   t o   e x t e n d   t h e m   p a s s / f a i l   d a t a   a n d  
   *   c o r r e s p o n d i n g   f u n c t i o n a l i t y .  
   * /  
 # d e f i n e   J T E S T _ P F _ M E M B E R S                                                         \  
         u i n t 3 2 _ t   p a s s e d ;                                                                 \  
         u i n t 3 2 _ t   f a i l e d   / *   N o t e   t h e   l a c k i n g   s e m i c o l o n * /   \  
  
 / * *  
   *     U s e d   f o r   i n i t i a l i z i n g   J T E S T _ P F _ M E M B E R S   i n   a   s t r u c t   d e c l a r a t i o n .  
   * /  
 # d e f i n e   J T E S T _ P F _ M E M B E R _ I N I T                                         \  
         0 ,                                                                                     \  
         0  
  
 / *   M e m b e r - I n c r e m e n t i n g   M a c r o s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     D i s p a t c h   m a c r o   f o r   i n c r e m e n t i n g   # J T E S T _ P F _ M E M B E R S .  
   *  
   *     @ p a r a m   x x x   V a l u e s :   ' p a s s e d ' ,   ' f a i l e d '  
   * /  
 # d e f i n e   J T E S T _ P F _ I N C _ X X X ( x x x ,   s t r u c t _ p f _ p t r ,   a m o u n t )         \  
         d o                                                                                                     \  
         {                                                                                                       \  
                 ( ( s t r u c t _ p f _ p t r ) - > x x x )   + =   ( a m o u n t ) ;                           \  
         }   w h i l e   ( 0 )  
  
 / * *  
   *     S p e c i a l i z a t i o n   o f   t h e   # J T E S T _ P F _ I N C _ X X X   m a c r o   t o   i n c r e m e n t   t h e   p a s s e d  
   *     m e m b e r .  
   * /  
 # d e f i n e   J T E S T _ P F _ I N C _ P A S S E D ( s t r u c t _ p f _ p t r ,   a m o u n t )     \  
         J T E S T _ P F _ I N C _ X X X ( p a s s e d ,   s t r u c t _ p f _ p t r ,   a m o u n t )  
  
  
 / * *  
   *     S p e c i a l i z a t i o n   o f   t h e   # J T E S T _ P F _ I N C _ X X X   m a c r o   t o   i n c r e m e n t   t h e   f a i l e d  
   *     m e m b e r .  
   * /  
 # d e f i n e   J T E S T _ P F _ I N C _ F A I L E D ( s t r u c t _ p f _ p t r ,   a m o u n t )     \  
         J T E S T _ P F _ I N C _ X X X ( f a i l e d ,   s t r u c t _ p f _ p t r ,   a m o u n t )  
  
  
 / *   M e m b e r - R e s e t t i n g   M a c r o s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     D i s p a t c h   m a c r o   f o r   s e t t i n g   # J T E S T _ P F _ M E M B E R S   t o   z e r o .  
   *  
   *     @ p a r a m   x x x   V a l u e s :   ' p a s s e d ' ,   ' f a i l e d '  
   * /  
 # d e f i n e   J T E S T _ P F _ R E S E T _ X X X ( x x x ,   s t r u c t _ p f _ p t r )     \  
         d o                                                                                     \  
         {                                                                                       \  
                 ( ( s t r u c t _ p f _ p t r ) - > x x x )   =   U I N T 3 2 _ C ( 0 ) ;       \  
         }   w h i l e   ( 0 )  
  
 / * *  
   *     S p e c i a l i z a t i o n   o f   # J T E S T _ P F _ R E S E T _ X X X   f o r   t h e   ' p a s s e d '   m e m b e r .  
   * /  
 # d e f i n e   J T E S T _ P F _ R E S E T _ P A S S E D ( s t r u c t _ p f _ p t r )         \  
         J T E S T _ P F _ R E S E T _ X X X ( p a s s e d ,   s t r u c t _ p f _ p t r )  
  
 / * *  
   *     S p e c i a l i z a t i o n   o f   # J T E S T _ P F _ R E S E T _ X X X   f o r   t h e   ' f a i l e d '   m e m b e r .  
   * /  
 # d e f i n e   J T E S T _ P F _ R E S E T _ F A I L E D ( s t r u c t _ p f _ p t r )         \  
         J T E S T _ P F _ R E S E T _ X X X ( f a i l e d ,   s t r u c t _ p f _ p t r )  
  
 # e n d i f   / *   _ J T E S T _ P F _ H _   * /  