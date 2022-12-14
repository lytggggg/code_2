??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ e x t i . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   E X T I   H A L   m o d u l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 9   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ E X T I _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ E X T I _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   E X T I   E X T I  
     *   @ b r i e f   E X T I   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ T y p e s   E X T I   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H A L   E X T I   c o m m o n   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ E X T I _ C O M M O N _ C B _ I D                     =   0 x 0 0 U  
 }   E X T I _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     E X T I   H a n d l e   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   L i n e ;                                         / * ! <     E x t i   l i n e   n u m b e r   * /  
     v o i d   ( *   P e n d i n g C a l l b a c k ) ( v o i d ) ;       / * ! <     E x t i   p e n d i n g   c a l l b a c k   * /  
 }   E X T I _ H a n d l e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     E X T I   C o n f i g u r a t i o n   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   L i n e ;             / * ! <   T h e   E x t i   l i n e   t o   b e   c o n f i g u r e d .   T h i s   p a r a m e t e r  
                                                       c a n   b e   a   v a l u e   o f   @ r e f   E X T I _ L i n e   * /  
     u i n t 3 2 _ t   M o d e ;             / * ! <   T h e   E x i t   M o d e   t o   b e   c o n f i g u r e d   f o r   a   c o r e .  
                                                       T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   @ r e f   E X T I _ M o d e   * /  
     u i n t 3 2 _ t   T r i g g e r ;       / * ! <   T h e   E x t i   T r i g g e r   t o   b e   c o n f i g u r e d .   T h i s   p a r a m e t e r  
                                                       c a n   b e   a   v a l u e   o f   @ r e f   E X T I _ T r i g g e r   * /  
     u i n t 3 2 _ t   G P I O S e l ;       / * ! <   T h e   E x t i   G P I O   m u l t i p l e x e r   s e l e c t i o n   t o   b e   c o n f i g u r e d .  
                                                       T h i s   p a r a m e t e r   i s   o n l y   p o s s i b l e   f o r   l i n e   0   t o   1 5 .   I t  
                                                       c a n   b e   a   v a l u e   o f   @ r e f   E X T I _ G P I O S e l   * /  
 }   E X T I _ C o n f i g T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ C o n s t a n t s   E X T I   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ L i n e     E X T I   L i n e  
     *   @ {  
     * /  
 # d e f i n e   E X T I _ L I N E _ 0                                                 ( E X T I _ G P I O           |   0 x 0 0 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   0   * /  
 # d e f i n e   E X T I _ L I N E _ 1                                                 ( E X T I _ G P I O           |   0 x 0 1 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1   * /  
 # d e f i n e   E X T I _ L I N E _ 2                                                 ( E X T I _ G P I O           |   0 x 0 2 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   2   * /  
 # d e f i n e   E X T I _ L I N E _ 3                                                 ( E X T I _ G P I O           |   0 x 0 3 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   3   * /  
 # d e f i n e   E X T I _ L I N E _ 4                                                 ( E X T I _ G P I O           |   0 x 0 4 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   4   * /  
 # d e f i n e   E X T I _ L I N E _ 5                                                 ( E X T I _ G P I O           |   0 x 0 5 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   5   * /  
 # d e f i n e   E X T I _ L I N E _ 6                                                 ( E X T I _ G P I O           |   0 x 0 6 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   6   * /  
 # d e f i n e   E X T I _ L I N E _ 7                                                 ( E X T I _ G P I O           |   0 x 0 7 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   7   * /  
 # d e f i n e   E X T I _ L I N E _ 8                                                 ( E X T I _ G P I O           |   0 x 0 8 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   8   * /  
 # d e f i n e   E X T I _ L I N E _ 9                                                 ( E X T I _ G P I O           |   0 x 0 9 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   9   * /  
 # d e f i n e   E X T I _ L I N E _ 1 0                                               ( E X T I _ G P I O           |   0 x 0 A u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 0   * /  
 # d e f i n e   E X T I _ L I N E _ 1 1                                               ( E X T I _ G P I O           |   0 x 0 B u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 1   * /  
 # d e f i n e   E X T I _ L I N E _ 1 2                                               ( E X T I _ G P I O           |   0 x 0 C u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 2   * /  
 # d e f i n e   E X T I _ L I N E _ 1 3                                               ( E X T I _ G P I O           |   0 x 0 D u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 3   * /  
 # d e f i n e   E X T I _ L I N E _ 1 4                                               ( E X T I _ G P I O           |   0 x 0 E u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 4   * /  
 # d e f i n e   E X T I _ L I N E _ 1 5                                               ( E X T I _ G P I O           |   0 x 0 F u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 5   * /  
 # d e f i n e   E X T I _ L I N E _ 1 6                                               ( E X T I _ C O N F I G       |   0 x 1 0 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 6   C o n n e c t e d   t o   t h e   P V D   O u t p u t   * /  
 # d e f i n e   E X T I _ L I N E _ 1 7                                               ( E X T I _ C O N F I G       |   0 x 1 1 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 7   C o n n e c t e d   t o   t h e   R T C   A l a r m   e v e n t   * /  
 # i f   d e f i n e d ( E X T I _ I M R _ I M 1 8 )  
 # d e f i n e   E X T I _ L I N E _ 1 8                                               ( E X T I _ C O N F I G       |   0 x 1 2 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 8   C o n n e c t e d   t o   t h e   U S B   W a k e u p   f r o m   s u s p e n d   e v e n t   * /  
 # e n d i f   / *   E X T I _ I M R _ I M 1 8   * /  
 # i f   d e f i n e d ( E X T I _ I M R _ I M 1 9 )  
 # d e f i n e   E X T I _ L I N E _ 1 9                                               ( E X T I _ C O N F I G       |   0 x 1 3 u )         / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 9   C o n n e c t e d   t o   t h e   E t h e r n e t   W a k e u p   e v e n t   * /  
 # e n d i f   / *   E X T I _ I M R _ I M 1 9   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ M o d e     E X T I   M o d e  
     *   @ {  
     * /  
 # d e f i n e   E X T I _ M O D E _ N O N E                                             0 x 0 0 0 0 0 0 0 0 u  
 # d e f i n e   E X T I _ M O D E _ I N T E R R U P T                                   0 x 0 0 0 0 0 0 0 1 u  
 # d e f i n e   E X T I _ M O D E _ E V E N T                                           0 x 0 0 0 0 0 0 0 2 u  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ T r i g g e r     E X T I   T r i g g e r  
     *   @ {  
     * /  
 # d e f i n e   E X T I _ T R I G G E R _ N O N E                                       0 x 0 0 0 0 0 0 0 0 u  
 # d e f i n e   E X T I _ T R I G G E R _ R I S I N G                                   0 x 0 0 0 0 0 0 0 1 u  
 # d e f i n e   E X T I _ T R I G G E R _ F A L L I N G                                 0 x 0 0 0 0 0 0 0 2 u  
 # d e f i n e   E X T I _ T R I G G E R _ R I S I N G _ F A L L I N G                   ( E X T I _ T R I G G E R _ R I S I N G   |   E X T I _ T R I G G E R _ F A L L I N G )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ G P I O S e l     E X T I   G P I O S e l  
     *   @ b r i e f  
     *   @ {  
     * /  
 # d e f i n e   E X T I _ G P I O A                                                     0 x 0 0 0 0 0 0 0 0 u  
 # d e f i n e   E X T I _ G P I O B                                                     0 x 0 0 0 0 0 0 0 1 u  
 # d e f i n e   E X T I _ G P I O C                                                     0 x 0 0 0 0 0 0 0 2 u  
 # d e f i n e   E X T I _ G P I O D                                                     0 x 0 0 0 0 0 0 0 3 u  
 # i f   d e f i n e d   ( G P I O E )  
 # d e f i n e   E X T I _ G P I O E                                                     0 x 0 0 0 0 0 0 0 4 u  
 # e n d i f   / *   G P I O E   * /  
 # i f   d e f i n e d   ( G P I O F )  
 # d e f i n e   E X T I _ G P I O F                                                     0 x 0 0 0 0 0 0 0 5 u  
 # e n d i f   / *   G P I O F   * /  
 # i f   d e f i n e d   ( G P I O G )  
 # d e f i n e   E X T I _ G P I O G                                                     0 x 0 0 0 0 0 0 0 6 u  
 # e n d i f   / *   G P I O G   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ M a c r o s   E X T I   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ P r i v a t e _ C o n s t a n t s   E X T I   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     E X T I   L i n e   p r o p e r t y   d e f i n i t i o n  
     * /  
 # d e f i n e   E X T I _ P R O P E R T Y _ S H I F T                                   2 4 u  
 # d e f i n e   E X T I _ C O N F I G                                                   ( 0 x 0 2 u L   < <   E X T I _ P R O P E R T Y _ S H I F T )  
 # d e f i n e   E X T I _ G P I O                                                       ( ( 0 x 0 4 u L   < <   E X T I _ P R O P E R T Y _ S H I F T )   |   E X T I _ C O N F I G )  
 # d e f i n e   E X T I _ P R O P E R T Y _ M A S K                                     ( E X T I _ C O N F I G   |   E X T I _ G P I O )  
  
 / * *  
     *   @ b r i e f     E X T I   b i t   u s a g e  
     * /  
 # d e f i n e   E X T I _ P I N _ M A S K                                               0 x 0 0 0 0 0 0 1 F u  
  
 / * *  
     *   @ b r i e f     E X T I   M a s k   f o r   i n t e r r u p t   &   e v e n t   m o d e  
     * /  
 # d e f i n e   E X T I _ M O D E _ M A S K                                             ( E X T I _ M O D E _ E V E N T   |   E X T I _ M O D E _ I N T E R R U P T )  
  
 / * *  
     *   @ b r i e f     E X T I   M a s k   f o r   t r i g g e r   p o s s i b i l i t i e s  
     * /  
 # d e f i n e   E X T I _ T R I G G E R _ M A S K                                       ( E X T I _ T R I G G E R _ R I S I N G   |   E X T I _ T R I G G E R _ F A L L I N G )  
  
 / * *  
     *   @ b r i e f     E X T I   L i n e   n u m b e r  
     * /  
 # i f   d e f i n e d ( E X T I _ I M R _ I M 1 9 )  
 # d e f i n e   E X T I _ L I N E _ N B                                                 2 0 U L  
 # e l i f   d e f i n e d ( E X T I _ I M R _ I M 1 8 )  
 # d e f i n e   E X T I _ L I N E _ N B                                                 1 9 U L  
 # e l s e   / *   E X T I _ I M R _ I M 1 7   * /  
 # d e f i n e   E X T I _ L I N E _ N B                                                 1 8 U L  
 # e n d i f   / *   E X T I _ I M R _ I M 1 9   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ P r i v a t e _ M a c r o s   E X T I   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ E X T I _ L I N E ( _ _ E X T I _ L I N E _ _ )                     ( ( ( ( _ _ E X T I _ L I N E _ _ )   &   ~ ( E X T I _ P R O P E R T Y _ M A S K   |   E X T I _ P I N _ M A S K ) )   = =   0 x 0 0 u )   & &   \  
                                                                                           ( ( ( ( _ _ E X T I _ L I N E _ _ )   &   E X T I _ P R O P E R T Y _ M A S K )   = =   E X T I _ C O N F I G )       | |   \  
                                                                                             ( ( ( _ _ E X T I _ L I N E _ _ )   &   E X T I _ P R O P E R T Y _ M A S K )   = =   E X T I _ G P I O ) )         & &   \  
                                                                                             ( ( ( _ _ E X T I _ L I N E _ _ )   &   E X T I _ P I N _ M A S K )   <   E X T I _ L I N E _ N B ) )  
  
 # d e f i n e   I S _ E X T I _ M O D E ( _ _ E X T I _ L I N E _ _ )                     ( ( ( ( _ _ E X T I _ L I N E _ _ )   &   E X T I _ M O D E _ M A S K )   ! =   0 x 0 0 u )   & &   \  
                                                                                             ( ( ( _ _ E X T I _ L I N E _ _ )   &   ~ E X T I _ M O D E _ M A S K )   = =   0 x 0 0 u ) )  
  
 # d e f i n e   I S _ E X T I _ T R I G G E R ( _ _ E X T I _ L I N E _ _ )               ( ( ( _ _ E X T I _ L I N E _ _ )   &   ~ E X T I _ T R I G G E R _ M A S K )   = =   0 x 0 0 u )  
  
 # d e f i n e   I S _ E X T I _ P E N D I N G _ E D G E ( _ _ E X T I _ L I N E _ _ )     ( ( _ _ E X T I _ L I N E _ _ )   = =   E X T I _ T R I G G E R _ R I S I N G _ F A L L I N G )  
  
 # d e f i n e   I S _ E X T I _ C O N F I G _ L I N E ( _ _ E X T I _ L I N E _ _ )       ( ( ( _ _ E X T I _ L I N E _ _ )   &   E X T I _ C O N F I G )   ! =   0 x 0 0 u )  
  
 # i f   d e f i n e d   ( G P I O G )  
 # d e f i n e   I S _ E X T I _ G P I O _ P O R T ( _ _ P O R T _ _ )           ( ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O A )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O B )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O C )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O D )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O E )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O F )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O G ) )  
 # e l i f   d e f i n e d   ( G P I O F )  
 # d e f i n e   I S _ E X T I _ G P I O _ P O R T ( _ _ P O R T _ _ )           ( ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O A )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O B )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O C )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O D )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O E )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O F ) )  
 # e l i f   d e f i n e d   ( G P I O E )  
 # d e f i n e   I S _ E X T I _ G P I O _ P O R T ( _ _ P O R T _ _ )           ( ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O A )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O B )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O C )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O D )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O E ) )  
 # e l s e  
 # d e f i n e   I S _ E X T I _ G P I O _ P O R T ( _ _ P O R T _ _ )           ( ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O A )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O B )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O C )   | |   \  
                                                                                   ( ( _ _ P O R T _ _ )   = =   E X T I _ G P I O D ) )  
 # e n d i f   / *   G P I O G   * /  
  
 # d e f i n e   I S _ E X T I _ G P I O _ P I N ( _ _ P I N _ _ )               ( ( _ _ P I N _ _ )   <   1 6 u )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s   E X T I   E x p o r t e d   F u n c t i o n s  
     *   @ b r i e f         E X T I   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   C o n f i g u r a t i o n   f u n c t i o n s  
     *   @ b r i e f         C o n f i g u r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 / *   C o n f i g u r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ S e t C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C o n f i g T y p e D e f   * p E x t i C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ G e t C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C o n f i g T y p e D e f   * p E x t i C o n f i g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ C l e a r C o n f i g L i n e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ R e g i s t e r C a l l b a c k ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   E X T I _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   v o i d   ( * p P e n d i n g C b f n ) ( v o i d ) ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ E X T I _ G e t H a n d l e ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E x t i L i n e ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E X T I _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *   @ b r i e f         I O   o p e r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 v o i d                             H A L _ E X T I _ I R Q H a n d l e r ( E X T I _ H a n d l e T y p e D e f   * h e x t i ) ;  
 u i n t 3 2 _ t                     H A L _ E X T I _ G e t P e n d i n g ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E d g e ) ;  
 v o i d                             H A L _ E X T I _ C l e a r P e n d i n g ( E X T I _ H a n d l e T y p e D e f   * h e x t i ,   u i n t 3 2 _ t   E d g e ) ;  
 v o i d                             H A L _ E X T I _ G e n e r a t e S W I ( E X T I _ H a n d l e T y p e D e f   * h e x t i ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ E X T I _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  