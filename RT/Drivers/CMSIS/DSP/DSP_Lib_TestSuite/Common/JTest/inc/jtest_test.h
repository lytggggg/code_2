??# i f n d e f   _ J T E S T _ T E S T _ H _  
 # d e f i n e   _ J T E S T _ T E S T _ H _  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n c l u d e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   " j t e s t _ u t i l . h "  
 # i n c l u d e   " j t e s t _ t e s t _ r e t . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   T y p e   D e f i n i t i o n s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     A   s t r u c t   w h i c h   r e p r e s e n t s   a   T e s t   i n   t h e   J T E S T   f r a m e w o r k .     T h i s   s t r u c t   i s  
   *     u s e d   t o   e n a b l e ,   r u n ,   a n d   d e s c r i b e   t h e   t e s t   i t   r e p r e s e n t s .  
   * /  
 t y p e d e f   s t r u c t   J T E S T _ T E S T _ s t r u c t  
 {  
         J T E S T _ T E S T _ R E T _ t   (   *   t e s t _ f n _ p t r ) ( v o i d ) ;   / * * <   P o i n t e r   t o   t h e   t e s t   f u n c t i o n .   * /  
         c h a r       *   t e s t _ f n _ s t r ;                                         / * * <   N a m e   o f   t h e   t e s t   f u n c t i o n   * /  
         c h a r       *   f u t _ s t r ;                       / * * <   N a m e   o f   t h e   f u n c t i o n   u n d e r   t e s t .   * /  
  
         / * *  
           *     F l a g s   t h a t   g o v e r n   h o w   t h e   # J T E S T _ T E S T _ t   b e h a v e s .  
           * /  
         u n i o n   {  
                 s t r u c t   {  
                         u n s i g n e d   e n a b l e d   :   1 ;  
                         u n s i g n e d   u n u s e d     :   7 ;  
                 }   b i t s ;  
                 u i n t 8 _ t   b y t e ;                       / *   A c c e s s   a l l   f l a g s   a t   o n c e .   * /  
         }   f l a g s ;  
          
 }   J T E S T _ T E S T _ t ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   M a c r o s   a n d   D e f i n e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
   *     A s s i g n   a   t e s t   f u n c t i o n   t o   t h e   # J T E S T _ T E S T _ t   s t r u c t .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ S E T _ F N ( j t e s t _ t e s t _ p t r ,   f n _ p t r )                                       \  
         J T E S T _ S E T _ S T R U C T _ A T T R I B U T E ( j t e s t _ t e s t _ p t r ,   t e s t _ f n _ p t r ,   f n _ p t r )  
  
 / * *  
   *     S p e c i f y   a   f u n c t i o n   u n d e r   t e s t   ( F U T )   f o r   t h e   # J T E S T _ T E S T _ t   s t r u c t .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ S E T _ F U T ( j t e s t _ t e s t _ p t r ,   s t r )                                   \  
         J T E S T _ S E T _ S T R U C T _ A T T R I B U T E ( j t e s t _ t e s t _ p t r ,   f u t _ s t r ,   s t r )  
  
 / *   M a c r o s   c o n c e r n i n g   J T E S T _ T E S T _ t   f l a g s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # d e f i n e   J T E S T _ T E S T _ F L A G _ S E T   1   / * * <   V a l u e   o f   a   s e t   # J T E S T _ T E S T _ t   f l a g .   * /  
 # d e f i n e   J T E S T _ T E S T _ F L A G _ C L R   0   / * * <   V a l u e   o f   a   c l e a r e d   # J T E S T _ T E S T _ t   f l a g .   * /  
  
 / * *  
   *     E v a l u a t e   t o   t h e   f l a g   i n   # J T E S T _ T E S T _ t   h a v i n g   f l a g _ n a m e .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e )     \  
         ( ( j t e s t _ t e s t _ p t r ) - > f l a g s . b i t s . f l a g _ n a m e )  
  
 / * *  
   *     D i s p a t c h   m a c r o   f o r   s e t t i n g   a n d   c l e a r i n g   # J T E S T _ T E S T _ t   f l a g s .  
   *  
   *     @ p a r a m   j t e s t _ t e s t _ p t r   P o i n t e r   t o   a   # J T E S T _ T E S T _ t   s t r u c t .  
   *     @ p a r a m   f l a g _ n a m e             N a m e   o f   t h e   f l a g   t o   s e t   i n   # J T E S T _ T E S T _ t . f l a g s . b i t s  
   *     @ p a r a m   x x x                         V a i d   v a l u e s :   " S E T "   o r   " C L R "  
   *  
   *     @ n o t e   T h i s   f u n c t i o n   d e p e n d s   o n   J T E S T _ T E S T _ F L A G _ S E T   a n d   J T E S T _ T E S T _ F L A G _ C L R .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ X X X _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e ,   x x x )                                     \  
         d o                                                                                                                                               \  
         {                                                                                                                                                 \  
                 J T E S T _ T E S T _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e )   =   J T E S T _ T E S T _ F L A G _ # # x x x   ;   \  
         }   w h i l e   ( 0 )  
  
 / * *  
   *     S p e c i f i c a t i o n   o f   # J T E S T _ T E S T _ X X X _ F L A G   t o   s e t   # J T E S T _ T E S T _ t   f l a g s .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ S E T _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e )                                               \  
         J T E S T _ T E S T _ X X X _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e ,   S E T )  
  
 / * *  
   *     S p e c i f i c a t i o n   o f   # J T E S T _ T E S T _ X X X _ F L A G   t o   c l e a r   # J T E S T _ T E S T _ t   f l a g s .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ C L R _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e )                                               \  
         J T E S T _ T E S T _ X X X _ F L A G ( j t e s t _ t e s t _ p t r ,   f l a g _ n a m e ,   C L R )  
  
 / * *  
   *     E v a l u a t e   t o   t r u e   i f   t h e   # J T E S T _ T E S T _ t   i s   e n a b l e d .  
   * /  
 # d e f i n e   J T E S T _ T E S T _ I S _ E N A B L E D ( j t e s t _ t e s t _ p t r )                                                       \  
         ( J T E S T _ T E S T _ F L A G ( j t e s t _ t e s t _ p t r ,   e n a b l e d )   = =   J T E S T _ T E S T _ F L A G _ S E T )  
  
 # e n d i f   / *   _ J T E S T _ T E S T _ H _   * /  