??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ g p i o . c 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       G P I O   H A L   m o d u l e   d r i v e r . 
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g 
     *                     f u n c t i o n a l i t i e s   o f   t h e   G e n e r a l   P u r p o s e   I n p u t / O u t p u t   ( G P I O )   p e r i p h e r a l : 
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s 
     *                       +   I O   o p e r a t i o n   f u n c t i o n s 
     * 
     @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                         # # # # #   G P I O   P e r i p h e r a l   f e a t u r e s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
     S u b j e c t   t o   t h e   s p e c i f i c   h a r d w a r e   c h a r a c t e r i s t i c s   o f   e a c h   I / O   p o r t   l i s t e d   i n   t h e   d a t a s h e e t ,   e a c h 
     p o r t   b i t   o f   t h e   G e n e r a l   P u r p o s e   I O   ( G P I O )   P o r t s ,   c a n   b e   i n d i v i d u a l l y   c o n f i g u r e d   b y   s o f t w a r e 
     i n   s e v e r a l   m o d e s : 
     ( + )   I n p u t   m o d e 
     ( + )   A n a l o g   m o d e 
     ( + )   O u t p u t   m o d e 
     ( + )   A l t e r n a t e   f u n c t i o n   m o d e 
     ( + )   E x t e r n a l   i n t e r r u p t / e v e n t   l i n e s 
 
     [ . . ] 
     D u r i n g   a n d   j u s t   a f t e r   r e s e t ,   t h e   a l t e r n a t e   f u n c t i o n s   a n d   e x t e r n a l   i n t e r r u p t 
     l i n e s   a r e   n o t   a c t i v e   a n d   t h e   I / O   p o r t s   a r e   c o n f i g u r e d   i n   i n p u t   f l o a t i n g   m o d e . 
 
     [ . . ] 
     A l l   G P I O   p i n s   h a v e   w e a k   i n t e r n a l   p u l l - u p   a n d   p u l l - d o w n   r e s i s t o r s ,   w h i c h   c a n   b e 
     a c t i v a t e d   o r   n o t . 
 
     [ . . ] 
     I n   O u t p u t   o r   A l t e r n a t e   m o d e ,   e a c h   I O   c a n   b e   c o n f i g u r e d   o n   o p e n - d r a i n   o r   p u s h - p u l l 
     t y p e   a n d   t h e   I O   s p e e d   c a n   b e   s e l e c t e d   d e p e n d i n g   o n   t h e   V D D   v a l u e . 
 
     [ . . ] 
     A l l   p o r t s   h a v e   e x t e r n a l   i n t e r r u p t / e v e n t   c a p a b i l i t y .   T o   u s e   e x t e r n a l   i n t e r r u p t 
     l i n e s ,   t h e   p o r t   m u s t   b e   c o n f i g u r e d   i n   i n p u t   m o d e .   A l l   a v a i l a b l e   G P I O   p i n s   a r e 
     c o n n e c t e d   t o   t h e   1 6   e x t e r n a l   i n t e r r u p t / e v e n t   l i n e s   f r o m   E X T I 0   t o   E X T I 1 5 . 
 
     [ . . ] 
     T h e   e x t e r n a l   i n t e r r u p t / e v e n t   c o n t r o l l e r   c o n s i s t s   o f   u p   t o   2 0   e d g e   d e t e c t o r s   i n   c o n n e c t i v i t y 
     l i n e   d e v i c e s ,   o r   1 9   e d g e   d e t e c t o r s   i n   o t h e r   d e v i c e s   f o r   g e n e r a t i n g   e v e n t / i n t e r r u p t   r e q u e s t s . 
     E a c h   i n p u t   l i n e   c a n   b e   i n d e p e n d e n t l y   c o n f i g u r e d   t o   s e l e c t   t h e   t y p e   ( e v e n t   o r   i n t e r r u p t )   a n d 
     t h e   c o r r e s p o n d i n g   t r i g g e r   e v e n t   ( r i s i n g   o r   f a l l i n g   o r   b o t h ) .   E a c h   l i n e   c a n   a l s o   m a s k e d 
     i n d e p e n d e n t l y .   A   p e n d i n g   r e g i s t e r   m a i n t a i n s   t h e   s t a t u s   l i n e   o f   t h e   i n t e r r u p t   r e q u e s t s 
 
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
   [ . . ] 
       ( # )   E n a b l e   t h e   G P I O   A P B 2   c l o c k   u s i n g   t h e   f o l l o w i n g   f u n c t i o n   :   _ _ H A L _ R C C _ G P I O x _ C L K _ E N A B L E ( ) . 
 
       ( # )   C o n f i g u r e   t h e   G P I O   p i n ( s )   u s i n g   H A L _ G P I O _ I n i t ( ) . 
               ( + + )   C o n f i g u r e   t h e   I O   m o d e   u s i n g   " M o d e "   m e m b e r   f r o m   G P I O _ I n i t T y p e D e f   s t r u c t u r e 
               ( + + )   A c t i v a t e   P u l l - u p ,   P u l l - d o w n   r e s i s t o r   u s i n g   " P u l l "   m e m b e r   f r o m   G P I O _ I n i t T y p e D e f 
                         s t r u c t u r e . 
               ( + + )   I n   c a s e   o f   O u t p u t   o r   a l t e r n a t e   f u n c t i o n   m o d e   s e l e c t i o n :   t h e   s p e e d   i s 
                         c o n f i g u r e d   t h r o u g h   " S p e e d "   m e m b e r   f r o m   G P I O _ I n i t T y p e D e f   s t r u c t u r e 
               ( + + )   A n a l o g   m o d e   i s   r e q u i r e d   w h e n   a   p i n   i s   t o   b e   u s e d   a s   A D C   c h a n n e l 
                         o r   D A C   o u t p u t . 
               ( + + )   I n   c a s e   o f   e x t e r n a l   i n t e r r u p t / e v e n t   s e l e c t i o n   t h e   " M o d e "   m e m b e r   f r o m 
                         G P I O _ I n i t T y p e D e f   s t r u c t u r e   s e l e c t   t h e   t y p e   ( i n t e r r u p t   o r   e v e n t )   a n d 
                         t h e   c o r r e s p o n d i n g   t r i g g e r   e v e n t   ( r i s i n g   o r   f a l l i n g   o r   b o t h ) . 
 
       ( # )   I n   c a s e   o f   e x t e r n a l   i n t e r r u p t / e v e n t   m o d e   s e l e c t i o n ,   c o n f i g u r e   N V I C   I R Q   p r i o r i t y 
               m a p p e d   t o   t h e   E X T I   l i n e   u s i n g   H A L _ N V I C _ S e t P r i o r i t y ( )   a n d   e n a b l e   i t   u s i n g 
               H A L _ N V I C _ E n a b l e I R Q ( ) . 
 
       ( # )   T o   g e t   t h e   l e v e l   o f   a   p i n   c o n f i g u r e d   i n   i n p u t   m o d e   u s e   H A L _ G P I O _ R e a d P i n ( ) . 
 
       ( # )   T o   s e t / r e s e t   t h e   l e v e l   o f   a   p i n   c o n f i g u r e d   i n   o u t p u t   m o d e   u s e 
               H A L _ G P I O _ W r i t e P i n ( ) / H A L _ G P I O _ T o g g l e P i n ( ) . 
 
       ( # )   T o   l o c k   p i n   c o n f i g u r a t i o n   u n t i l   n e x t   r e s e t   u s e   H A L _ G P I O _ L o c k P i n ( ) . 
 
       ( # )   D u r i n g   a n d   j u s t   a f t e r   r e s e t ,   t h e   a l t e r n a t e   f u n c t i o n s   a r e   n o t 
               a c t i v e   a n d   t h e   G P I O   p i n s   a r e   c o n f i g u r e d   i n   i n p u t   f l o a t i n g   m o d e   ( e x c e p t   J T A G 
               p i n s ) . 
 
       ( # )   T h e   L S E   o s c i l l a t o r   p i n s   O S C 3 2 _ I N   a n d   O S C 3 2 _ O U T   c a n   b e   u s e d   a s   g e n e r a l   p u r p o s e 
               ( P C 1 4   a n d   P C 1 5 ,   r e s p e c t i v e l y )   w h e n   t h e   L S E   o s c i l l a t o r   i s   o f f .   T h e   L S E   h a s 
               p r i o r i t y   o v e r   t h e   G P I O   f u n c t i o n . 
 
       ( # )   T h e   H S E   o s c i l l a t o r   p i n s   O S C _ I N / O S C _ O U T   c a n   b e   u s e d   a s 
               g e n e r a l   p u r p o s e   P D 0   a n d   P D 1 ,   r e s p e c t i v e l y ,   w h e n   t h e   H S E   o s c i l l a t o r   i s   o f f . 
               T h e   H S E   h a s   p r i o r i t y   o v e r   t h e   G P I O   f u n c t i o n . 
 
     @ e n d v e r b a t i m 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s . 
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 > 
     * 
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e , 
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e 
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t : 
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e 
     * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     * / 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O   G P I O 
     *   @ b r i e f   G P I O   H A L   m o d u l e   d r i v e r 
     *   @ { 
     * / 
 
 # i f d e f   H A L _ G P I O _ M O D U L E _ E N A B L E D 
 
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   G P I O _ P r i v a t e _ C o n s t a n t s   G P I O   P r i v a t e   C o n s t a n t s 
     *   @ { 
     * / 
 # d e f i n e   G P I O _ M O D E                           0 x 0 0 0 0 0 0 0 3 u 
 # d e f i n e   E X T I _ M O D E                           0 x 1 0 0 0 0 0 0 0 u 
 # d e f i n e   G P I O _ M O D E _ I T                     0 x 0 0 0 1 0 0 0 0 u 
 # d e f i n e   G P I O _ M O D E _ E V T                   0 x 0 0 0 2 0 0 0 0 u 
 # d e f i n e   R I S I N G _ E D G E                       0 x 0 0 1 0 0 0 0 0 u 
 # d e f i n e   F A L L I N G _ E D G E                     0 x 0 0 2 0 0 0 0 0 u 
 # d e f i n e   G P I O _ O U T P U T _ T Y P E             0 x 0 0 0 0 0 0 1 0 u 
 
 # d e f i n e   G P I O _ N U M B E R                       1 6 u 
 
 / *   D e f i n i t i o n s   f o r   b i t   m a n i p u l a t i o n   o f   C R L   a n d   C R H   r e g i s t e r   * / 
 # d e f i n e     G P I O _ C R _ M O D E _ I N P U T                   0 x 0 0 0 0 0 0 0 0 u   / * ! <   0 0 :   I n p u t   m o d e   ( r e s e t   s t a t e )     * / 
 # d e f i n e     G P I O _ C R _ C N F _ A N A L O G                   0 x 0 0 0 0 0 0 0 0 u   / * ! <   0 0 :   A n a l o g   m o d e     * / 
 # d e f i n e     G P I O _ C R _ C N F _ I N P U T _ F L O A T I N G   0 x 0 0 0 0 0 0 0 4 u   / * ! <   0 1 :   F l o a t i n g   i n p u t   ( r e s e t   s t a t e )     * / 
 # d e f i n e     G P I O _ C R _ C N F _ I N P U T _ P U _ P D         0 x 0 0 0 0 0 0 0 8 u   / * ! <   1 0 :   I n p u t   w i t h   p u l l - u p   /   p u l l - d o w n     * / 
 # d e f i n e     G P I O _ C R _ C N F _ G P _ O U T P U T _ P P       0 x 0 0 0 0 0 0 0 0 u   / * ! <   0 0 :   G e n e r a l   p u r p o s e   o u t p u t   p u s h - p u l l     * / 
 # d e f i n e     G P I O _ C R _ C N F _ G P _ O U T P U T _ O D       0 x 0 0 0 0 0 0 0 4 u   / * ! <   0 1 :   G e n e r a l   p u r p o s e   o u t p u t   O p e n - d r a i n     * / 
 # d e f i n e     G P I O _ C R _ C N F _ A F _ O U T P U T _ P P       0 x 0 0 0 0 0 0 0 8 u   / * ! <   1 0 :   A l t e r n a t e   f u n c t i o n   o u t p u t   P u s h - p u l l     * / 
 # d e f i n e     G P I O _ C R _ C N F _ A F _ O U T P U T _ O D       0 x 0 0 0 0 0 0 0 C u   / * ! <   1 1 :   A l t e r n a t e   f u n c t i o n   o u t p u t   O p e n - d r a i n     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s   G P I O   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s 
   *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s 
   * 
 @ v e r b a t i m 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # # 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   a n d   d e - i n i t i a l i z e   t h e   G P I O s 
         t o   b e   r e a d y   f o r   u s e . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   G P I O x   p e r i p h e r a l   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e   G P I O _ I n i t . 
     *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
     *   @ p a r a m     G P I O _ I n i t :   p o i n t e r   t o   a   G P I O _ I n i t T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s 
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   G P I O   p e r i p h e r a l . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ G P I O _ I n i t ( G P I O _ T y p e D e f     * G P I O x ,   G P I O _ I n i t T y p e D e f   * G P I O _ I n i t ) 
 { 
     u i n t 3 2 _ t   p o s i t i o n   =   0 x 0 0 u ; 
     u i n t 3 2 _ t   i o p o s i t i o n ; 
     u i n t 3 2 _ t   i o c u r r e n t ; 
     u i n t 3 2 _ t   t e m p ; 
     u i n t 3 2 _ t   c o n f i g   =   0 x 0 0 u ; 
     _ _ I O   u i n t 3 2 _ t   * c o n f i g r e g i s t e r ;   / *   S t o r e   t h e   a d d r e s s   o f   C R L   o r   C R H   r e g i s t e r   b a s e d   o n   p i n   n u m b e r   * / 
     u i n t 3 2 _ t   r e g i s t e r o f f s e t ;               / *   o f f s e t   u s e d   d u r i n g   c o m p u t a t i o n   o f   C N F   a n d   M O D E   b i t s   p l a c e m e n t   i n s i d e   C R L   o r   C R H   r e g i s t e r   * / 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ A L L _ I N S T A N C E ( G P I O x ) ) ; 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ I n i t - > P i n ) ) ; 
     a s s e r t _ p a r a m ( I S _ G P I O _ M O D E ( G P I O _ I n i t - > M o d e ) ) ; 
 
     / *   C o n f i g u r e   t h e   p o r t   p i n s   * / 
     w h i l e   ( ( ( G P I O _ I n i t - > P i n )   > >   p o s i t i o n )   ! =   0 x 0 0 u ) 
     { 
         / *   G e t   t h e   I O   p o s i t i o n   * / 
         i o p o s i t i o n   =   ( 0 x 0 1 u L   < <   p o s i t i o n ) ; 
 
         / *   G e t   t h e   c u r r e n t   I O   p o s i t i o n   * / 
         i o c u r r e n t   =   ( u i n t 3 2 _ t ) ( G P I O _ I n i t - > P i n )   &   i o p o s i t i o n ; 
 
         i f   ( i o c u r r e n t   = =   i o p o s i t i o n ) 
         { 
             / *   C h e c k   t h e   A l t e r n a t e   f u n c t i o n   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ G P I O _ A F _ I N S T A N C E ( G P I O x ) ) ; 
 
             / *   B a s e d   o n   t h e   r e q u i r e d   m o d e ,   f i l l i n g   c o n f i g   v a r i a b l e   w i t h   M O D E y [ 1 : 0 ]   a n d   C N F y [ 3 : 2 ]   c o r r e s p o n d i n g   b i t s   * / 
             s w i t c h   ( G P I O _ I n i t - > M o d e ) 
             { 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   O U T P U T   p u s h - p u l l   m o d e   * / 
                 c a s e   G P I O _ M O D E _ O U T P U T _ P P : 
                     / *   C h e c k   t h e   G P I O   s p e e d   p a r a m e t e r   * / 
                     a s s e r t _ p a r a m ( I S _ G P I O _ S P E E D ( G P I O _ I n i t - > S p e e d ) ) ; 
                     c o n f i g   =   G P I O _ I n i t - > S p e e d   +   G P I O _ C R _ C N F _ G P _ O U T P U T _ P P ; 
                     b r e a k ; 
 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   O U T P U T   o p e n - d r a i n   m o d e   * / 
                 c a s e   G P I O _ M O D E _ O U T P U T _ O D : 
                     / *   C h e c k   t h e   G P I O   s p e e d   p a r a m e t e r   * / 
                     a s s e r t _ p a r a m ( I S _ G P I O _ S P E E D ( G P I O _ I n i t - > S p e e d ) ) ; 
                     c o n f i g   =   G P I O _ I n i t - > S p e e d   +   G P I O _ C R _ C N F _ G P _ O U T P U T _ O D ; 
                     b r e a k ; 
 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   A L T E R N A T E   F U N C T I O N   p u s h - p u l l   m o d e   * / 
                 c a s e   G P I O _ M O D E _ A F _ P P : 
                     / *   C h e c k   t h e   G P I O   s p e e d   p a r a m e t e r   * / 
                     a s s e r t _ p a r a m ( I S _ G P I O _ S P E E D ( G P I O _ I n i t - > S p e e d ) ) ; 
                     c o n f i g   =   G P I O _ I n i t - > S p e e d   +   G P I O _ C R _ C N F _ A F _ O U T P U T _ P P ; 
                     b r e a k ; 
 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   A L T E R N A T E   F U N C T I O N   o p e n - d r a i n   m o d e   * / 
                 c a s e   G P I O _ M O D E _ A F _ O D : 
                     / *   C h e c k   t h e   G P I O   s p e e d   p a r a m e t e r   * / 
                     a s s e r t _ p a r a m ( I S _ G P I O _ S P E E D ( G P I O _ I n i t - > S p e e d ) ) ; 
                     c o n f i g   =   G P I O _ I n i t - > S p e e d   +   G P I O _ C R _ C N F _ A F _ O U T P U T _ O D ; 
                     b r e a k ; 
 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   I N P U T   ( a l s o   a p p l i c a b l e   t o   E V E N T   a n d   I T   m o d e )   * / 
                 c a s e   G P I O _ M O D E _ I N P U T : 
                 c a s e   G P I O _ M O D E _ I T _ R I S I N G : 
                 c a s e   G P I O _ M O D E _ I T _ F A L L I N G : 
                 c a s e   G P I O _ M O D E _ I T _ R I S I N G _ F A L L I N G : 
                 c a s e   G P I O _ M O D E _ E V T _ R I S I N G : 
                 c a s e   G P I O _ M O D E _ E V T _ F A L L I N G : 
                 c a s e   G P I O _ M O D E _ E V T _ R I S I N G _ F A L L I N G : 
                     / *   C h e c k   t h e   G P I O   p u l l   p a r a m e t e r   * / 
                     a s s e r t _ p a r a m ( I S _ G P I O _ P U L L ( G P I O _ I n i t - > P u l l ) ) ; 
                     i f   ( G P I O _ I n i t - > P u l l   = =   G P I O _ N O P U L L ) 
                     { 
                         c o n f i g   =   G P I O _ C R _ M O D E _ I N P U T   +   G P I O _ C R _ C N F _ I N P U T _ F L O A T I N G ; 
                     } 
                     e l s e   i f   ( G P I O _ I n i t - > P u l l   = =   G P I O _ P U L L U P ) 
                     { 
                         c o n f i g   =   G P I O _ C R _ M O D E _ I N P U T   +   G P I O _ C R _ C N F _ I N P U T _ P U _ P D ; 
 
                         / *   S e t   t h e   c o r r e s p o n d i n g   O D R   b i t   * / 
                         G P I O x - > B S R R   =   i o p o s i t i o n ; 
                     } 
                     e l s e   / *   G P I O _ P U L L D O W N   * / 
                     { 
                         c o n f i g   =   G P I O _ C R _ M O D E _ I N P U T   +   G P I O _ C R _ C N F _ I N P U T _ P U _ P D ; 
 
                         / *   R e s e t   t h e   c o r r e s p o n d i n g   O D R   b i t   * / 
                         G P I O x - > B R R   =   i o p o s i t i o n ; 
                     } 
                     b r e a k ; 
 
                 / *   I f   w e   a r e   c o n f i g u r i n g   t h e   p i n   i n   I N P U T   a n a l o g   m o d e   * / 
                 c a s e   G P I O _ M O D E _ A N A L O G : 
                     c o n f i g   =   G P I O _ C R _ M O D E _ I N P U T   +   G P I O _ C R _ C N F _ A N A L O G ; 
                     b r e a k ; 
 
                 / *   P a r a m e t e r s   a r e   c h e c k e d   w i t h   a s s e r t _ p a r a m   * / 
                 d e f a u l t : 
                     b r e a k ; 
             } 
 
             / *   C h e c k   i f   t h e   c u r r e n t   b i t   b e l o n g s   t o   f i r s t   h a l f   o r   l a s t   h a l f   o f   t h e   p i n   c o u n t   n u m b e r 
               i n   o r d e r   t o   a d d r e s s   C R H   o r   C R L   r e g i s t e r * / 
             c o n f i g r e g i s t e r   =   ( i o c u r r e n t   <   G P I O _ P I N _ 8 )   ?   & G P I O x - > C R L           :   & G P I O x - > C R H ; 
             r e g i s t e r o f f s e t   =   ( i o c u r r e n t   <   G P I O _ P I N _ 8 )   ?   ( p o s i t i o n   < <   2 u )   :   ( ( p o s i t i o n   -   8 u )   < <   2 u ) ; 
 
             / *   A p p l y   t h e   n e w   c o n f i g u r a t i o n   o f   t h e   p i n   t o   t h e   r e g i s t e r   * / 
             M O D I F Y _ R E G ( ( * c o n f i g r e g i s t e r ) ,   ( ( G P I O _ C R L _ M O D E 0   |   G P I O _ C R L _ C N F 0 )   < <   r e g i s t e r o f f s e t ) ,   ( c o n f i g   < <   r e g i s t e r o f f s e t ) ) ; 
 
             / * - - - - - - - - - - - - - - - - - - - - -   E X T I   M o d e   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * / 
             / *   C o n f i g u r e   t h e   E x t e r n a l   I n t e r r u p t   o r   e v e n t   f o r   t h e   c u r r e n t   I O   * / 
             i f   ( ( G P I O _ I n i t - > M o d e   &   E X T I _ M O D E )   = =   E X T I _ M O D E ) 
             { 
                 / *   E n a b l e   A F I O   C l o c k   * / 
                 _ _ H A L _ R C C _ A F I O _ C L K _ E N A B L E ( ) ; 
                 t e m p   =   A F I O - > E X T I C R [ p o s i t i o n   > >   2 u ] ; 
                 C L E A R _ B I T ( t e m p ,   ( 0 x 0 F u )   < <   ( 4 u   *   ( p o s i t i o n   &   0 x 0 3 u ) ) ) ; 
                 S E T _ B I T ( t e m p ,   ( G P I O _ G E T _ I N D E X ( G P I O x ) )   < <   ( 4 u   *   ( p o s i t i o n   &   0 x 0 3 u ) ) ) ; 
                 A F I O - > E X T I C R [ p o s i t i o n   > >   2 u ]   =   t e m p ; 
 
 
                 / *   C o n f i g u r e   t h e   i n t e r r u p t   m a s k   * / 
                 i f   ( ( G P I O _ I n i t - > M o d e   &   G P I O _ M O D E _ I T )   = =   G P I O _ M O D E _ I T ) 
                 { 
                     S E T _ B I T ( E X T I - > I M R ,   i o c u r r e n t ) ; 
                 } 
                 e l s e 
                 { 
                     C L E A R _ B I T ( E X T I - > I M R ,   i o c u r r e n t ) ; 
                 } 
 
                 / *   C o n f i g u r e   t h e   e v e n t   m a s k   * / 
                 i f   ( ( G P I O _ I n i t - > M o d e   &   G P I O _ M O D E _ E V T )   = =   G P I O _ M O D E _ E V T ) 
                 { 
                     S E T _ B I T ( E X T I - > E M R ,   i o c u r r e n t ) ; 
                 } 
                 e l s e 
                 { 
                     C L E A R _ B I T ( E X T I - > E M R ,   i o c u r r e n t ) ; 
                 } 
 
                 / *   E n a b l e   o r   d i s a b l e   t h e   r i s i n g   t r i g g e r   * / 
                 i f   ( ( G P I O _ I n i t - > M o d e   &   R I S I N G _ E D G E )   = =   R I S I N G _ E D G E ) 
                 { 
                     S E T _ B I T ( E X T I - > R T S R ,   i o c u r r e n t ) ; 
                 } 
                 e l s e 
                 { 
                     C L E A R _ B I T ( E X T I - > R T S R ,   i o c u r r e n t ) ; 
                 } 
 
                 / *   E n a b l e   o r   d i s a b l e   t h e   f a l l i n g   t r i g g e r   * / 
                 i f   ( ( G P I O _ I n i t - > M o d e   &   F A L L I N G _ E D G E )   = =   F A L L I N G _ E D G E ) 
                 { 
                     S E T _ B I T ( E X T I - > F T S R ,   i o c u r r e n t ) ; 
                 } 
                 e l s e 
                 { 
                     C L E A R _ B I T ( E X T I - > F T S R ,   i o c u r r e n t ) ; 
                 } 
             } 
         } 
 
 	 p o s i t i o n + + ; 
     } 
 } 
 
 / * * 
     *   @ b r i e f     D e - i n i t i a l i z e s   t h e   G P I O x   p e r i p h e r a l   r e g i s t e r s   t o   t h e i r   d e f a u l t   r e s e t   v a l u e s . 
     *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
     *   @ p a r a m     G P I O _ P i n :   s p e c i f i e s   t h e   p o r t   b i t   t o   b e   w r i t t e n . 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   G P I O _ P I N _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ G P I O _ D e I n i t ( G P I O _ T y p e D e f     * G P I O x ,   u i n t 3 2 _ t   G P I O _ P i n ) 
 { 
     u i n t 3 2 _ t   p o s i t i o n   =   0 x 0 0 u ; 
     u i n t 3 2 _ t   i o c u r r e n t ; 
     u i n t 3 2 _ t   t m p ; 
     _ _ I O   u i n t 3 2 _ t   * c o n f i g r e g i s t e r ;   / *   S t o r e   t h e   a d d r e s s   o f   C R L   o r   C R H   r e g i s t e r   b a s e d   o n   p i n   n u m b e r   * / 
     u i n t 3 2 _ t   r e g i s t e r o f f s e t ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ A L L _ I N S T A N C E ( G P I O x ) ) ; 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ P i n ) ) ; 
 
     / *   C o n f i g u r e   t h e   p o r t   p i n s   * / 
     w h i l e   ( ( G P I O _ P i n   > >   p o s i t i o n )   ! =   0 u ) 
     { 
         / *   G e t   c u r r e n t   i o   p o s i t i o n   * / 
         i o c u r r e n t   =   ( G P I O _ P i n )   &   ( 1 u L   < <   p o s i t i o n ) ; 
 
         i f   ( i o c u r r e n t ) 
         { 
             / * - - - - - - - - - - - - - - - - - - - - - - - - -   E X T I   M o d e   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * / 
             / *   C l e a r   t h e   E x t e r n a l   I n t e r r u p t   o r   E v e n t   f o r   t h e   c u r r e n t   I O   * / 
 
             t m p   =   A F I O - > E X T I C R [ p o s i t i o n   > >   2 u ] ; 
             t m p   & =   0 x 0 F u L   < <   ( 4 u   *   ( p o s i t i o n   &   0 x 0 3 u ) ) ; 
             i f   ( t m p   = =   ( G P I O _ G E T _ I N D E X ( G P I O x )   < <   ( 4 u   *   ( p o s i t i o n   &   0 x 0 3 u ) ) ) ) 
             { 
                 t m p   =   0 x 0 F u L   < <   ( 4 u   *   ( p o s i t i o n   &   0 x 0 3 u ) ) ; 
                 C L E A R _ B I T ( A F I O - > E X T I C R [ p o s i t i o n   > >   2 u ] ,   t m p ) ; 
 
                 / *   C l e a r   E X T I   l i n e   c o n f i g u r a t i o n   * / 
                 C L E A R _ B I T ( E X T I - > I M R ,   ( u i n t 3 2 _ t ) i o c u r r e n t ) ; 
                 C L E A R _ B I T ( E X T I - > E M R ,   ( u i n t 3 2 _ t ) i o c u r r e n t ) ; 
 
                 / *   C l e a r   R i s i n g   F a l l i n g   e d g e   c o n f i g u r a t i o n   * / 
                 C L E A R _ B I T ( E X T I - > R T S R ,   ( u i n t 3 2 _ t ) i o c u r r e n t ) ; 
                 C L E A R _ B I T ( E X T I - > F T S R ,   ( u i n t 3 2 _ t ) i o c u r r e n t ) ; 
             } 
             / * - - - - - - - - - - - - - - - - - - - - - - - - -   G P I O   M o d e   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * / 
             / *   C h e c k   i f   t h e   c u r r e n t   b i t   b e l o n g s   t o   f i r s t   h a l f   o r   l a s t   h a l f   o f   t h e   p i n   c o u n t   n u m b e r 
               i n   o r d e r   t o   a d d r e s s   C R H   o r   C R L   r e g i s t e r   * / 
             c o n f i g r e g i s t e r   =   ( i o c u r r e n t   <   G P I O _ P I N _ 8 )   ?   & G P I O x - > C R L           :   & G P I O x - > C R H ; 
             r e g i s t e r o f f s e t   =   ( i o c u r r e n t   <   G P I O _ P I N _ 8 )   ?   ( p o s i t i o n   < <   2 u )   :   ( ( p o s i t i o n   -   8 u )   < <   2 u ) ; 
 
             / *   C R L / C R H   d e f a u l t   v a l u e   i s   f l o a t i n g   i n p u t ( 0 x 0 4 )   s h i f t e d   t o   c o r r e c t   p o s i t i o n   * / 
             M O D I F Y _ R E G ( * c o n f i g r e g i s t e r ,   ( ( G P I O _ C R L _ M O D E 0   |   G P I O _ C R L _ C N F 0 )   < <   r e g i s t e r o f f s e t ) ,   G P I O _ C R L _ C N F 0 _ 0   < <   r e g i s t e r o f f s e t ) ; 
 
             / *   O D R   d e f a u l t   v a l u e   i s   0   * / 
             C L E A R _ B I T ( G P I O x - > O D R ,   i o c u r r e n t ) ; 
         } 
 
         p o s i t i o n + + ; 
     } 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s 
   *     @ b r i e f       G P I O   R e a d   a n d   W r i t e 
   * 
 @ v e r b a t i m 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                               # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # # 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   G P I O s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     R e a d s   t h e   s p e c i f i e d   i n p u t   p o r t   p i n . 
     *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
     *   @ p a r a m     G P I O _ P i n :   s p e c i f i e s   t h e   p o r t   b i t   t o   r e a d . 
     *                   T h i s   p a r a m e t e r   c a n   b e   G P I O _ P I N _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) . 
     *   @ r e t v a l   T h e   i n p u t   p o r t   p i n   v a l u e . 
     * / 
 G P I O _ P i n S t a t e   H A L _ G P I O _ R e a d P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) 
 { 
     G P I O _ P i n S t a t e   b i t s t a t u s ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ P i n ) ) ; 
 
     i f   ( ( G P I O x - > I D R   &   G P I O _ P i n )   ! =   ( u i n t 3 2 _ t ) G P I O _ P I N _ R E S E T ) 
     { 
         b i t s t a t u s   =   G P I O _ P I N _ S E T ; 
     } 
     e l s e 
     { 
         b i t s t a t u s   =   G P I O _ P I N _ R E S E T ; 
     } 
     r e t u r n   b i t s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     S e t s   o r   c l e a r s   t h e   s e l e c t e d   d a t a   p o r t   b i t . 
     * 
     *   @ n o t e       T h i s   f u n c t i o n   u s e s   G P I O x _ B S R R   r e g i s t e r   t o   a l l o w   a t o m i c   r e a d / m o d i f y 
     *                   a c c e s s e s .   I n   t h i s   w a y ,   t h e r e   i s   n o   r i s k   o f   a n   I R Q   o c c u r r i n g   b e t w e e n 
     *                   t h e   r e a d   a n d   t h e   m o d i f y   a c c e s s . 
     * 
     *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
     *   @ p a r a m     G P I O _ P i n :   s p e c i f i e s   t h e   p o r t   b i t   t o   b e   w r i t t e n . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   G P I O _ P I N _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) . 
     *   @ p a r a m     P i n S t a t e :   s p e c i f i e s   t h e   v a l u e   t o   b e   w r i t t e n   t o   t h e   s e l e c t e d   b i t . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   G P I O _ P i n S t a t e   e n u m   v a l u e s : 
     *                         @ a r g   G P I O _ P I N _ R E S E T :   t o   c l e a r   t h e   p o r t   p i n 
     *                         @ a r g   G P I O _ P I N _ S E T :   t o   s e t   t h e   p o r t   p i n 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ G P I O _ W r i t e P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ,   G P I O _ P i n S t a t e   P i n S t a t e ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ P i n ) ) ; 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N _ A C T I O N ( P i n S t a t e ) ) ; 
 
     i f   ( P i n S t a t e   ! =   G P I O _ P I N _ R E S E T ) 
     { 
         G P I O x - > B S R R   =   G P I O _ P i n ; 
     } 
     e l s e 
     { 
         G P I O x - > B S R R   =   ( u i n t 3 2 _ t ) G P I O _ P i n   < <   1 6 u ; 
     } 
 } 
 
 / * * 
     *   @ b r i e f     T o g g l e s   t h e   s p e c i f i e d   G P I O   p i n 
     *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
     *   @ p a r a m     G P I O _ P i n :   S p e c i f i e s   t h e   p i n s   t o   b e   t o g g l e d . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ G P I O _ T o g g l e P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) 
 { 
     u i n t 3 2 _ t   o d r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ P i n ) ) ; 
 
     / *   g e t   c u r r e n t   O u p u t   D a t a   R e g i s t e r   v a l u e   * / 
     o d r   =   G P I O x - > O D R ; 
 
     / *   S e t   s e l e c t e d   p i n s   t h a t   w e r e   a t   l o w   l e v e l ,   a n d   r e s e t   o n e s   t h a t   w e r e   h i g h   * / 
     G P I O x - > B S R R   =   ( ( o d r   &   G P I O _ P i n )   < <   G P I O _ N U M B E R )   |   ( ~ o d r   &   G P I O _ P i n ) ; 
 } 
 
 / * * 
 *   @ b r i e f     L o c k s   G P I O   P i n s   c o n f i g u r a t i o n   r e g i s t e r s . 
 *   @ n o t e       T h e   l o c k i n g   m e c h a n i s m   a l l o w s   t h e   I O   c o n f i g u r a t i o n   t o   b e   f r o z e n .   W h e n   t h e   L O C K   s e q u e n c e 
 *                   h a s   b e e n   a p p l i e d   o n   a   p o r t   b i t ,   i t   i s   n o   l o n g e r   p o s s i b l e   t o   m o d i f y   t h e   v a l u e   o f   t h e   p o r t   b i t   u n t i l 
 *                   t h e   n e x t   r e s e t . 
 *   @ p a r a m     G P I O x :   w h e r e   x   c a n   b e   ( A . . G   d e p e n d i n g   o n   d e v i c e   u s e d )   t o   s e l e c t   t h e   G P I O   p e r i p h e r a l 
 *   @ p a r a m     G P I O _ P i n :   s p e c i f i e s   t h e   p o r t   b i t   t o   b e   l o c k e d . 
 *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   G P I O _ P i n _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) . 
 *   @ r e t v a l   N o n e 
 * / 
 H A L _ S t a t u s T y p e D e f   H A L _ G P I O _ L o c k P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) 
 { 
     _ _ I O   u i n t 3 2 _ t   t m p   =   G P I O _ L C K R _ L C K K ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ G P I O _ L O C K _ I N S T A N C E ( G P I O x ) ) ; 
     a s s e r t _ p a r a m ( I S _ G P I O _ P I N ( G P I O _ P i n ) ) ; 
 
     / *   A p p l y   l o c k   k e y   w r i t e   s e q u e n c e   * / 
     S E T _ B I T ( t m p ,   G P I O _ P i n ) ; 
     / *   S e t   L C K x   b i t ( s ) :   L C K K = ' 1 '   +   L C K [ 1 5 - 0 ]   * / 
     G P I O x - > L C K R   =   t m p ; 
     / *   R e s e t   L C K x   b i t ( s ) :   L C K K = ' 0 '   +   L C K [ 1 5 - 0 ]   * / 
     G P I O x - > L C K R   =   G P I O _ P i n ; 
     / *   S e t   L C K x   b i t ( s ) :   L C K K = ' 1 '   +   L C K [ 1 5 - 0 ]   * / 
     G P I O x - > L C K R   =   t m p ; 
     / *   R e a d   L C K K   r e g i s t e r .   T h i s   r e a d   i s   m a n d a t o r y   t o   c o m p l e t e   k e y   l o c k   s e q u e n c e   * / 
     t m p   =   G P I O x - > L C K R ; 
 
     / *   r e a d   a g a i n   i n   o r d e r   t o   c o n f i r m   l o c k   i s   a c t i v e   * / 
     i f   ( ( u i n t 3 2 _ t ) ( G P I O x - > L C K R   &   G P I O _ L C K R _ L C K K ) ) 
     { 
         r e t u r n   H A L _ O K ; 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 } 
 
 / * * 
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   E X T I   i n t e r r u p t   r e q u e s t . 
     *   @ p a r a m     G P I O _ P i n :   S p e c i f i e s   t h e   p i n s   c o n n e c t e d   E X T I   l i n e 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ G P I O _ E X T I _ I R Q H a n d l e r ( u i n t 1 6 _ t   G P I O _ P i n ) 
 { 
     / *   E X T I   l i n e   i n t e r r u p t   d e t e c t e d   * / 
     i f   ( _ _ H A L _ G P I O _ E X T I _ G E T _ I T ( G P I O _ P i n )   ! =   0 x 0 0 u ) 
     { 
         _ _ H A L _ G P I O _ E X T I _ C L E A R _ I T ( G P I O _ P i n ) ; 
         H A L _ G P I O _ E X T I _ C a l l b a c k ( G P I O _ P i n ) ; 
     } 
 } 
 
 / * * 
     *   @ b r i e f     E X T I   l i n e   d e t e c t i o n   c a l l b a c k s . 
     *   @ p a r a m     G P I O _ P i n :   S p e c i f i e s   t h e   p i n s   c o n n e c t e d   E X T I   l i n e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ G P I O _ E X T I _ C a l l b a c k ( u i n t 1 6 _ t   G P I O _ P i n ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( G P I O _ P i n ) ; 
     / *   N O T E :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                       t h e   H A L _ G P I O _ E X T I _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   H A L _ G P I O _ M O D U L E _ E N A B L E D   * / 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 