??# i f n d e f   _ J T E S T _ D E F I N E _ H _  
 # d e f i n e   _ J T E S T _ D E F I N E _ H _  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a c r o s   a n d   D e f i n e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     M a k e s   a   s y m b o l   f o r   u s e   a s   a   s t r u c t   n a m e .   N a m e s   m a d e   t h i s   w a y   h a v e   t w o   p a r t s ;  
   *     t h e   f i r s t   p a r t s   i s   a   p r e f i x   c o m m o n   t o   a l l   s t r u c t s   o f   t h a t   c l a s s .   T h e   s e c o n d  
   *     i s   a   s p e c i f i e r   w h i c h   d i f f e r s   f o r   e a c h   i n s t a n c e   o f   t h a t   s t r u c t   t y p e .  
   * /  
 # d e f i n e   J T E S T _ S T R U C T _ N A M E ( p r e f i x ,   s p e c i f i e r )         \  
         C O N C A T ( p r e f i x ,   s p e c i f i e r )  
  
 / * *  
   *     D e f i n e   a   s t r u c t   w i t h   t y p e   w i t h   a   n a m e   g e n e r a t e d   b y   # J T E S T _ S T R U C T _ N A M E ( ) .  
   * /  
 # d e f i n e   J T E S T _ D E F I N E _ S T R U C T ( t y p e ,   s t r u c t _ n a m e )         \  
         t y p e   s t r u c t _ n a m e  
  
 / * *  
   *     D e c l a r e   a   s t r u c t   w i t h   t y p e   w i t h   a   n a m e   g e n e r a t e d   b y   # J T E S T _ S T R U C T _ N A M E ( ) .  
   * /  
 # d e f i n e   J T E S T _ D E C L A R E _ S T R U C T ( s t r u c t _ d e f i n i t i o n )   \  
         e x t e r n   s t r u c t _ d e f i n i t i o n  
  
 / * *  
   *     D e f i n e   a n d   i n i t i a l i z e   a   s t r u c t   ( c r e a t e d   w i t h   J T E S T _ D E F I N E _ S T R U C T ( ) )   a n d  
   *     i n i t i a l i z e   i t   w i t h   i n i t _ v a l u e s .  
   * /  
 # d e f i n e   J T E S T _ I N I T _ S T R U C T ( s t r u c t _ d e f i n i t i o n ,   i n i t _ v a l u e s )               \  
         s t r u c t _ d e f i n i t i o n   =   {                                                                               \  
                 i n i t _ v a l u e s                                                                                           \  
         }  
  
 # e n d i f   / *   _ J T E S T _ D E F I N E _ H _   * /  