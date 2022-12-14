??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ a d c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   A D C   L L   m o d u l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ A D C _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ A D C _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( A D C 1 )   | |   d e f i n e d   ( A D C 2 )   | |   d e f i n e d   ( A D C 3 )  
  
 / * *   @ d e f g r o u p   A D C _ L L   A D C  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ L L _ P r i v a t e _ C o n s t a n t s   A D C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / *   I n t e r n a l   m a s k   f o r   A D C   g r o u p   r e g u l a r   s e q u e n c e r :                                                           * /  
 / *   T o   s e l e c t   i n t o   l i t e r a l   L L _ A D C _ R E G _ R A N K _ x   t h e   r e l e v a n t   b i t s   f o r :                         * /  
 / *   -   s e q u e n c e r   r e g i s t e r   o f f s e t                                                                                                 * /  
 / *   -   s e q u e n c e r   r a n k   b i t s   p o s i t i o n   i n t o   t h e   s e l e c t e d   r e g i s t e r                                     * /  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   g r o u p   r e g u l a r   s e q u e n c e r   c o n f i g u r a t i o n   * /  
 / *   ( o f f s e t   p l a c e d   i n t o   a   s p a r e   a r e a   o f   l i t e r a l   d e f i n i t i o n )   * /  
 # d e f i n e   A D C _ S Q R 1 _ R E G O F F S E T                                   0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ S Q R 2 _ R E G O F F S E T                                   0 x 0 0 0 0 0 1 0 0 U  
 # d e f i n e   A D C _ S Q R 3 _ R E G O F F S E T                                   0 x 0 0 0 0 0 2 0 0 U  
 # d e f i n e   A D C _ S Q R 4 _ R E G O F F S E T                                   0 x 0 0 0 0 0 3 0 0 U  
  
 # d e f i n e   A D C _ R E G _ S Q R X _ R E G O F F S E T _ M A S K                 ( A D C _ S Q R 1 _ R E G O F F S E T   |   A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ S Q R 4 _ R E G O F F S E T )  
 # d e f i n e   A D C _ R E G _ R A N K _ I D _ S Q R X _ M A S K                     ( A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K _ P O S B I T 0 )  
  
 / *   D e f i n i t i o n   o f   A D C   g r o u p   r e g u l a r   s e q u e n c e r   b i t s   i n f o r m a t i o n   t o   b e   i n s e r t e d     * /  
 / *   i n t o   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k s   l i t e r a l s   d e f i n i t i o n .                                 * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 _ S Q R X _ B I T O F F S E T _ P O S     (   0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 1 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 2 _ S Q R X _ B I T O F F S E T _ P O S     (   5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 2 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 3 _ S Q R X _ B I T O F F S E T _ P O S     ( 1 0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 3 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 4 _ S Q R X _ B I T O F F S E T _ P O S     ( 1 5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 4 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 5 _ S Q R X _ B I T O F F S E T _ P O S     ( 2 0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 5 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 6 _ S Q R X _ B I T O F F S E T _ P O S     ( 2 5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 3 _ S Q 6 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 7 _ S Q R X _ B I T O F F S E T _ P O S     (   0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 7 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 8 _ S Q R X _ B I T O F F S E T _ P O S     (   5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 8 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 9 _ S Q R X _ B I T O F F S E T _ P O S     ( 1 0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 9 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 0 _ S Q R X _ B I T O F F S E T _ P O S   ( 1 5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 1 0 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 1 _ S Q R X _ B I T O F F S E T _ P O S   ( 2 0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 1 1 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 2 _ S Q R X _ B I T O F F S E T _ P O S   ( 2 5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 2 _ S Q 1 2 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 3 _ S Q R X _ B I T O F F S E T _ P O S   (   0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 1 _ S Q 1 3 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 4 _ S Q R X _ B I T O F F S E T _ P O S   (   5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 1 _ S Q 1 4 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 5 _ S Q R X _ B I T O F F S E T _ P O S   ( 1 0 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 1 _ S Q 1 5 )   * /  
 # d e f i n e   A D C _ R E G _ R A N K _ 1 6 _ S Q R X _ B I T O F F S E T _ P O S   ( 1 5 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S Q R 1 _ S Q 1 6 )   * /  
  
 / *   I n t e r n a l   m a s k   f o r   A D C   g r o u p   i n j e c t e d   s e q u e n c e r :                                                         * /  
 / *   T o   s e l e c t   i n t o   l i t e r a l   L L _ A D C _ I N J _ R A N K _ x   t h e   r e l e v a n t   b i t s   f o r :                         * /  
 / *   -   d a t a   r e g i s t e r   o f f s e t                                                                                                           * /  
 / *   -   o f f s e t   r e g i s t e r   o f f s e t                                                                                                       * /  
 / *   -   s e q u e n c e r   r a n k   b i t s   p o s i t i o n   i n t o   t h e   s e l e c t e d   r e g i s t e r                                     * /  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   g r o u p   i n j e c t e d   d a t a   r e g i s t e r   * /  
 / *   ( o f f s e t   p l a c e d   i n t o   a   s p a r e   a r e a   o f   l i t e r a l   d e f i n i t i o n )   * /  
 # d e f i n e   A D C _ J D R 1 _ R E G O F F S E T                                   0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ J D R 2 _ R E G O F F S E T                                   0 x 0 0 0 0 0 1 0 0 U  
 # d e f i n e   A D C _ J D R 3 _ R E G O F F S E T                                   0 x 0 0 0 0 0 2 0 0 U  
 # d e f i n e   A D C _ J D R 4 _ R E G O F F S E T                                   0 x 0 0 0 0 0 3 0 0 U  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   g r o u p   i n j e c t e d   o f f s e t   c o n f i g u r a t i o n   * /  
 / *   ( o f f s e t   p l a c e d   i n t o   a   s p a r e   a r e a   o f   l i t e r a l   d e f i n i t i o n )   * /  
 # d e f i n e   A D C _ J O F R 1 _ R E G O F F S E T                                 0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ J O F R 2 _ R E G O F F S E T                                 0 x 0 0 0 0 1 0 0 0 U  
 # d e f i n e   A D C _ J O F R 3 _ R E G O F F S E T                                 0 x 0 0 0 0 2 0 0 0 U  
 # d e f i n e   A D C _ J O F R 4 _ R E G O F F S E T                                 0 x 0 0 0 0 3 0 0 0 U  
  
 # d e f i n e   A D C _ I N J _ J D R X _ R E G O F F S E T _ M A S K                 ( A D C _ J D R 1 _ R E G O F F S E T   |   A D C _ J D R 2 _ R E G O F F S E T   |   A D C _ J D R 3 _ R E G O F F S E T   |   A D C _ J D R 4 _ R E G O F F S E T )  
 # d e f i n e   A D C _ I N J _ J O F R X _ R E G O F F S E T _ M A S K               ( A D C _ J O F R 1 _ R E G O F F S E T   |   A D C _ J O F R 2 _ R E G O F F S E T   |   A D C _ J O F R 3 _ R E G O F F S E T   |   A D C _ J O F R 4 _ R E G O F F S E T )  
 # d e f i n e   A D C _ I N J _ R A N K _ I D _ J S Q R _ M A S K                     ( A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K _ P O S B I T 0 )  
  
 / *   I n t e r n a l   m a s k   f o r   A D C   c h a n n e l :                                                                                           * /  
 / *   T o   s e l e c t   i n t o   l i t e r a l   L L _ A D C _ C H A N N E L _ x   t h e   r e l e v a n t   b i t s   f o r :                           * /  
 / *   -   c h a n n e l   i d e n t i f i e r   d e f i n e d   b y   n u m b e r                                                                           * /  
 / *   -   c h a n n e l   d i f f e r e n t i a t i o n   b e t w e e n   e x t e r n a l   c h a n n e l s   ( c o n n e c t e d   t o                     * /  
 / *       G P I O   p i n s )   a n d   i n t e r n a l   c h a n n e l s   ( c o n n e c t e d   t o   i n t e r n a l   p a t h s )                       * /  
 / *   -   c h a n n e l   s a m p l i n g   t i m e   d e f i n e d   b y   S M P R x   r e g i s t e r   o f f s e t                                       * /  
 / *       a n d   S M P x   b i t s   p o s i t i o n s   i n t o   S M P R x   r e g i s t e r                                                             * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K                   ( A D C _ C R 1 _ A W D C H )  
 # d e f i n e   A D C _ C H A N N E L _ I D _ N U M B E R _ B I T O F F S E T _ P O S   (   0 U ) / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K )   * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ M A S K                                 ( A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K   |   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ M A S K )  
 / *   E q u i v a l e n t   m a s k   o f   A D C _ C H A N N E L _ N U M B E R _ M A S K   a l i g n e d   o n   r e g i s t e r   L S B   ( b i t   0 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K _ P O S B I T 0   0 x 0 0 0 0 0 0 1 F U   / *   E q u i v a l e n t   t o   s h i f t :   ( A D C _ C H A N N E L _ N U M B E R _ M A S K   > >   P O S I T I O N _ V A L ( A D C _ C H A N N E L _ N U M B E R _ M A S K ) )   * /  
  
 / *   C h a n n e l   d i f f e r e n t i a t i o n   b e t w e e n   e x t e r n a l   a n d   i n t e r n a l   c h a n n e l s   * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H                   0 x 8 0 0 0 0 0 0 0 U       / *   M a r k e r   o f   i n t e r n a l   c h a n n e l   * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ 2               0 x 4 0 0 0 0 0 0 0 U       / *   M a r k e r   o f   i n t e r n a l   c h a n n e l   f o r   o t h e r   A D C   i n s t a n c e s ,   i n   c a s e   o f   d i f f e r e n t   A D C   i n t e r n a l   c h a n n e l s   m a p p e d   o n   s a m e   c h a n n e l   n u m b e r   o n   d i f f e r e n t   A D C   i n s t a n c e s   * /  
 # d e f i n e   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ M A S K         ( A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H   |   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ 2 )  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   c h a n n e l   s a m p l i n g   t i m e   c o n f i g u r a t i o n   * /  
 / *   ( o f f s e t   p l a c e d   i n t o   a   s p a r e   a r e a   o f   l i t e r a l   d e f i n i t i o n )   * /  
 # d e f i n e   A D C _ S M P R 1 _ R E G O F F S E T                                 0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ S M P R 2 _ R E G O F F S E T                                 0 x 0 2 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ C H A N N E L _ S M P R X _ R E G O F F S E T _ M A S K       ( A D C _ S M P R 1 _ R E G O F F S E T   |   A D C _ S M P R 2 _ R E G O F F S E T )  
  
 # d e f i n e   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K         0 x 0 1 F 0 0 0 0 0 U  
 # d e f i n e   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S           ( 2 0 U )                       / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K )   * /  
  
 / *   D e f i n i t i o n   o f   c h a n n e l s   I D   n u m b e r   i n f o r m a t i o n   t o   b e   i n s e r t e d   i n t o                       * /  
 / *   c h a n n e l s   l i t e r a l s   d e f i n i t i o n .                                                                                             * /  
 # d e f i n e   A D C _ C H A N N E L _ 0 _ N U M B E R                               0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ C H A N N E L _ 1 _ N U M B E R                               (                                                                                                                                                 A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 2 _ N U M B E R                               (                                                                                                             A D C _ C R 1 _ A W D C H _ 1                                     )  
 # d e f i n e   A D C _ C H A N N E L _ 3 _ N U M B E R                               (                                                                                                             A D C _ C R 1 _ A W D C H _ 1   |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 4 _ N U M B E R                               (                                                                         A D C _ C R 1 _ A W D C H _ 2                                                                         )  
 # d e f i n e   A D C _ C H A N N E L _ 5 _ N U M B E R                               (                                                                         A D C _ C R 1 _ A W D C H _ 2                                       |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 6 _ N U M B E R                               (                                                                         A D C _ C R 1 _ A W D C H _ 2   |   A D C _ C R 1 _ A W D C H _ 1                                     )  
 # d e f i n e   A D C _ C H A N N E L _ 7 _ N U M B E R                               (                                                                         A D C _ C R 1 _ A W D C H _ 2   |   A D C _ C R 1 _ A W D C H _ 1   |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 8 _ N U M B E R                               (                                     A D C _ C R 1 _ A W D C H _ 3                                                                                                             )  
 # d e f i n e   A D C _ C H A N N E L _ 9 _ N U M B E R                               (                                     A D C _ C R 1 _ A W D C H _ 3                                                                           |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 1 0 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3                                       |   A D C _ C R 1 _ A W D C H _ 1                                     )  
 # d e f i n e   A D C _ C H A N N E L _ 1 1 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3                                       |   A D C _ C R 1 _ A W D C H _ 1   |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 1 2 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3   |   A D C _ C R 1 _ A W D C H _ 2                                                                         )  
 # d e f i n e   A D C _ C H A N N E L _ 1 3 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3   |   A D C _ C R 1 _ A W D C H _ 2                                       |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 1 4 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3   |   A D C _ C R 1 _ A W D C H _ 2   |   A D C _ C R 1 _ A W D C H _ 1                                     )  
 # d e f i n e   A D C _ C H A N N E L _ 1 5 _ N U M B E R                             (                                     A D C _ C R 1 _ A W D C H _ 3   |   A D C _ C R 1 _ A W D C H _ 2   |   A D C _ C R 1 _ A W D C H _ 1   |   A D C _ C R 1 _ A W D C H _ 0 )  
 # d e f i n e   A D C _ C H A N N E L _ 1 6 _ N U M B E R                             ( A D C _ C R 1 _ A W D C H _ 4                                                                                                                                                 )  
 # d e f i n e   A D C _ C H A N N E L _ 1 7 _ N U M B E R                             ( A D C _ C R 1 _ A W D C H _ 4                                                                                                               |   A D C _ C R 1 _ A W D C H _ 0 )  
  
 / *   D e f i n i t i o n   o f   c h a n n e l s   s a m p l i n g   t i m e   i n f o r m a t i o n   t o   b e   i n s e r t e d   i n t o               * /  
 / *   c h a n n e l s   l i t e r a l s   d e f i n i t i o n .                                                                                             * /  
 # d e f i n e   A D C _ C H A N N E L _ 0 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( (   0 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 0 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( (   3 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 1 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 2 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( (   6 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 2 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 3 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( (   9 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 3 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 4 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 1 2 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 4 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 5 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 1 5 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 5 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 6 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 1 8 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 6 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 7 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 2 1 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 7 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 8 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 2 4 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 8 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 9 _ S M P                                     ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( 2 7 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 2 _ S M P 9 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 0 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( (   0 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 0 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 1 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( (   3 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 1 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 2 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( (   6 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 2 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 3 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( (   9 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 3 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 4 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( ( 1 2 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 4 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 5 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( ( 1 5 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 5 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 6 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( ( 1 8 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 6 )   * /  
 # d e f i n e   A D C _ C H A N N E L _ 1 7 _ S M P                                   ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( ( 2 1 U )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   / *   V a l u e   s h i f t e d   i s   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ S M P R 1 _ S M P 1 7 )   * /  
  
 / *   I n t e r n a l   m a s k   f o r   A D C   a n a l o g   w a t c h d o g :                                                                           * /  
 / *   T o   s e l e c t   i n t o   l i t e r a l s   L L _ A D C _ A W D _ C H A N N E L x _ x x x   t h e   r e l e v a n t   b i t s   f o r :           * /  
 / *   ( c o n c a t e n a t i o n   o f   m u l t i p l e   b i t s   u s e d   i n   d i f f e r e n t   a n a l o g   w a t c h d o g s ,                 * /  
 / *   ( f e a t u r e   o f   s e v e r a l   w a t c h d o g s   n o t   a v a i l a b l e   o n   a l l   S T M 3 2   f a m i l i e s ) ) .               * /  
 / *   -   a n a l o g   w a t c h d o g   1 :   m o n i t o r e d   c h a n n e l   d e f i n e d   b y   n u m b e r ,                                     * /  
 / *       s e l e c t i o n   o f   A D C   g r o u p   ( A D C   g r o u p s   r e g u l a r   a n d - o r   i n j e c t e d ) .                           * /  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   a n a l o g   w a t c h d o g   c h a n n e l   c o n f i g u r a t i o n   * /  
 # d e f i n e   A D C _ A W D _ C R 1 _ R E G O F F S E T                             0 x 0 0 0 0 0 0 0 0 U  
  
 # d e f i n e   A D C _ A W D _ C R X _ R E G O F F S E T _ M A S K                   ( A D C _ A W D _ C R 1 _ R E G O F F S E T )  
  
 # d e f i n e   A D C _ A W D _ C R 1 _ C H A N N E L _ M A S K                       ( A D C _ C R 1 _ A W D C H   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )  
 # d e f i n e   A D C _ A W D _ C R _ A L L _ C H A N N E L _ M A S K                 ( A D C _ A W D _ C R 1 _ C H A N N E L _ M A S K )  
  
 / *   I n t e r n a l   r e g i s t e r   o f f s e t   f o r   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   c o n f i g u r a t i o n   * /  
 # d e f i n e   A D C _ A W D _ T R 1 _ H I G H _ R E G O F F S E T                   0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   A D C _ A W D _ T R 1 _ L O W _ R E G O F F S E T                     0 x 0 0 0 0 0 0 0 1 U  
 # d e f i n e   A D C _ A W D _ T R X _ R E G O F F S E T _ M A S K                   ( A D C _ A W D _ T R 1 _ H I G H _ R E G O F F S E T   |   A D C _ A W D _ T R 1 _ L O W _ R E G O F F S E T )  
  
 / *   A D C   r e g i s t e r s   b i t s   p o s i t i o n s   * /  
 # d e f i n e   A D C _ C R 1 _ D U A L M O D _ B I T O F F S E T _ P O S             ( 1 6 U )   / *   V a l u e   e q u i v a l e n t   t o   P O S I T I O N _ V A L ( A D C _ C R 1 _ D U A L M O D )   * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ L L _ P r i v a t e _ M a c r o s   A D C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D r i v e r   m a c r o   r e s e r v e d   f o r   i n t e r n a l   u s e :   i s o l a t e   b i t s   w i t h   t h e  
     *                   s e l e c t e d   m a s k   a n d   s h i f t   t h e m   t o   t h e   r e g i s t e r   L S B  
     *                   ( s h i f t   m a s k   o n   r e g i s t e r   p o s i t i o n   b i t   0 ) .  
     *   @ p a r a m     _ _ B I T S _ _   B i t s   i n   r e g i s t e r   3 2   b i t s  
     *   @ p a r a m     _ _ M A S K _ _   M a s k   i n   r e g i s t e r   3 2   b i t s  
     *   @ r e t v a l   B i t s   i n   r e g i s t e r   3 2   b i t s  
     * /  
 # d e f i n e   _ _ A D C _ M A S K _ S H I F T ( _ _ B I T S _ _ ,   _ _ M A S K _ _ )                                                                       \  
     ( ( ( _ _ B I T S _ _ )   &   ( _ _ M A S K _ _ ) )   > >   P O S I T I O N _ V A L ( ( _ _ M A S K _ _ ) ) )  
  
 / * *  
     *   @ b r i e f     D r i v e r   m a c r o   r e s e r v e d   f o r   i n t e r n a l   u s e :   s e t   a   p o i n t e r   t o  
     *                   a   r e g i s t e r   f r o m   a   r e g i s t e r   b a s i s   f r o m   w h i c h   a n   o f f s e t  
     *                   i s   a p p l i e d .  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   b a s i s   f r o m   w h i c h   t h e   o f f s e t   i s   a p p l i e d .  
     *   @ p a r a m     _ _ R E G _ O F F F S E T _ _   O f f s e t   t o   b e   a p p l i e d   ( u n i t :   n u m b e r   o f   r e g i s t e r s ) .  
     *   @ r e t v a l   P o i n t e r   t o   r e g i s t e r   a d d r e s s  
     * /  
 # d e f i n e   _ _ A D C _ P T R _ R E G _ O F F S E T ( _ _ R E G _ _ ,   _ _ R E G _ O F F F S E T _ _ )                                                   \  
   ( ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t )   ( ( u i n t 3 2 _ t ) ( & ( _ _ R E G _ _ ) )   +   ( ( _ _ R E G _ O F F F S E T _ _ )   < <   2 U ) ) ) )  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   A D C _ L L _ E S _ I N I T   A D C   E x p o r t e d   I n i t   s t r u c t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   s o m e   f e a t u r e s   o f   A D C   c o m m o n   p a r a m e t e r s  
     *                   a n d   m u l t i m o d e  
     *                   ( a l l   A D C   i n s t a n c e s   b e l o n g i n g   t o   t h e   s a m e   A D C   c o m m o n   i n s t a n c e ) .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   b y   f u n c t i o n   @ r e f   L L _ A D C _ C o m m o n I n i t ( )  
     *                   i s   c o n d i t i o n e d   t o   A D C   i n s t a n c e s   s t a t e   ( a l l   A D C   i n s t a n c e s  
     *                   s h a r i n g   t h e   s a m e   A D C   c o m m o n   i n s t a n c e ) :  
     *                   A l l   A D C   i n s t a n c e s   s h a r i n g   t h e   s a m e   A D C   c o m m o n   i n s t a n c e   m u s t   b e  
     *                   d i s a b l e d .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   M u l t i m o d e ;                                       / * ! <   S e t   A D C   m u l t i m o d e   c o n f i g u r a t i o n   t o   o p e r a t e   i n   i n d e p e n d e n t   m o d e   o r   m u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s ) .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ M U L T I _ M O D E  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ S e t M u l t i m o d e ( ) .   * /  
 }   L L _ A D C _ C o m m o n I n i t T y p e D e f ;  
 / * *  
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   s o m e   f e a t u r e s   o f   A D C   i n s t a n c e .  
     *   @ n o t e       T h e s e   p a r a m e t e r s   h a v e   a n   i m p a c t   o n   A D C   s c o p e :   A D C   i n s t a n c e .  
     *                   A f f e c t s   b o t h   g r o u p   r e g u l a r   a n d   g r o u p   i n j e c t e d   ( a v a i l a b i l i t y  
     *                   o f   A D C   g r o u p   i n j e c t e d   d e p e n d s   o n   S T M 3 2   f a m i l i e s ) .  
     *                   R e f e r   t o   c o r r e s p o n d i n g   u n i t a r y   f u n c t i o n s   i n t o  
     *                   @ r e f   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ I n s t a n c e   .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   b y   f u n c t i o n   @ r e f   L L _ A D C _ I n i t ( )  
     *                   i s   c o n d i t i o n e d   t o   A D C   s t a t e :  
     *                   A D C   i n s t a n c e   m u s t   b e   d i s a b l e d .  
     *                   T h i s   c o n d i t i o n   i s   a p p l i e d   t o   a l l   A D C   f e a t u r e s ,   f o r   e f f i c i e n c y  
     *                   a n d   c o m p a t i b i l i t y   o v e r   a l l   S T M 3 2   f a m i l i e s .   H o w e v e r ,   t h e   d i f f e r e n t  
     *                   f e a t u r e s   c a n   b e   s e t   u n d e r   d i f f e r e n t   A D C   s t a t e   c o n d i t i o n s  
     *                   ( s e t t i n g   p o s s i b l e   w i t h   A D C   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g ,  
     *                   A D C   e n a b l e d   w i t h   c o n v e r s i o n   o n   g o i n g ,   . . . )  
     *                   E a c h   f e a t u r e   c a n   b e   u p d a t e d   a f t e r w a r d s   w i t h   a   u n i t a r y   f u n c t i o n  
     *                   a n d   p o t e n t i a l l y   w i t h   A D C   i n   a   d i f f e r e n t   s t a t e   t h a n   d i s a b l e d ,  
     *                   r e f e r   t o   d e s c r i p t i o n   o f   e a c h   f u n c t i o n   f o r   s e t t i n g  
     *                   c o n d i t i o n e d   t o   A D C   s t a t e .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   D a t a A l i g n m e n t ;                               / * ! <   S e t   A D C   c o n v e r s i o n   d a t a   a l i g n m e n t .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ D A T A _ A L I G N  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ S e t D a t a A l i g n m e n t ( ) .   * /  
  
     u i n t 3 2 _ t   S e q u e n c e r s S c a n M o d e ;                     / * ! <   S e t   A D C   s c a n   s e l e c t i o n .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ S C A N _ S E L E C T I O N  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( ) .   * /  
  
 }   L L _ A D C _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   s o m e   f e a t u r e s   o f   A D C   g r o u p   r e g u l a r .  
     *   @ n o t e       T h e s e   p a r a m e t e r s   h a v e   a n   i m p a c t   o n   A D C   s c o p e :   A D C   g r o u p   r e g u l a r .  
     *                   R e f e r   t o   c o r r e s p o n d i n g   u n i t a r y   f u n c t i o n s   i n t o  
     *                   @ r e f   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ G r o u p _ R e g u l a r  
     *                   ( f u n c t i o n s   w i t h   p r e f i x   " R E G " ) .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   b y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ I n i t ( )  
     *                   i s   c o n d i t i o n e d   t o   A D C   s t a t e :  
     *                   A D C   i n s t a n c e   m u s t   b e   d i s a b l e d .  
     *                   T h i s   c o n d i t i o n   i s   a p p l i e d   t o   a l l   A D C   f e a t u r e s ,   f o r   e f f i c i e n c y  
     *                   a n d   c o m p a t i b i l i t y   o v e r   a l l   S T M 3 2   f a m i l i e s .   H o w e v e r ,   t h e   d i f f e r e n t  
     *                   f e a t u r e s   c a n   b e   s e t   u n d e r   d i f f e r e n t   A D C   s t a t e   c o n d i t i o n s  
     *                   ( s e t t i n g   p o s s i b l e   w i t h   A D C   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g ,  
     *                   A D C   e n a b l e d   w i t h   c o n v e r s i o n   o n   g o i n g ,   . . . )  
     *                   E a c h   f e a t u r e   c a n   b e   u p d a t e d   a f t e r w a r d s   w i t h   a   u n i t a r y   f u n c t i o n  
     *                   a n d   p o t e n t i a l l y   w i t h   A D C   i n   a   d i f f e r e n t   s t a t e   t h a n   d i s a b l e d ,  
     *                   r e f e r   t o   d e s c r i p t i o n   o f   e a c h   f u n c t i o n   f o r   s e t t i n g  
     *                   c o n d i t i o n e d   t o   A D C   s t a t e .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   T r i g g e r S o u r c e ;                               / * ! <   S e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   s o u r c e :   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,   e x t e r n a l   i n t e r r u p t   l i n e ) .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ R E G _ T R I G G E R _ S O U R C E  
                                                                                           @ n o t e   O n   t h i s   S T M 3 2   s e r i e ,   e x t e r n a l   t r i g g e r   i s   s e t   w i t h   t r i g g e r   p o l a r i t y :   r i s i n g   e d g e  
                                                                                                       ( o n l y   t r i g g e r   p o l a r i t y   a v a i l a b l e   o n   t h i s   S T M 3 2   s e r i e ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t T r i g g e r S o u r c e ( ) .   * /  
  
     u i n t 3 2 _ t   S e q u e n c e r L e n g t h ;                           / * ! <   S e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   l e n g t h .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ R E G _ S E Q _ S C A N _ L E N G T H  
                                                                                           @ n o t e   T h i s   p a r a m e t e r   i s   d i s c a r d e d   i f   s c a n   m o d e   i s   d i s a b l e d   ( r e f e r   t o   p a r a m e t e r   ' A D C _ S e q u e n c e r s S c a n M o d e ' ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( ) .   * /  
  
     u i n t 3 2 _ t   S e q u e n c e r D i s c o n t ;                         / * ! <   S e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d   n u m b e r   o f   r a n k s .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ R E G _ S E Q _ D I S C O N T _ M O D E  
                                                                                           @ n o t e   T h i s   p a r a m e t e r   h a s   a n   e f f e c t   o n l y   i f   g r o u p   r e g u l a r   s e q u e n c e r   i s   e n a b l e d  
                                                                                                       ( s c a n   l e n g t h   o f   2   r a n k s   o r   m o r e ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r D i s c o n t ( ) .   * /  
  
     u i n t 3 2 _ t   C o n t i n u o u s M o d e ;                             / * ! <   S e t   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e   o n   A D C   g r o u p   r e g u l a r ,   w h e t h e r   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   s i n g l e   m o d e   ( o n e   c o n v e r s i o n   p e r   t r i g g e r )   o r   i n   c o n t i n u o u s   m o d e   ( a f t e r   t h e   f i r s t   t r i g g e r ,   f o l l o w i n g   c o n v e r s i o n s   l a u n c h e d   s u c c e s s i v e l y   a u t o m a t i c a l l y ) .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ R E G _ C O N T I N U O U S _ M O D E  
                                                                                           N o t e :   I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   g r o u p   r e g u l a r   c o n t i n u o u s   m o d e   a n d   d i s c o n t i n u o u s   m o d e .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t C o n t i n u o u s M o d e ( ) .   * /  
  
     u i n t 3 2 _ t   D M A T r a n s f e r ;                                   / * ! <   S e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a   t r a n s f e r :   n o   t r a n s f e r   o r   t r a n s f e r   b y   D M A ,   a n d   D M A   r e q u e s t s   m o d e .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ R E G _ D M A _ T R A N S F E R  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t D M A T r a n s f e r ( ) .   * /  
  
 }   L L _ A D C _ R E G _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     S t r u c t u r e   d e f i n i t i o n   o f   s o m e   f e a t u r e s   o f   A D C   g r o u p   i n j e c t e d .  
     *   @ n o t e       T h e s e   p a r a m e t e r s   h a v e   a n   i m p a c t   o n   A D C   s c o p e :   A D C   g r o u p   i n j e c t e d .  
     *                   R e f e r   t o   c o r r e s p o n d i n g   u n i t a r y   f u n c t i o n s   i n t o  
     *                   @ r e f   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ G r o u p _ R e g u l a r  
     *                   ( f u n c t i o n s   w i t h   p r e f i x   " I N J " ) .  
     *   @ n o t e       T h e   s e t t i n g   o f   t h e s e   p a r a m e t e r s   b y   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ I n i t ( )  
     *                   i s   c o n d i t i o n e d   t o   A D C   s t a t e :  
     *                   A D C   i n s t a n c e   m u s t   b e   d i s a b l e d .  
     *                   T h i s   c o n d i t i o n   i s   a p p l i e d   t o   a l l   A D C   f e a t u r e s ,   f o r   e f f i c i e n c y  
     *                   a n d   c o m p a t i b i l i t y   o v e r   a l l   S T M 3 2   f a m i l i e s .   H o w e v e r ,   t h e   d i f f e r e n t  
     *                   f e a t u r e s   c a n   b e   s e t   u n d e r   d i f f e r e n t   A D C   s t a t e   c o n d i t i o n s  
     *                   ( s e t t i n g   p o s s i b l e   w i t h   A D C   e n a b l e d   w i t h o u t   c o n v e r s i o n   o n   g o i n g ,  
     *                   A D C   e n a b l e d   w i t h   c o n v e r s i o n   o n   g o i n g ,   . . . )  
     *                   E a c h   f e a t u r e   c a n   b e   u p d a t e d   a f t e r w a r d s   w i t h   a   u n i t a r y   f u n c t i o n  
     *                   a n d   p o t e n t i a l l y   w i t h   A D C   i n   a   d i f f e r e n t   s t a t e   t h a n   d i s a b l e d ,  
     *                   r e f e r   t o   d e s c r i p t i o n   o f   e a c h   f u n c t i o n   f o r   s e t t i n g  
     *                   c o n d i t i o n e d   t o   A D C   s t a t e .  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   T r i g g e r S o u r c e ;                               / * ! <   S e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   s o u r c e :   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,   e x t e r n a l   i n t e r r u p t   l i n e ) .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ I N J _ T R I G G E R _ S O U R C E  
                                                                                           @ n o t e   O n   t h i s   S T M 3 2   s e r i e ,   e x t e r n a l   t r i g g e r   i s   s e t   w i t h   t r i g g e r   p o l a r i t y :   r i s i n g   e d g e  
                                                                                                       ( o n l y   t r i g g e r   p o l a r i t y   a v a i l a b l e   o n   t h i s   S T M 3 2   s e r i e ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t T r i g g e r S o u r c e ( ) .   * /  
  
     u i n t 3 2 _ t   S e q u e n c e r L e n g t h ;                           / * ! <   S e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   l e n g t h .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ I N J _ S E Q _ S C A N _ L E N G T H  
                                                                                           @ n o t e   T h i s   p a r a m e t e r   i s   d i s c a r d e d   i f   s c a n   m o d e   i s   d i s a b l e d   ( r e f e r   t o   p a r a m e t e r   ' A D C _ S e q u e n c e r s S c a n M o d e ' ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t S e q u e n c e r L e n g t h ( ) .   * /  
  
     u i n t 3 2 _ t   S e q u e n c e r D i s c o n t ;                         / * ! <   S e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d   n u m b e r   o f   r a n k s .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ I N J _ S E Q _ D I S C O N T _ M O D E  
                                                                                           @ n o t e   T h i s   p a r a m e t e r   h a s   a n   e f f e c t   o n l y   i f   g r o u p   i n j e c t e d   s e q u e n c e r   i s   e n a b l e d  
                                                                                                       ( s c a n   l e n g t h   o f   2   r a n k s   o r   m o r e ) .  
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t S e q u e n c e r D i s c o n t ( ) .   * /  
  
     u i n t 3 2 _ t   T r i g A u t o ;                                         / * ! <   S e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r :   i n d e p e n d e n t   o r   f r o m   A D C   g r o u p   r e g u l a r .  
                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   A D C _ L L _ E C _ I N J _ T R I G _ A U T O  
                                                                                           N o t e :   T h i s   p a r a m e t e r   m u s t   b e   s e t   t o   s e t   t o   i n d e p e n d e n t   t r i g g e r   i f   i n j e c t e d   t r i g g e r   s o u r c e   i s   s e t   t o   a n   e x t e r n a l   t r i g g e r .    
                                                                                            
                                                                                           T h i s   f e a t u r e   c a n   b e   m o d i f i e d   a f t e r w a r d s   u s i n g   u n i t a r y   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t T r i g A u t o ( ) .   * /  
  
 }   L L _ A D C _ I N J _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ L L _ E x p o r t e d _ C o n s t a n t s   A D C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ F L A G   A D C   f l a g s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ A D C _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ F L A G _ S T R T                                       A D C _ S R _ S T R T                 / * ! <   A D C   f l a g   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   s t a r t   * /  
 # d e f i n e   L L _ A D C _ F L A G _ E O S                                         A D C _ S R _ E O C                   / * ! <   A D C   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ J S T R T                                     A D C _ S R _ J S T R T               / * ! <   A D C   f l a g   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   s t a r t   * /  
 # d e f i n e   L L _ A D C _ F L A G _ J E O S                                       A D C _ S R _ J E O C                 / * ! <   A D C   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ A W D 1                                       A D C _ S R _ A W D                   / * ! <   A D C   f l a g   A D C   a n a l o g   w a t c h d o g   1   * /  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 # d e f i n e   L L _ A D C _ F L A G _ E O S _ M S T                                 A D C _ S R _ E O C                   / * ! <   A D C   f l a g   A D C   m u l t i m o d e   m a s t e r   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ E O S _ S L V                                 A D C _ S R _ E O C                   / * ! <   A D C   f l a g   A D C   m u l t i m o d e   s l a v e   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   ( o n   S T M 3 2 F 1 ,   t h i s   f l a g   m u s t   b e   r e a d   f r o m   A D C   i n s t a n c e   s l a v e :   A D C 2 )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ J E O S _ M S T                               A D C _ S R _ J E O C                 / * ! <   A D C   f l a g   A D C   m u l t i m o d e   m a s t e r   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ J E O S _ S L V                               A D C _ S R _ J E O C                 / * ! <   A D C   f l a g   A D C   m u l t i m o d e   s l a v e   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   ( o n   S T M 3 2 F 1 ,   t h i s   f l a g   m u s t   b e   r e a d   f r o m   A D C   i n s t a n c e   s l a v e :   A D C 2 )   * /  
 # d e f i n e   L L _ A D C _ F L A G _ A W D 1 _ M S T                               A D C _ S R _ A W D                   / * ! <   A D C   f l a g   A D C   m u l t i m o d e   m a s t e r   a n a l o g   w a t c h d o g   1   o f   t h e   A D C   m a s t e r   * /  
 # d e f i n e   L L _ A D C _ F L A G _ A W D 1 _ S L V                               A D C _ S R _ A W D                   / * ! <   A D C   f l a g   A D C   m u l t i m o d e   s l a v e   a n a l o g   w a t c h d o g   1   o f   t h e   A D C   s l a v e   ( o n   S T M 3 2 F 1 ,   t h i s   f l a g   m u s t   b e   r e a d   f r o m   A D C   i n s t a n c e   s l a v e :   A D C 2 )   * /  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I T   A D C   i n t e r r u p t i o n s   f o r   c o n f i g u r a t i o n   ( i n t e r r u p t i o n   e n a b l e   o r   d i s a b l e )  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ A D C _ R e a d R e g   a n d     L L _ A D C _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ I T _ E O S                                             A D C _ C R 1 _ E O C I E             / * ! <   A D C   i n t e r r u p t i o n   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ I T _ J E O S                                           A D C _ C R 1 _ J E O C I E           / * ! <   A D C   i n t e r r u p t i o n   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   ( N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   u n i t a r y   c o n v e r s i o n .   F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "   i n   o t h e r   S T M 3 2   f a m i l i e s )   * /  
 # d e f i n e   L L _ A D C _ I T _ A W D 1                                           A D C _ C R 1 _ A W D I E             / * ! <   A D C   i n t e r r u p t i o n   A D C   a n a l o g   w a t c h d o g   1   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G I S T E R S     A D C   r e g i s t e r s   c o m p l i a n t   w i t h   s p e c i f i c   p u r p o s e  
     *   @ {  
     * /  
 / *   L i s t   o f   A D C   r e g i s t e r s   i n t e n d e d   t o   b e   u s e d   ( m o s t   c o m m o n l y )   w i t h                           * /  
 / *   D M A   t r a n s f e r .                                                                                                                             * /  
 / *   R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ D M A _ G e t R e g A d d r ( ) .                                                         * /  
 # d e f i n e   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A                     0 x 0 0 0 0 0 0 0 0 U       / *   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a   r e g i s t e r   ( c o r r e s p o n d i n g   t o   r e g i s t e r   D R )   t o   b e   u s e d   w i t h   A D C   c o n f i g u r e d   i n   i n d e p e n d e n t   m o d e .   W i t h o u t   D M A   t r a n s f e r ,   r e g i s t e r   a c c e s s e d   b y   L L   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 3 2 ( )   a n d   o t h e r   f u n c t i o n s   @ r e f   L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a x ( )   * /  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 # d e f i n e   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A _ M U L T I         0 x 0 0 0 0 0 0 0 1 U       / *   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a   r e g i s t e r   ( c o r r e s p o n d i n g   t o   r e g i s t e r   C D R )   t o   b e   u s e d   w i t h   A D C   c o n f i g u r e d   i n   m u l t i m o d e   ( a v a i l a b l e   o n   S T M 3 2   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s ) .   W i t h o u t   D M A   t r a n s f e r ,   r e g i s t e r   a c c e s s e d   b y   L L   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ R e a d M u l t i C o n v e r s i o n D a t a 3 2 ( )   * /  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ C O M M O N _ P A T H _ I N T E R N A L     A D C   c o m m o n   -   M e a s u r e m e n t   p a t h   t o   i n t e r n a l   c h a n n e l s  
     *   @ {  
     * /  
 / *   N o t e :   O t h e r   m e a s u r e m e n t   p a t h s   t o   i n t e r n a l   c h a n n e l s   m a y   b e   a v a i l a b l e                 * /  
 / *               ( c o n n e c t i o n s   t o   o t h e r   p e r i p h e r a l s ) .                                                                     * /  
 / *               I f   t h e y   a r e   n o t   l i s t e d   b e l o w ,   t h e y   d o   n o t   r e q u i r e   a n y   s p e c i f i c               * /  
 / *               p a t h   e n a b l e .   I n   t h i s   c a s e ,   A c c e s s   t o   m e a s u r e m e n t   p a t h   i s   d o n e                 * /  
 / *               o n l y   b y   s e l e c t i n g   t h e   c o r r e s p o n d i n g   A D C   i n t e r n a l   c h a n n e l .                         * /  
 # d e f i n e   L L _ A D C _ P A T H _ I N T E R N A L _ N O N E                     0 x 0 0 0 0 0 0 0 0 U                         / * ! <   A D C   m e a s u r e m e n t   p a t h e s   a l l   d i s a b l e d   * /  
 # d e f i n e   L L _ A D C _ P A T H _ I N T E R N A L _ V R E F I N T               ( A D C _ C R 2 _ T S V R E F E )             / * ! <   A D C   m e a s u r e m e n t   p a t h   t o   i n t e r n a l   c h a n n e l   V r e f I n t   * /  
 # d e f i n e   L L _ A D C _ P A T H _ I N T E R N A L _ T E M P S E N S O R         ( A D C _ C R 2 _ T S V R E F E )             / * ! <   A D C   m e a s u r e m e n t   p a t h   t o   i n t e r n a l   c h a n n e l   t e m p e r a t u r e   s e n s o r   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E S O L U T I O N     A D C   i n s t a n c e   -   R e s o l u t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E S O L U T I O N _ 1 2 B                             0 x 0 0 0 0 0 0 0 0 U                                                   / * ! <   A D C   r e s o l u t i o n   1 2   b i t s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ D A T A _ A L I G N     A D C   i n s t a n c e   -   D a t a   a l i g n m e n t  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ D A T A _ A L I G N _ R I G H T                         0 x 0 0 0 0 0 0 0 0 U                         / * ! <   A D C   c o n v e r s i o n   d a t a   a l i g n m e n t :   r i g h t   a l i g n e d   ( a l i g n m e n t   o n   d a t a   r e g i s t e r   L S B   b i t   0 ) * /  
 # d e f i n e   L L _ A D C _ D A T A _ A L I G N _ L E F T                           ( A D C _ C R 2 _ A L I G N )                 / * ! <   A D C   c o n v e r s i o n   d a t a   a l i g n m e n t :   l e f t   a l i g n e d   ( a l i g m e n t   o n   d a t a   r e g i s t e r   M S B   b i t   1 5 ) * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ S C A N _ S E L E C T I O N   A D C   i n s t a n c e   -   S c a n   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ S E Q _ S C A N _ D I S A B L E                         0 x 0 0 0 0 0 0 0 0 U         / * ! <   A D C   c o n v e r s i o n   i s   p e r f o r m e d   i n   u n i t a r y   c o n v e r s i o n   m o d e   ( o n e   c h a n n e l   c o n v e r t e d ,   t h a t   d e f i n e d   i n   r a n k   1 ) .   C o n f i g u r a t i o n   o f   b o t h   g r o u p s   r e g u l a r   a n d   i n j e c t e d   s e q u e n c e r s   ( s e q u e n c e   l e n g t h ,   . . . )   i s   d i s c a r d e d :   e q u i v a l e n t   t o   l e n g t h   o f   1   r a n k . * /  
 # d e f i n e   L L _ A D C _ S E Q _ S C A N _ E N A B L E                           ( A D C _ C R 1 _ S C A N )   / * ! <   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   s e q u e n c e   c o n v e r s i o n s   m o d e ,   a c c o r d i n g   t o   c o n f i g u r a t i o n   o f   b o t h   g r o u p s   r e g u l a r   a n d   i n j e c t e d   s e q u e n c e r s   ( s e q u e n c e   l e n g t h ,   . . . ) .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ G R O U P S     A D C   i n s t a n c e   -   G r o u p s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ G R O U P _ R E G U L A R                               0 x 0 0 0 0 0 0 0 1 U       / * ! <   A D C   g r o u p   r e g u l a r   ( a v a i l a b l e   o n   a l l   S T M 3 2   d e v i c e s )   * /  
 # d e f i n e   L L _ A D C _ G R O U P _ I N J E C T E D                             0 x 0 0 0 0 0 0 0 2 U       / * ! <   A D C   g r o u p   i n j e c t e d   ( n o t   a v a i l a b l e   o n   a l l   S T M 3 2   d e v i c e s ) * /  
 # d e f i n e   L L _ A D C _ G R O U P _ R E G U L A R _ I N J E C T E D             0 x 0 0 0 0 0 0 0 3 U       / * ! <   A D C   b o t h   g r o u p s   r e g u l a r   a n d   i n j e c t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ C H A N N E L     A D C   i n s t a n c e   -   C h a n n e l   n u m b e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 0                                       ( A D C _ C H A N N E L _ 0 _ N U M B E R     |   A D C _ C H A N N E L _ 0 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 0     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1                                       ( A D C _ C H A N N E L _ 1 _ N U M B E R     |   A D C _ C H A N N E L _ 1 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 2                                       ( A D C _ C H A N N E L _ 2 _ N U M B E R     |   A D C _ C H A N N E L _ 2 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 2     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 3                                       ( A D C _ C H A N N E L _ 3 _ N U M B E R     |   A D C _ C H A N N E L _ 3 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 3     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 4                                       ( A D C _ C H A N N E L _ 4 _ N U M B E R     |   A D C _ C H A N N E L _ 4 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 4     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 5                                       ( A D C _ C H A N N E L _ 5 _ N U M B E R     |   A D C _ C H A N N E L _ 5 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 5     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 6                                       ( A D C _ C H A N N E L _ 6 _ N U M B E R     |   A D C _ C H A N N E L _ 6 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 6     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 7                                       ( A D C _ C H A N N E L _ 7 _ N U M B E R     |   A D C _ C H A N N E L _ 7 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 7     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 8                                       ( A D C _ C H A N N E L _ 8 _ N U M B E R     |   A D C _ C H A N N E L _ 8 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 8     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 9                                       ( A D C _ C H A N N E L _ 9 _ N U M B E R     |   A D C _ C H A N N E L _ 9 _ S M P )     / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 9     * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 0                                     ( A D C _ C H A N N E L _ 1 0 _ N U M B E R   |   A D C _ C H A N N E L _ 1 0 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 0   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 1                                     ( A D C _ C H A N N E L _ 1 1 _ N U M B E R   |   A D C _ C H A N N E L _ 1 1 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 1   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 2                                     ( A D C _ C H A N N E L _ 1 2 _ N U M B E R   |   A D C _ C H A N N E L _ 1 2 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 2   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 3                                     ( A D C _ C H A N N E L _ 1 3 _ N U M B E R   |   A D C _ C H A N N E L _ 1 3 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 3   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 4                                     ( A D C _ C H A N N E L _ 1 4 _ N U M B E R   |   A D C _ C H A N N E L _ 1 4 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 4   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 5                                     ( A D C _ C H A N N E L _ 1 5 _ N U M B E R   |   A D C _ C H A N N E L _ 1 5 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 5   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 6                                     ( A D C _ C H A N N E L _ 1 6 _ N U M B E R   |   A D C _ C H A N N E L _ 1 6 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 6   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ 1 7                                     ( A D C _ C H A N N E L _ 1 7 _ N U M B E R   |   A D C _ C H A N N E L _ 1 7 _ S M P )   / * ! <   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 7   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ V R E F I N T                           ( L L _ A D C _ C H A N N E L _ 1 7   |   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H )   / * ! <   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   V r e f I n t :   I n t e r n a l   v o l t a g e   r e f e r e n c e .   O n   S T M 3 2 F 1 ,   A D C   c h a n n e l   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .   * /  
 # d e f i n e   L L _ A D C _ C H A N N E L _ T E M P S E N S O R                     ( L L _ A D C _ C H A N N E L _ 1 6   |   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H )   / * ! <   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   T e m p e r a t u r e   s e n s o r .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ T R I G G E R _ S O U R C E     A D C   g r o u p   r e g u l a r   -   T r i g g e r   s o u r c e  
     *   @ {  
     * /  
 / *   A D C   g r o u p   r e g u l a r   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ S O F T W A R E                       ( A D C _ C R 2 _ E X T S E L _ 2   |   A D C _ C R 2 _ E X T S E L _ 1   |   A D C _ C R 2 _ E X T S E L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   i n t e r n a l :   S W   s t a r t .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 3               ( A D C _ C R 2 _ E X T S E L _ 1 )                                                                               / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 1   c h a n n e l   3   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 / *   A D C   g r o u p   r e g u l a r   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 1               0 x 0 0 0 0 0 0 0 0 U                                                                                             / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 1   c h a n n e l   1   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 2               ( A D C _ C R 2 _ E X T S E L _ 0 )                                                                               / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 1   c h a n n e l   2   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 2               ( A D C _ C R 2 _ E X T S E L _ 1   |   A D C _ C R 2 _ E X T S E L _ 0 )                                         / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 2   c h a n n e l   2   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ T R G O             ( A D C _ C R 2 _ E X T S E L _ 2 )                                                                               / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 3   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 4 _ C H 4               ( A D C _ C R 2 _ E X T S E L _ 2   |   A D C _ C R 2 _ E X T S E L _ 0 )                                         / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 4   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ E X T I _ L I N E 1 1         ( A D C _ C R 2 _ E X T S E L _ 2   |   A D C _ C R 2 _ E X T S E L _ 1 )                                         / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   e x t e r n a l   i n t e r r u p t   l i n e   1 1 .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 / *   N o t e :   T I M 8 _ T R G O   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d           * /  
 / *               X L - d e n s i t y   d e v i c e s .                                                                                                     * /  
 / *   N o t e :   T o   u s e   T I M 8 _ T R G O   o n   A D C 1   o r   A D C 2 ,   a   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e         * /  
 / *               A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o                               * /  
 / *               A F I O   p e r i p h e r a l ) .                                                                                                         * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O             ( L L _ A D C _ R E G _ T R I G _ E X T _ E X T I _ L I N E 1 1 )                                                 / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   A v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) . * /  
 # e n d i f   / *   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   A D C   g r o u p   r e g u l a r   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ C H 1               ( L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 1 )                                                       / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 3   c h a n n e l   1   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 3               ( L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 2 )                                                       / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 2   c h a n n e l   3   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ C H 1               ( L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 2 )                                                       / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   c h a n n e l   1   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O _ A D C 3   ( L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ T R G O )                                                     / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 1               ( L L _ A D C _ R E G _ T R I G _ E X T _ T I M 4 _ C H 4 )                                                       / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 5   c h a n n e l   1   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 3               ( L L _ A D C _ R E G _ T R I G _ E X T _ E X T I _ L I N E 1 1 )                                                 / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 5   c h a n n e l   3   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ T R I G G E R _ E D G E     A D C   g r o u p   r e g u l a r   -   T r i g g e r   e d g e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E G _ T R I G _ E X T _ R I S I N G                   A D C _ C R 2 _ E X T T R I G                                                   / * ! <   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   p o l a r i t y   s e t   t o   r i s i n g   e d g e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ C O N T I N U O U S _ M O D E     A D C   g r o u p   r e g u l a r   -   C o n t i n u o u s   m o d e  
 *   @ {  
 * /  
 # d e f i n e   L L _ A D C _ R E G _ C O N V _ S I N G L E                           0 x 0 0 0 0 0 0 0 0 U                           / * ! <   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   s i n g l e   m o d e :   o n e   c o n v e r s i o n   p e r   t r i g g e r   * /  
 # d e f i n e   L L _ A D C _ R E G _ C O N V _ C O N T I N U O U S                   ( A D C _ C R 2 _ C O N T )                     / * ! <   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   c o n t i n u o u s   m o d e :   a f t e r   t h e   f i r s t   t r i g g e r ,   f o l l o w i n g   c o n v e r s i o n s   l a u n c h e d   s u c c e s s i v e l y   a u t o m a t i c a l l y   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ D M A _ T R A N S F E R     A D C   g r o u p   r e g u l a r   -   D M A   t r a n s f e r   o f   A D C   c o n v e r s i o n   d a t a  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ N O N E               0 x 0 0 0 0 0 0 0 0 U                             / * ! <   A D C   c o n v e r s i o n s   a r e   n o t   t r a n s f e r r e d   b y   D M A   * /  
 # d e f i n e   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ U N L I M I T E D     ( A D C _ C R 2 _ D M A )                                                 / * ! <   A D C   c o n v e r s i o n   d a t a   a r e   t r a n s f e r r e d   b y   D M A ,   i n   u n l i m i t e d   m o d e :   D M A   t r a n s f e r   r e q u e s t s   a r e   u n l i m i t e d ,   w h a t e v e r   n u m b e r   o f   D M A   d a t a   t r a n s f e r r e d   ( n u m b e r   o f   A D C   c o n v e r s i o n s ) .   T h i s   A D C   m o d e   i s   i n t e n d e d   t o   b e   u s e d   w i t h   D M A   m o d e   c i r c u l a r .   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ S E Q _ S C A N _ L E N G T H     A D C   g r o u p   r e g u l a r   -   S e q u e n c e r   s c a n   l e n g t h  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U                                                                                                   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s a b l e   ( e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l )   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S     (                                                                                           A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   2   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S     (                                                             A D C _ S Q R 1 _ L _ 1                               )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   3   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S     (                                                             A D C _ S Q R 1 _ L _ 1   |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   4   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 5 R A N K S     (                               A D C _ S Q R 1 _ L _ 2                                                             )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   5   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 6 R A N K S     (                               A D C _ S Q R 1 _ L _ 2                                 |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   6   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 7 R A N K S     (                               A D C _ S Q R 1 _ L _ 2   |   A D C _ S Q R 1 _ L _ 1                               )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   7   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 8 R A N K S     (                               A D C _ S Q R 1 _ L _ 2   |   A D C _ S Q R 1 _ L _ 1   |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   8   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 9 R A N K S     ( A D C _ S Q R 1 _ L _ 3                                                                                           )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   9   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 0 R A N K S   ( A D C _ S Q R 1 _ L _ 3                                                               |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 0   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 1 R A N K S   ( A D C _ S Q R 1 _ L _ 3                                 |   A D C _ S Q R 1 _ L _ 1                               )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 1   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 2 R A N K S   ( A D C _ S Q R 1 _ L _ 3                                 |   A D C _ S Q R 1 _ L _ 1   |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 2   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 3 R A N K S   ( A D C _ S Q R 1 _ L _ 3   |   A D C _ S Q R 1 _ L _ 2                                                             )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 3   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 4 R A N K S   ( A D C _ S Q R 1 _ L _ 3   |   A D C _ S Q R 1 _ L _ 2                                 |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 4   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 5 R A N K S   ( A D C _ S Q R 1 _ L _ 3   |   A D C _ S Q R 1 _ L _ 2   |   A D C _ S Q R 1 _ L _ 1                               )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 5   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 6 R A N K S   ( A D C _ S Q R 1 _ L _ 3   |   A D C _ S Q R 1 _ L _ 2   |   A D C _ S Q R 1 _ L _ 1   |   A D C _ S Q R 1 _ L _ 0 )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   e n a b l e   w i t h   1 6   r a n k s   i n   t h e   s e q u e n c e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ S E Q _ D I S C O N T _ M O D E     A D C   g r o u p   r e g u l a r   -   S e q u e n c e r   d i s c o n t i n u o u s   m o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ D I S A B L E           0 x 0 0 0 0 0 0 0 0 U                                                                                                                                     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   d i s a b l e   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 1 R A N K               (                                                                                                                         A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   r a n k   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 2 R A N K S             (                                                                                 A D C _ C R 1 _ D I S C N U M _ 0   |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e d   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   2   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 3 R A N K S             (                                         A D C _ C R 1 _ D I S C N U M _ 1                                           |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   3   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 4 R A N K S             (                                         A D C _ C R 1 _ D I S C N U M _ 1   |   A D C _ C R 1 _ D I S C N U M _ 0   |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   4   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 5 R A N K S             ( A D C _ C R 1 _ D I S C N U M _ 2                                                                                   |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   5   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 6 R A N K S             ( A D C _ C R 1 _ D I S C N U M _ 2                                           |   A D C _ C R 1 _ D I S C N U M _ 0   |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   6   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 7 R A N K S             ( A D C _ C R 1 _ D I S C N U M _ 2   |   A D C _ C R 1 _ D I S C N U M _ 1                                           |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   7   r a n k s   * /  
 # d e f i n e   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 8 R A N K S             ( A D C _ C R 1 _ D I S C N U M _ 2   |   A D C _ C R 1 _ D I S C N U M _ 1   |   A D C _ C R 1 _ D I S C N U M _ 0   |   A D C _ C R 1 _ D I S C E N )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   8   r a n k s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ R E G _ S E Q _ R A N K S     A D C   g r o u p   r e g u l a r   -   S e q u e n c e r   r a n k s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 2                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 2 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   2   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 3                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 3 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   3   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 4                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 4 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   4   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 5                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 5 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   5   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 6                                     ( A D C _ S Q R 3 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 6 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   6   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 7                                     ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 7 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   7   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 8                                     ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 8 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   8   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 9                                     ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 9 _ S Q R X _ B I T O F F S E T _ P O S )     / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   9   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 0                                   ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 0 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 0   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 1                                   ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 1 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 1   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 2                                   ( A D C _ S Q R 2 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 2 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 2   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 3                                   ( A D C _ S Q R 1 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 3 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 3   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 4                                   ( A D C _ S Q R 1 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 4 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 4   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 5                                   ( A D C _ S Q R 1 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 5 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 5   * /  
 # d e f i n e   L L _ A D C _ R E G _ R A N K _ 1 6                                   ( A D C _ S Q R 1 _ R E G O F F S E T   |   A D C _ R E G _ R A N K _ 1 6 _ S Q R X _ B I T O F F S E T _ P O S )   / * ! <   A D C   g r o u p   r e g u l a r   s e q u e n c e r   r a n k   1 6   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ T R I G G E R _ S O U R C E     A D C   g r o u p   i n j e c t e d   -   T r i g g e r   s o u r c e  
     *   @ {  
     * /  
 / *   A D C   g r o u p   i n j e c t e d   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ S O F T W A R E                       ( A D C _ C R 2 _ J E X T S E L _ 2   |   A D C _ C R 2 _ J E X T S E L _ 1   |   A D C _ C R 2 _ J E X T S E L _ 0 )   / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   i n t e r n a l :   S W   s t a r t .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ T R G O             0 x 0 0 0 0 0 0 0 0 U                                                                                                   / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 1   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ C H 4               ( A D C _ C R 2 _ J E X T S E L _ 0 )                                                                                   / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 1   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 / *   A D C   g r o u p   i n j e c t e d   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ T R G O             ( A D C _ C R 2 _ J E X T S E L _ 1 )                                                                                   / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 2   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ C H 1               ( A D C _ C R 2 _ J E X T S E L _ 1   |   A D C _ C R 2 _ J E X T S E L _ 0 )                                           / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 2   c h a n n e l   1   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 3 _ C H 4               ( A D C _ C R 2 _ J E X T S E L _ 2 )                                                                                   / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 3   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ T R G O             ( A D C _ C R 2 _ J E X T S E L _ 2   |   A D C _ C R 2 _ J E X T S E L _ 0 )                                           / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 4   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ E X T I _ L I N E 1 5         ( A D C _ C R 2 _ J E X T S E L _ 2   |   A D C _ C R 2 _ J E X T S E L _ 1 )                                           / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   e x t e r n a l   i n t e r r u p t   l i n e   1 5 .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )   | |   d e f i n e d   ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d   ( S T M 3 2 F 1 0 7 x C )  
 / *   N o t e :   T I M 8 _ C H 4   i s   a v a i l a b l e   o n   A D C 1   a n d   A D C 2   o n l y   i n   h i g h - d e n s i t y   a n d             * /  
 / *               X L - d e n s i t y   d e v i c e s .                                                                                                     * /  
 / *   N o t e :   T o   u s e   T I M 8 _ T R G O   o n   A D C 1   o r   A D C 2 ,   a   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e         * /  
 / *               A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o                               * /  
 / *               A F I O   p e r i p h e r a l ) .                                                                                                         * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4                 ( L L _ A D C _ I N J _ T R I G _ E X T _ E X T I _ L I N E 1 5 )                                                     / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   A v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) .   * /  
 # e n d i f   / *   S T M 3 2 F 1 0 1 x E   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * /  
 # i f   d e f i n e d   ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d   ( S T M 3 2 F 1 0 3 x G )  
 / *   A D C   g r o u p   i n j e c t e d   e x t e r n a l   t r i g g e r s   f o r   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ C H 3                 ( L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ T R G O )                                                         / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 4   c h a n n e l   3   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 2                 ( L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ C H 1 )                                                           / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   c h a n n e l   2   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4 _ A D C 3       ( L L _ A D C _ I N J _ T R I G _ E X T _ T I M 3 _ C H 4 )                                                           / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 8   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ T R G O               ( L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ T R G O )                                                         / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 5   T R G O .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ C H 4                 ( L L _ A D C _ I N J _ T R I G _ E X T _ E X T I _ L I N E 1 5 )                                                     / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   e x t e r n a l   I P :   T I M 5   c h a n n e l   4   e v e n t   ( c a p t u r e   c o m p a r e :   i n p u t   c a p t u r e   o r   o u t p u t   c a p t u r e ) .   T r i g g e r   e d g e   s e t   t o   r i s i n g   e d g e   ( d e f a u l t   s e t t i n g ) .   * /  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ T R I G G E R _ E D G E     A D C   g r o u p   i n j e c t e d   -   T r i g g e r   e d g e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ E X T _ R I S I N G                   A D C _ C R 2 _ J E X T T R I G                                                 / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   p o l a r i t y   s e t   t o   r i s i n g   e d g e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ T R I G _ A U T O     A D C   g r o u p   i n j e c t e d   -   A u t o m a t i c   t r i g g e r   m o d e  
 *   @ {  
 * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ I N D E P E N D E N T                 0 x 0 0 0 0 0 0 0 0 U                         / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   i n d e p e n d e n t .   S e t t i n g   m a n d a t o r y   i f   A D C   g r o u p   i n j e c t e d   i n j e c t e d   t r i g g e r   s o u r c e   i s   s e t   t o   a n   e x t e r n a l   t r i g g e r .   * /  
 # d e f i n e   L L _ A D C _ I N J _ T R I G _ F R O M _ G R P _ R E G U L A R       ( A D C _ C R 1 _ J A U T O )                 / * ! <   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   f r o m   A D C   g r o u p   r e g u l a r .   S e t t i n g   c o m p l i a n t   o n l y   w i t h   g r o u p   i n j e c t e d   t r i g g e r   s o u r c e   s e t   t o   S W   s t a r t ,   w i t h o u t   a n y   f u r t h e r   a c t i o n   o n     A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   s t a r t   o r   s t o p :   i n   t h i s   c a s e ,   A D C   g r o u p   i n j e c t e d   i s   c o n t r o l l e d   o n l y   f r o m   A D C   g r o u p   r e g u l a r .   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ S E Q _ S C A N _ L E N G T H     A D C   g r o u p   i n j e c t e d   -   S e q u e n c e r   s c a n   l e n g t h  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ S C A N _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U                                           / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s a b l e   ( e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l )   * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S     (                                 A D C _ J S Q R _ J L _ 0 )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   e n a b l e   w i t h   2   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S     ( A D C _ J S Q R _ J L _ 1                                 )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   e n a b l e   w i t h   3   r a n k s   i n   t h e   s e q u e n c e   * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S     ( A D C _ J S Q R _ J L _ 1   |   A D C _ J S Q R _ J L _ 0 )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   e n a b l e   w i t h   4   r a n k s   i n   t h e   s e q u e n c e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ S E Q _ D I S C O N T _ M O D E     A D C   g r o u p   i n j e c t e d   -   S e q u e n c e r   d i s c o n t i n u o u s   m o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ D I S A B L E           0 x 0 0 0 0 0 0 0 0 U                         / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   d i s a b l e   * /  
 # d e f i n e   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ 1 R A N K               ( A D C _ C R 1 _ J D I S C E N )             / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e   e n a b l e   w i t h   s e q u e n c e   i n t e r r u p t i o n   e v e r y   r a n k   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ I N J _ S E Q _ R A N K S     A D C   g r o u p   i n j e c t e d   -   S e q u e n c e r   r a n k s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ I N J _ R A N K _ 1                                     ( A D C _ J D R 1 _ R E G O F F S E T   |   A D C _ J O F R 1 _ R E G O F F S E T   |   0 x 0 0 0 0 0 0 0 1 U )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   r a n k   1   * /  
 # d e f i n e   L L _ A D C _ I N J _ R A N K _ 2                                     ( A D C _ J D R 2 _ R E G O F F S E T   |   A D C _ J O F R 2 _ R E G O F F S E T   |   0 x 0 0 0 0 0 0 0 2 U )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   r a n k   2   * /  
 # d e f i n e   L L _ A D C _ I N J _ R A N K _ 3                                     ( A D C _ J D R 3 _ R E G O F F S E T   |   A D C _ J O F R 3 _ R E G O F F S E T   |   0 x 0 0 0 0 0 0 0 3 U )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   r a n k   3   * /  
 # d e f i n e   L L _ A D C _ I N J _ R A N K _ 4                                     ( A D C _ J D R 4 _ R E G O F F S E T   |   A D C _ J O F R 4 _ R E G O F F S E T   |   0 x 0 0 0 0 0 0 0 4 U )   / * ! <   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   r a n k   4   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ C H A N N E L _ S A M P L I N G T I M E     C h a n n e l   -   S a m p l i n g   t i m e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 1 C Y C L E _ 5               0 x 0 0 0 0 0 0 0 0 U                                                                                             / * ! <   S a m p l i n g   t i m e   1 . 5   A D C   c l o c k   c y c l e   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 7 C Y C L E S _ 5             ( A D C _ S M P R 2 _ S M P 0 _ 0 )                                                                               / * ! <   S a m p l i n g   t i m e   7 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 1 3 C Y C L E S _ 5           ( A D C _ S M P R 2 _ S M P 0 _ 1 )                                                                               / * ! <   S a m p l i n g   t i m e   1 3 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 2 8 C Y C L E S _ 5           ( A D C _ S M P R 2 _ S M P 0 _ 1   |   A D C _ S M P R 2 _ S M P 0 _ 0 )                                         / * ! <   S a m p l i n g   t i m e   2 8 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 4 1 C Y C L E S _ 5           ( A D C _ S M P R 2 _ S M P 0 _ 2 )                                                                               / * ! <   S a m p l i n g   t i m e   4 1 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 5 5 C Y C L E S _ 5           ( A D C _ S M P R 2 _ S M P 0 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 0 )                                         / * ! <   S a m p l i n g   t i m e   5 5 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 7 1 C Y C L E S _ 5           ( A D C _ S M P R 2 _ S M P 0 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 1 )                                         / * ! <   S a m p l i n g   t i m e   7 1 . 5   A D C   c l o c k   c y c l e s   * /  
 # d e f i n e   L L _ A D C _ S A M P L I N G T I M E _ 2 3 9 C Y C L E S _ 5         ( A D C _ S M P R 2 _ S M P 0 _ 2   |   A D C _ S M P R 2 _ S M P 0 _ 1   |   A D C _ S M P R 2 _ S M P 0 _ 0 )   / * ! <   S a m p l i n g   t i m e   2 3 9 . 5   A D C   c l o c k   c y c l e s   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ A W D _ N U M B E R   A n a l o g   w a t c h d o g   -   A n a l o g   w a t c h d o g   n u m b e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ A W D 1                                                 ( A D C _ A W D _ C R 1 _ C H A N N E L _ M A S K     |   A D C _ A W D _ C R 1 _ R E G O F F S E T )   / * ! <   A D C   a n a l o g   w a t c h d o g   n u m b e r   1   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ A W D _ C H A N N E L S     A n a l o g   w a t c h d o g   -   M o n i t o r e d   c h a n n e l s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ A W D _ D I S A B L E                                   0 x 0 0 0 0 0 0 0 0 U                                                                                                                                                                       / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   d i s a b l e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G                 (                                                                                                                           A D C _ C R 1 _ A W D E N                                   )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   a l l   c h a n n e l s ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ I N J                 (                                                                                         A D C _ C R 1 _ J A W D E N                                                                   )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   a l l   c h a n n e l s ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G _ I N J         (                                                                                         A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N                                   )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   a l l   c h a n n e l s ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 0     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 0 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 0 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 0     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 0 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 0     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 0 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 1     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 1     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 1     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 2     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 2 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 2 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 2     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 2 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 2     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 2 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 3     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 3 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 3 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 3     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 3 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 3     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 3 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 4     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 4 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 4 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 4     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 4 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 4     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 4 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 5     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 5 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 5 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 5     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 5 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 5     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 5 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 6     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 6 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 6 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 6     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 6 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 6     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 6 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 7     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 7 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 7 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 7     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 7 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 7     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 7 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 8     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 8 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 8 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 8     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 8 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 8     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 8 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G                       ( ( L L _ A D C _ C H A N N E L _ 9     &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 9 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 9 _ I N J                       ( ( L L _ A D C _ C H A N N E L _ 9     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 9 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G _ I N J               ( ( L L _ A D C _ C H A N N E L _ 9     &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 9 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 0   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 0 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 0   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 0 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 0   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 0 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 1   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 1 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 1   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 1 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 1   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 1 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 2   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 2 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 2   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 2 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 2   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 2 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 3   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 3 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 3   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 3 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 3   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 3 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 4   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 4 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 4   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 4 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 4   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 4 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 5   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 5 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 5   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 5 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 5   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 5 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 6   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 6 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 6   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 6 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 6   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 6 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G                     ( ( L L _ A D C _ C H A N N E L _ 1 7   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 7 ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ I N J                     ( ( L L _ A D C _ C H A N N E L _ 1 7   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 7 ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ 1 7   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   G P I O   p i n )   A D C x _ I N 1 7 ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G                     ( ( L L _ A D C _ C H A N N E L _ V R E F I N T         &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   V r e f I n t :   I n t e r n a l   v o l t a g e   r e f e r e n c e ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ V R E F I N T _ I N J                     ( ( L L _ A D C _ C H A N N E L _ V R E F I N T         &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   V r e f I n t :   I n t e r n a l   v o l t a g e   r e f e r e n c e ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G _ I N J             ( ( L L _ A D C _ C H A N N E L _ V R E F I N T         &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   V r e f I n t :   I n t e r n a l   v o l t a g e   r e f e r e n c e ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G               ( ( L L _ A D C _ C H A N N E L _ T E M P S E N S O R   &   A D C _ C H A N N E L _ I D _ M A S K )                                     |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   T e m p e r a t u r e   s e n s o r ,   c o n v e r t e d   b y   g r o u p   r e g u l a r   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ I N J               ( ( L L _ A D C _ C H A N N E L _ T E M P S E N S O R   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N                                   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   T e m p e r a t u r e   s e n s o r ,   c o n v e r t e d   b y   g r o u p   i n j e c t e d   o n l y   * /  
 # d e f i n e   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G _ I N J       ( ( L L _ A D C _ C H A N N E L _ T E M P S E N S O R   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )   / * ! <   A D C   a n a l o g   w a t c h d o g   m o n i t o r i n g   o f   A D C   i n t e r n a l   c h a n n e l   c o n n e c t e d   t o   T e m p e r a t u r e   s e n s o r ,   c o n v e r t e d   b y   e i t h e r   g r o u p   r e g u l a r   o r   i n j e c t e d   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ A W D _ T H R E S H O L D S     A n a l o g   w a t c h d o g   -   T h r e s h o l d s  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ A W D _ T H R E S H O L D _ H I G H                     ( A D C _ A W D _ T R 1 _ H I G H _ R E G O F F S E T )   / * ! <   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   h i g h   * /  
 # d e f i n e   L L _ A D C _ A W D _ T H R E S H O L D _ L O W                       ( A D C _ A W D _ T R 1 _ L O W _ R E G O F F S E T )     / * ! <   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   l o w   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   ! d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ M U L T I _ M O D E   M u l t i m o d e   -   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ M U L T I _ I N D E P E N D E N T                             0 x 0 0 0 0 0 0 0 0 U                                                                                                                   / * ! <   A D C   d u a l   m o d e   d i s a b l e d   ( A D C   i n d e p e n d e n t   m o d e )   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ M U L T I _ M O D E     M u l t i m o d e   -   M o d e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ M U L T I _ I N D E P E N D E N T                             0 x 0 0 0 0 0 0 0 0 U                                                                                                                                           / * ! <   A D C   d u a l   m o d e   d i s a b l e d   ( A D C   i n d e p e n d e n t   m o d e )   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M U L T                     (                                         A D C _ C R 1 _ D U A L M O D _ 2   |   A D C _ C R 1 _ D U A L M O D _ 1                                         )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   g r o u p   r e g u l a r   s i m u l t a n e o u s   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ F A S T           (                                         A D C _ C R 1 _ D U A L M O D _ 2   |   A D C _ C R 1 _ D U A L M O D _ 1   |   A D C _ C R 1 _ D U A L M O D _ 0 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   i n t e r l e a v e d   f a s t   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   7   A D C   c l o c k   c y c l e s )   ( e q u i v a l e n t   t o   m u l t i m o d e   s a m p l i n g   d e l a y   s e t   t o   " L L _ A D C _ M U L T I _ T W O S M P _ D E L A Y _ 7 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ S L O W           ( A D C _ C R 1 _ D U A L M O D _ 3                                                                                                                         )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   i n t e r l e a v e d   s l o w   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   1 4   A D C   c l o c k   c y c l e s )   ( e q u i v a l e n t   t o   m u l t i m o d e   s a m p l i n g   d e l a y   s e t   t o   " L L _ A D C _ M U L T I _ T W O S M P _ D E L A Y _ 1 4 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ I N J _ S I M U L T                     (                                         A D C _ C R 1 _ D U A L M O D _ 2                                           |   A D C _ C R 1 _ D U A L M O D _ 0 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   g r o u p   i n j e c t e d   s i m u l t a n e o u s   s l o w   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   1 4   A D C   c l o c k   c y c l e s )   ( e q u i v a l e n t   t o   m u l t i m o d e   s a m p l i n g   d e l a y   s e t   t o   " L L _ A D C _ M U L T I _ T W O S M P _ D E L A Y _ 1 4 C Y C L E S "   o n   o t h e r   S T M 3 2   d e v i c e s ) )   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ I N J _ A L T E R N                     ( A D C _ C R 1 _ D U A L M O D _ 3                                                                                   |   A D C _ C R 1 _ D U A L M O D _ 0 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   g r o u p   i n j e c t e d   a l t e r n a t e   t r i g g e r .   W o r k s   o n l y   w i t h   e x t e r n a l   t r i g g e r s   ( n o t   i n t e r n a l   S W   s t a r t )   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ S I M           (                                                                                                                         A D C _ C R 1 _ D U A L M O D _ 0 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   s i m u l t a n e o u s   +   g r o u p   i n j e c t e d   s i m u l t a n e o u s   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ A L T           (                                                                                 A D C _ C R 1 _ D U A L M O D _ 1                                         )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   s i m u l t a n e o u s   +   g r o u p   i n j e c t e d   a l t e r n a t e   t r i g g e r   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T F A S T _ I N J _ S I M   (                                                                                 A D C _ C R 1 _ D U A L M O D _ 1   |   A D C _ C R 1 _ D U A L M O D _ 0 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   i n t e r l e a v e d   f a s t   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   7   A D C   c l o c k   c y c l e s )   +   g r o u p   i n j e c t e d   s i m u l t a n e o u s   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T S L O W _ I N J _ S I M   (                                         A D C _ C R 1 _ D U A L M O D _ 2                                                                                 )   / * ! <   A D C   d u a l   m o d e   e n a b l e d :   C o m b i n e d   g r o u p   r e g u l a r   i n t e r l e a v e d   s l o w   ( d e l a y   b e t w e e n   A D C   s a m p l i n g   p h a s e s :   1 4   A D C   c l o c k   c y c l e s )   +   g r o u p   i n j e c t e d   s i m u l t a n e o u s   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ M U L T I _ M A S T E R _ S L A V E     M u l t i m o d e   -   A D C   m a s t e r   o r   s l a v e  
     *   @ {  
     * /  
 # d e f i n e   L L _ A D C _ M U L T I _ M A S T E R                                 (                                     A D C _ D R _ D A T A )   / * ! <   I n   m u l t i m o d e ,   s e l e c t i o n   a m o n g   s e v e r a l   A D C   i n s t a n c e s :   A D C   m a s t e r   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ S L A V E                                   ( A D C _ D R _ A D C 2 D A T A                             )   / * ! <   I n   m u l t i m o d e ,   s e l e c t i o n   a m o n g   s e v e r a l   A D C   i n s t a n c e s :   A D C   s l a v e   * /  
 # d e f i n e   L L _ A D C _ M U L T I _ M A S T E R _ S L A V E                     ( A D C _ D R _ A D C 2 D A T A   |   A D C _ D R _ D A T A )   / * ! <   I n   m u l t i m o d e ,   s e l e c t i o n   a m o n g   s e v e r a l   A D C   i n s t a n c e s :   b o t h   A D C   m a s t e r   a n d   A D C   s l a v e   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   A D C _ M U L T I M O D E _ S U P P O R T   * /  
  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E C _ H W _ D E L A Y S     D e f i n i t i o n s   o f   A D C   h a r d w a r e   c o n s t r a i n t s   d e l a y s  
     *   @ n o t e       O n l y   A D C   I P   H W   d e l a y s   a r e   d e f i n e d   i n   A D C   L L   d r i v e r   d r i v e r ,  
     *                   n o t   t i m e o u t   v a l u e s .  
     *                   F o r   d e t a i l s   o n   d e l a y s   v a l u e s ,   r e f e r   t o   d e s c r i p t i o n s   i n   s o u r c e   c o d e  
     *                   a b o v e   e a c h   l i t e r a l   d e f i n i t i o n .  
     *   @ {  
     * /  
      
 / *   N o t e :   O n l y   A D C   I P   H W   d e l a y s   a r e   d e f i n e d   i n   A D C   L L   d r i v e r   d r i v e r ,                       * /  
 / *               n o t   t i m e o u t   v a l u e s .                                                                                                     * /  
 / *               T i m e o u t   v a l u e s   f o r   A D C   o p e r a t i o n s   a r e   d e p e n d e n t   t o   d e v i c e   c l o c k             * /  
 / *               c o n f i g u r a t i o n   ( s y s t e m   c l o c k   v e r s u s   A D C   c l o c k ) ,                                               * /  
 / *               a n d   t h e r e f o r e   m u s t   b e   d e f i n e d   i n   u s e r   a p p l i c a t i o n .                                       * /  
 / *               I n d i c a t i o n s   f o r   e s t i m a t i o n   o f   A D C   t i m e o u t   d e l a y s ,   f o r   t h i s                       * /  
 / *               S T M 3 2   s e r i e :                                                                                                                   * /  
 / *               -   A D C   e n a b l e   t i m e :   m a x i m u m   d e l a y   i s   1 u s                                                             * /  
 / *                   ( r e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   " t S T A B " )                                           * /  
 / *               -   A D C   c o n v e r s i o n   t i m e :   d u r a t i o n   d e p e n d i n g   o n   A D C   c l o c k   a n d   A D C               * /  
 / *                   c o n f i g u r a t i o n .                                                                                                           * /  
 / *                   ( r e f e r   t o   d e v i c e   r e f e r e n c e   m a n u a l ,   s e c t i o n   " T i m i n g " )                               * /  
  
 / *   D e l a y   f o r   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e .                                                       * /  
 / *   L i t e r a l   s e t   t o   m a x i m u m   v a l u e   ( r e f e r   t o   d e v i c e   d a t a s h e e t ,                                       * /  
 / *   p a r a m e t e r   " t S T A R T " ) .                                                                                                               * /  
 / *   U n i t :   u s                                                                                                                                       * /  
 # d e f i n e   L L _ A D C _ D E L A Y _ T E M P S E N S O R _ S T A B _ U S               ( 1 0 U )     / * ! <   D e l a y   f o r   i n t e r n a l   v o l t a g e   r e f e r e n c e   s t a b i l i z a t i o n   t i m e   * /  
  
 / *   D e l a y   r e q u i r e d   b e t w e e n   A D C   d i s a b l e   a n d   A D C   c a l i b r a t i o n   s t a r t .                             * /  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   b e f o r e   s t a r t i n g   a   c a l i b r a t i o n ,                                     * /  
 / *               A D C   m u s t   b e   d i s a b l e d .                                                                                                 * /  
 / *               A   m i n i m u m   n u m b e r   o f   A D C   c l o c k   c y c l e s   a r e   r e q u i r e d                                         * /  
 / *               b e t w e e n   A D C   d i s a b l e   s t a t e   a n d   c a l i b r a t i o n   s t a r t .                                           * /  
 / *               R e f e r   t o   l i t e r a l   @ r e f   L L _ A D C _ D E L A Y _ E N A B L E _ C A L I B _ A D C _ C Y C L E S .                     * /  
 / *               W a i t   t i m e   c a n   b e   c o m p u t e d   i n   u s e r   a p p l i c a t i o n   b y   w a i t i n g   f o r   t h e           * /  
 / *               e q u i v a l e n t   n u m b e r   o f   C P U   c y c l e s ,   b y   t a k i n g   i n t o   a c c o u n t                             * /  
 / *               r a t i o   o f   C P U   c l o c k   v e r s u s   A D C   c l o c k   p r e s c a l e r s .                                             * /  
 / *   U n i t :   A D C   c l o c k   c y c l e s .                                                                                                         * /  
 # d e f i n e   L L _ A D C _ D E L A Y _ D I S A B L E _ C A L I B _ A D C _ C Y C L E S     ( 2 U )     / * ! <   D e l a y   r e q u i r e d   b e t w e e n   A D C   d i s a b l e   a n d   A D C   c a l i b r a t i o n   s t a r t   * /  
  
 / *   D e l a y   r e q u i r e d   b e t w e e n   e n d   o f   A D C   E n a b l e   a n d   t h e   s t a r t   o f   A D C   c a l i b r a t i o n .   * /  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   a   m i n i m u m   n u m b e r   o f   A D C   c l o c k   c y c l e s                         * /  
 / *               a r e   r e q u i r e d   b e t w e e n   t h e   e n d   o f   A D C   e n a b l e   a n d   t h e   s t a r t   o f   A D C             * /  
 / *               c a l i b r a t i o n .                                                                                                                   * /  
 / *               W a i t   t i m e   c a n   b e   c o m p u t e d   i n   u s e r   a p p l i c a t i o n   b y   w a i t i n g   f o r   t h e           * /  
 / *               e q u i v a l e n t   n u m b e r   o f   C P U   c y c l e s ,   b y   t a k i n g   i n t o   a c c o u n t                             * /  
 / *               r a t i o   o f   C P U   c l o c k   v e r s u s   A D C   c l o c k   p r e s c a l e r s .                                             * /  
 / *   U n i t :   A D C   c l o c k   c y c l e s .                                                                                                         * /  
 # d e f i n e   L L _ A D C _ D E L A Y _ E N A B L E _ C A L I B _ A D C _ C Y C L E S     ( 2 U )     / * ! <   D e l a y   r e q u i r e d   b e t w e e n   e n d   o f   A D C   e n a b l e   a n d   t h e   s t a r t   o f   A D C   c a l i b r a t i o n   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ L L _ E x p o r t e d _ M a c r o s   A D C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E M _ W R I T E _ R E A D   C o m m o n   w r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   A D C   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   A D C   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ A D C _ W r i t e R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   A D C   r e g i s t e r  
     *   @ p a r a m     _ _ I N S T A N C E _ _   A D C   I n s t a n c e  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ A D C _ R e a d R e g ( _ _ I N S T A N C E _ _ ,   _ _ R E G _ _ )   R E A D _ R E G ( _ _ I N S T A N C E _ _ - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E M _ H E L P E R _ M A C R O   A D C   h e l p e r   m a c r o  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   g e t   A D C   c h a n n e l   n u m b e r   i n   d e c i m a l   f o r m a t  
     *                   f r o m   l i t e r a l s   L L _ A D C _ C H A N N E L _ x .  
     *   @ n o t e       E x a m p l e :  
     *                       _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( L L _ A D C _ C H A N N E L _ 4 )  
     *                       w i l l   r e t u r n   d e c i m a l   n u m b e r   " 4 " .  
     *   @ n o t e       T h e   i n p u t   c a n   b e   a   v a l u e   f r o m   f u n c t i o n s   w h e r e   a   c h a n n e l  
     *                   n u m b e r   i s   r e t u r n e d ,   e i t h e r   d e f i n e d   w i t h   n u m b e r  
     *                   o r   w i t h   b i t f i e l d   ( o n l y   o n e   b i t   m u s t   b e   s e t ) .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 1 8  
     * /  
 # d e f i n e   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( _ _ C H A N N E L _ _ )                                                                                 \  
     ( ( ( _ _ C H A N N E L _ _ )   &   A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K )   > >   A D C _ C H A N N E L _ I D _ N U M B E R _ B I T O F F S E T _ P O S )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   g e t   A D C   c h a n n e l   i n   l i t e r a l   f o r m a t   L L _ A D C _ C H A N N E L _ x  
     *                   f r o m   n u m b e r   i n   d e c i m a l   f o r m a t .  
     *   @ n o t e       E x a m p l e :  
     *                       _ _ L L _ A D C _ D E C I M A L _ N B _ T O _ C H A N N E L ( 4 )  
     *                       w i l l   r e t u r n   a   d a t a   e q u i v a l e n t   t o   " L L _ A D C _ C H A N N E L _ 4 " .  
     *   @ p a r a m     _ _ D E C I M A L _ N B _ _ :   V a l u e   b e t w e e n   M i n _ D a t a = 0   a n d   M a x _ D a t a = 1 8  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 . \ n  
     *                   ( 1 )   F o r   A D C   c h a n n e l   r e a d   b a c k   f r o m   A D C   r e g i s t e r ,  
     *                           c o m p a r i s o n   w i t h   i n t e r n a l   c h a n n e l   p a r a m e t e r   t o   b e   d o n e  
     *                           u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ I N T E R N A L _ T O _ E X T E R N A L ( ) .  
     * /  
 # d e f i n e   _ _ L L _ A D C _ D E C I M A L _ N B _ T O _ C H A N N E L ( _ _ D E C I M A L _ N B _ _ )                                                                                                                     \  
     ( ( ( _ _ D E C I M A L _ N B _ _ )   < =   9 U )                                                                                                                                                                           \  
         ?   (                                                                                                                                                                                                                   \  
               ( ( _ _ D E C I M A L _ N B _ _ )   < <   A D C _ C H A N N E L _ I D _ N U M B E R _ B I T O F F S E T _ P O S )                                                                               |                 \  
               ( A D C _ S M P R 2 _ R E G O F F S E T   |   ( ( ( u i n t 3 2 _ t )   ( 3 U   *   ( _ _ D E C I M A L _ N B _ _ ) ) )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )                   \  
             )                                                                                                                                                                                                                   \  
             :                                                                                                                                                                                                                   \  
             (                                                                                                                                                                                                                   \  
               ( ( _ _ D E C I M A L _ N B _ _ )   < <   A D C _ C H A N N E L _ I D _ N U M B E R _ B I T O F F S E T _ P O S )                                                                                             |   \  
               ( A D C _ S M P R 1 _ R E G O F F S E T   |   ( ( ( u i n t 3 2 _ t )   ( 3 U   *   ( ( _ _ D E C I M A L _ N B _ _ )   -   1 0 U ) ) )   < <   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ P O S ) )   \  
             )                                                                                                                                                                                                                   \  
     )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   d e t e r m i n e   w h e t h e r   t h e   s e l e c t e d   c h a n n e l  
     *                   c o r r e s p o n d s   t o   l i t e r a l   d e f i n i t i o n s   o f   d r i v e r .  
     *   @ n o t e       T h e   d i f f e r e n t   l i t e r a l   d e f i n i t i o n s   o f   A D C   c h a n n e l s   a r e :  
     *                   -   A D C   i n t e r n a l   c h a n n e l :  
     *                       L L _ A D C _ C H A N N E L _ V R E F I N T ,   L L _ A D C _ C H A N N E L _ T E M P S E N S O R ,   . . .  
     *                   -   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   a   G P I O   p i n ) :  
     *                       L L _ A D C _ C H A N N E L _ 1 ,   L L _ A D C _ C H A N N E L _ 2 ,   . . .  
     *   @ n o t e       T h e   c h a n n e l   p a r a m e t e r   m u s t   b e   a   v a l u e   d e f i n e d   f r o m   l i t e r a l  
     *                   d e f i n i t i o n   o f   a   A D C   i n t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ V R E F I N T ,  
     *                   L L _ A D C _ C H A N N E L _ T E M P S E N S O R ,   . . . ) ,  
     *                   A D C   e x t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ 1 ,   L L _ A D C _ C H A N N E L _ 2 ,   . . . ) ,  
     *                   m u s t   n o t   b e   a   v a l u e   f r o m   f u n c t i o n s   w h e r e   a   c h a n n e l   n u m b e r   i s  
     *                   r e t u r n e d   f r o m   A D C   r e g i s t e r s ,  
     *                   b e c a u s e   i n t e r n a l   a n d   e x t e r n a l   c h a n n e l s   s h a r e   t h e   s a m e   c h a n n e l  
     *                   n u m b e r   i n   A D C   r e g i s t e r s .   T h e   d i f f e r e n t i a t i o n   i s   m a d e   o n l y   w i t h  
     *                   p a r a m e t e r s   d e f i n i t i o n s   o f   d r i v e r .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   V a l u e   " 0 "   i f   t h e   c h a n n e l   c o r r e s p o n d s   t o   a   p a r a m e t e r   d e f i n i t i o n   o f   a   A D C   e x t e r n a l   c h a n n e l   ( c h a n n e l   c o n n e c t e d   t o   a   G P I O   p i n ) .  
     *                   V a l u e   " 1 "   i f   t h e   c h a n n e l   c o r r e s p o n d s   t o   a   p a r a m e t e r   d e f i n i t i o n   o f   a   A D C   i n t e r n a l   c h a n n e l .  
     * /  
 # d e f i n e   _ _ L L _ A D C _ I S _ C H A N N E L _ I N T E R N A L ( _ _ C H A N N E L _ _ )                                                             \  
     ( ( ( _ _ C H A N N E L _ _ )   &   A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ M A S K )   ! =   0 U )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c o n v e r t   a   c h a n n e l   d e f i n e d   f r o m   p a r a m e t e r  
     *                   d e f i n i t i o n   o f   a   A D C   i n t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ V R E F I N T ,  
     *                   L L _ A D C _ C H A N N E L _ T E M P S E N S O R ,   . . . ) ,  
     *                   t o   i t s   e q u i v a l e n t   p a r a m e t e r   d e f i n i t i o n   o f   a   A D C   e x t e r n a l   c h a n n e l  
     *                   ( L L _ A D C _ C H A N N E L _ 1 ,   L L _ A D C _ C H A N N E L _ 2 ,   . . . ) .  
     *   @ n o t e       T h e   c h a n n e l   p a r a m e t e r   c a n   b e ,   a d d i t i o n a l l y   t o   a   v a l u e  
     *                   d e f i n e d   f r o m   p a r a m e t e r   d e f i n i t i o n   o f   a   A D C   i n t e r n a l   c h a n n e l  
     *                   ( L L _ A D C _ C H A N N E L _ V R E F I N T ,   L L _ A D C _ C H A N N E L _ T E M P S E N S O R ,   . . . ) ,  
     *                   a   v a l u e   d e f i n e d   f r o m   p a r a m e t e r   d e f i n i t i o n   o f  
     *                   A D C   e x t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ 1 ,   L L _ A D C _ C H A N N E L _ 2 ,   . . . )  
     *                   o r   a   v a l u e   f r o m   f u n c t i o n s   w h e r e   a   c h a n n e l   n u m b e r   i s   r e t u r n e d  
     *                   f r o m   A D C   r e g i s t e r s .  
     *   @ p a r a m     _ _ C H A N N E L _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     * /  
 # d e f i n e   _ _ L L _ A D C _ C H A N N E L _ I N T E R N A L _ T O _ E X T E R N A L ( _ _ C H A N N E L _ _ )                                           \  
     ( ( _ _ C H A N N E L _ _ )   &   ~ A D C _ C H A N N E L _ I D _ I N T E R N A L _ C H _ M A S K )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   d e t e r m i n e   w h e t h e r   t h e   i n t e r n a l   c h a n n e l  
     *                   s e l e c t e d   i s   a v a i l a b l e   o n   t h e   A D C   i n s t a n c e   s e l e c t e d .  
     *   @ n o t e       T h e   c h a n n e l   p a r a m e t e r   m u s t   b e   a   v a l u e   d e f i n e d   f r o m   p a r a m e t e r  
     *                   d e f i n i t i o n   o f   a   A D C   i n t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ V R E F I N T ,  
     *                   L L _ A D C _ C H A N N E L _ T E M P S E N S O R ,   . . . ) ,  
     *                   m u s t   n o t   b e   a   v a l u e   d e f i n e d   f r o m   p a r a m e t e r   d e f i n i t i o n   o f  
     *                   A D C   e x t e r n a l   c h a n n e l   ( L L _ A D C _ C H A N N E L _ 1 ,   L L _ A D C _ C H A N N E L _ 2 ,   . . . )  
     *                   o r   a   v a l u e   f r o m   f u n c t i o n s   w h e r e   a   c h a n n e l   n u m b e r   i s  
     *                   r e t u r n e d   f r o m   A D C   r e g i s t e r s ,  
     *                   b e c a u s e   i n t e r n a l   a n d   e x t e r n a l   c h a n n e l s   s h a r e   t h e   s a m e   c h a n n e l  
     *                   n u m b e r   i n   A D C   r e g i s t e r s .   T h e   d i f f e r e n t i a t i o n   i s   m a d e   o n l y   w i t h  
     *                   p a r a m e t e r s   d e f i n i t i o n s   o f   d r i v e r .  
     *   @ p a r a m     _ _ A D C _ I N S T A N C E _ _   A D C   i n s t a n c e  
     *   @ p a r a m     _ _ C H A N N E L _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   V a l u e   " 0 "   i f   t h e   i n t e r n a l   c h a n n e l   s e l e c t e d   i s   n o t   a v a i l a b l e   o n   t h e   A D C   i n s t a n c e   s e l e c t e d .  
     *                   V a l u e   " 1 "   i f   t h e   i n t e r n a l   c h a n n e l   s e l e c t e d   i s   a v a i l a b l e   o n   t h e   A D C   i n s t a n c e   s e l e c t e d .  
     * /  
 # d e f i n e   _ _ L L _ A D C _ I S _ C H A N N E L _ I N T E R N A L _ A V A I L A B L E ( _ _ A D C _ I N S T A N C E _ _ ,   _ _ C H A N N E L _ _ )     \  
     ( ( ( _ _ A D C _ I N S T A N C E _ _ )   = =   A D C 1 )                                                                                                 \  
         ?   (                                                                                                                                                 \  
               ( ( _ _ C H A N N E L _ _ )   = =   L L _ A D C _ C H A N N E L _ V R E F I N T )         | |                                                   \  
               ( ( _ _ C H A N N E L _ _ )   = =   L L _ A D C _ C H A N N E L _ T E M P S E N S O R )                                                         \  
             )                                                                                                                                                 \  
             :                                                                                                                                                 \  
             ( 0 U )                                                                                                                                           \  
     )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   d e f i n e   A D C   a n a l o g   w a t c h d o g   p a r a m e t e r :  
     *                   d e f i n e   a   s i n g l e   c h a n n e l   t o   m o n i t o r   w i t h   a n a l o g   w a t c h d o g  
     *                   f r o m   s e q u e n c e r   c h a n n e l   a n d   g r o u p s   d e f i n i t i o n .  
     *   @ n o t e       T o   b e   u s e d   w i t h   f u n c t i o n   @ r e f   L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s ( ) .  
     *                   E x a m p l e :  
     *                       L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s (  
     *                           A D C 1 ,   L L _ A D C _ A W D 1 ,  
     *                           _ _ L L _ A D C _ A N A L O G W D _ C H A N N E L _ G R O U P ( L L _ A D C _ C H A N N E L 4 ,   L L _ A D C _ G R O U P _ R E G U L A R ) )  
     *   @ p a r a m     _ _ C H A N N E L _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 . \ n  
     *                   ( 1 )   F o r   A D C   c h a n n e l   r e a d   b a c k   f r o m   A D C   r e g i s t e r ,  
     *                           c o m p a r i s o n   w i t h   i n t e r n a l   c h a n n e l   p a r a m e t e r   t o   b e   d o n e  
     *                           u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ I N T E R N A L _ T O _ E X T E R N A L ( ) .  
     *   @ p a r a m     _ _ G R O U P _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ G R O U P _ R E G U L A R  
     *                   @ a r g   @ r e f   L L _ A D C _ G R O U P _ I N J E C T E D  
     *                   @ a r g   @ r e f   L L _ A D C _ G R O U P _ R E G U L A R _ I N J E C T E D  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G                     ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ I N J                     ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G _ I N J             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ I N J               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G _ I N J       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     * /  
 # d e f i n e   _ _ L L _ A D C _ A N A L O G W D _ C H A N N E L _ G R O U P ( _ _ C H A N N E L _ _ ,   _ _ G R O U P _ _ )                                                                                       \  
     ( ( ( _ _ G R O U P _ _ )   = =   L L _ A D C _ G R O U P _ R E G U L A R )                                                                                                                                     \  
         ?   ( ( ( _ _ C H A N N E L _ _ )   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )                                                         \  
             :                                                                                                                                                                                                       \  
             ( ( _ _ G R O U P _ _ )   = =   L L _ A D C _ G R O U P _ I N J E C T E D )                                                                                                                             \  
               ?   ( ( ( _ _ C H A N N E L _ _ )   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D S G L )                                                 \  
                   :                                                                                                                                                                                                 \  
                   ( ( ( _ _ C H A N N E L _ _ )   &   A D C _ C H A N N E L _ I D _ M A S K )   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ A W D S G L )                 \  
     )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   s e t   t h e   v a l u e   o f   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   h i g h  
     *                   o r   l o w   i n   f u n c t i o n   o f   A D C   r e s o l u t i o n ,   w h e n   A D C   r e s o l u t i o n   i s  
     *                   d i f f e r e n t   o f   1 2   b i t s .  
     *   @ n o t e       T o   b e   u s e d   w i t h   f u n c t i o n   @ r e f   L L _ A D C _ S e t A n a l o g W D T h r e s h o l d s ( ) .  
     *                   E x a m p l e ,   w i t h   a   A D C   r e s o l u t i o n   o f   8   b i t s ,   t o   s e t   t h e   v a l u e   o f  
     *                   a n a l o g   w a t c h d o g   t h r e s h o l d   h i g h   ( o n   8   b i t s ) :  
     *                       L L _ A D C _ S e t A n a l o g W D T h r e s h o l d s  
     *                         ( <   A D C x   p a r a m   > ,  
     *                           _ _ L L _ A D C _ A N A L O G W D _ S E T _ T H R E S H O L D _ R E S O L U T I O N ( L L _ A D C _ R E S O L U T I O N _ 8 B ,   < t h r e s h o l d _ v a l u e _ 8 _ b i t s > )  
     *                         ) ;  
     *   @ p a r a m     _ _ A D C _ R E S O L U T I O N _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E S O L U T I O N _ 1 2 B  
     *   @ p a r a m     _ _ A W D _ T H R E S H O L D _ _   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   A D C   i s   f i x e d   t o   r e s o l u t i o n   1 2   b i t s .                         * /  
 / *               T h i s   m a c r o   h a s   b e e n   k e p t   a n y w a y   f o r   c o m p a t i b i l i t y   w i t h   o t h e r                   * /  
 / *               S T M 3 2   f a m i l i e s   f e a t u r i n g   d i f f e r e n t   A D C   r e s o l u t i o n s .                                     * /  
 # d e f i n e   _ _ L L _ A D C _ A N A L O G W D _ S E T _ T H R E S H O L D _ R E S O L U T I O N ( _ _ A D C _ R E S O L U T I O N _ _ ,   _ _ A W D _ T H R E S H O L D _ _ )   \  
     ( ( _ _ A W D _ T H R E S H O L D _ _ )   < <   ( 0 U ) )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   g e t   t h e   v a l u e   o f   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   h i g h  
     *                   o r   l o w   i n   f u n c t i o n   o f   A D C   r e s o l u t i o n ,   w h e n   A D C   r e s o l u t i o n   i s    
     *                   d i f f e r e n t   o f   1 2   b i t s .  
     *   @ n o t e       T o   b e   u s e d   w i t h   f u n c t i o n   @ r e f   L L _ A D C _ G e t A n a l o g W D T h r e s h o l d s ( ) .  
     *                   E x a m p l e ,   w i t h   a   A D C   r e s o l u t i o n   o f   8   b i t s ,   t o   g e t   t h e   v a l u e   o f  
     *                   a n a l o g   w a t c h d o g   t h r e s h o l d   h i g h   ( o n   8   b i t s ) :  
     *                       <   t h r e s h o l d _ v a l u e _ 6 _ b i t s   >   =   _ _ L L _ A D C _ A N A L O G W D _ G E T _ T H R E S H O L D _ R E S O L U T I O N  
     *                         ( L L _ A D C _ R E S O L U T I O N _ 8 B ,  
     *                           L L _ A D C _ G e t A n a l o g W D T h r e s h o l d s ( < A D C x   p a r a m > ,   L L _ A D C _ A W D _ T H R E S H O L D _ H I G H )  
     *                         ) ;  
     *   @ p a r a m     _ _ A D C _ R E S O L U T I O N _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E S O L U T I O N _ 1 2 B  
     *   @ p a r a m     _ _ A W D _ T H R E S H O L D _ 1 2 _ B I T S _ _   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   A D C   i s   f i x e d   t o   r e s o l u t i o n   1 2   b i t s .                         * /  
 / *               T h i s   m a c r o   h a s   b e e n   k e p t   a n y w a y   f o r   c o m p a t i b i l i t y   w i t h   o t h e r                   * /  
 / *               S T M 3 2   f a m i l i e s   f e a t u r i n g   d i f f e r e n t   A D C   r e s o l u t i o n s .                                     * /  
 # d e f i n e   _ _ L L _ A D C _ A N A L O G W D _ G E T _ T H R E S H O L D _ R E S O L U T I O N ( _ _ A D C _ R E S O L U T I O N _ _ ,   _ _ A W D _ T H R E S H O L D _ 1 2 _ B I T S _ _ )   \  
     ( _ _ A W D _ T H R E S H O L D _ 1 2 _ B I T S _ _ )  
  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   g e t   t h e   A D C   m u l t i m o d e   c o n v e r s i o n   d a t a   o f   A D C   m a s t e r  
     *                   o r   A D C   s l a v e   f r o m   r a w   v a l u e   w i t h   b o t h   A D C   c o n v e r s i o n   d a t a   c o n c a t e n a t e d .  
     *   @ n o t e       T h i s   m a c r o   i s   i n t e n d e d   t o   b e   u s e d   w h e n   m u l t i m o d e   t r a n s f e r   b y   D M A  
     *                   i s   e n a b l e d .  
     *                   I n   t h i s   c a s e   t h e   t r a n s f e r r e d   d a t a   n e e d   t o   p r o c e s s e d   w i t h   t h i s   m a c r o  
     *                   t o   s e p a r a t e   t h e   c o n v e r s i o n   d a t a   o f   A D C   m a s t e r   a n d   A D C   s l a v e .  
     *   @ p a r a m     _ _ A D C _ M U L T I _ M A S T E R _ S L A V E _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ M A S T E R  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ S L A V E  
     *   @ p a r a m     _ _ A D C _ M U L T I _ C O N V _ D A T A _ _   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 # d e f i n e   _ _ L L _ A D C _ M U L T I _ C O N V _ D A T A _ M A S T E R _ S L A V E ( _ _ A D C _ M U L T I _ M A S T E R _ S L A V E _ _ ,   _ _ A D C _ M U L T I _ C O N V _ D A T A _ _ )     \  
     ( ( ( _ _ A D C _ M U L T I _ C O N V _ D A T A _ _ )   > >   P O S I T I O N _ V A L ( ( _ _ A D C _ M U L T I _ M A S T E R _ S L A V E _ _ ) ) )   &   A D C _ D R _ D A T A )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   s e l e c t   t h e   A D C   c o m m o n   i n s t a n c e  
     *                   t o   w h i c h   i s   b e l o n g i n g   t h e   s e l e c t e d   A D C   i n s t a n c e .  
     *   @ n o t e       A D C   c o m m o n   r e g i s t e r   i n s t a n c e   c a n   b e   u s e d   f o r :  
     *                   -   S e t   p a r a m e t e r s   c o m m o n   t o   s e v e r a l   A D C   i n s t a n c e s  
     *                   -   M u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s )  
     *                   R e f e r   t o   f u n c t i o n s   h a v i n g   a r g u m e n t   " A D C x y _ C O M M O N "   a s   p a r a m e t e r .  
     *   @ n o t e       O n   S T M 3 2 F 1 ,   t h e r e   i s   n o   c o m m o n   A D C   i n s t a n c e .  
     *                   H o w e v e r ,   A D C   i n s t a n c e   A D C 1   h a s   a   r o l e   o f   c o m m o n   A D C   i n s t a n c e  
     *                   f o r   A D C 1   a n d   A D C 2 :  
     *                   t h i s   i n s t a n c e   i s   u s e d   t o   m a n a g e   i n t e r n a l   c h a n n e l s  
     *                   a n d   m u l t i m o d e   ( t h e s e   f e a t u r e s   a r e   m a n a g e d   i n   A D C   c o m m o n  
     *                   i n s t a n c e s   o n   s o m e   o t h e r   S T M 3 2   d e v i c e s ) .  
     *                   A D C   i n s t a n c e   A D C 3   ( i f   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )  
     *                   h a s   n o   A D C   c o m m o n   i n s t a n c e .  
     *   @ p a r a m     _ _ A D C x _ _   A D C   i n s t a n c e  
     *   @ r e t v a l   A D C   c o m m o n   r e g i s t e r   i n s t a n c e  
     * /  
 # i f   d e f i n e d ( A D C 1 )   & &   d e f i n e d ( A D C 2 )   & &   d e f i n e d ( A D C 3 )  
 # d e f i n e   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( _ _ A D C x _ _ )                                                                           \  
     ( ( ( ( _ _ A D C x _ _ )   = =   A D C 1 )   | |   ( ( _ _ A D C x _ _ )   = =   A D C 2 ) )                                                             \  
         ?   (                                                                                                                                                 \  
               ( A D C 1 2 _ C O M M O N )                                                                                                                     \  
             )                                                                                                                                                 \  
             :                                                                                                                                                 \  
             (                                                                                                                                                 \  
               ( 0 U )                                                                                                                                         \  
             )                                                                                                                                                 \  
     )  
 # e l i f   d e f i n e d ( A D C 1 )   & &   d e f i n e d ( A D C 2 )  
 # d e f i n e   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( _ _ A D C x _ _ )                                                                           \  
     ( A D C 1 2 _ C O M M O N )  
 # e l s e  
 # d e f i n e   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( _ _ A D C x _ _ )                                                                           \  
     ( A D C 1 _ C O M M O N )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c h e c k   i f   a l l   A D C   i n s t a n c e s   s h a r i n g   t h e   s a m e  
     *                   A D C   c o m m o n   i n s t a n c e   a r e   d i s a b l e d .  
     *   @ n o t e       T h i s   c h e c k   i s   r e q u i r e d   b y   f u n c t i o n s   w i t h   s e t t i n g   c o n d i t i o n e d   t o  
     *                   A D C   s t a t e :  
     *                   A l l   A D C   i n s t a n c e s   o f   t h e   A D C   c o m m o n   g r o u p   m u s t   b e   d i s a b l e d .  
     *                   R e f e r   t o   f u n c t i o n s   h a v i n g   a r g u m e n t   " A D C x y _ C O M M O N "   a s   p a r a m e t e r .  
     *   @ n o t e       O n   d e v i c e s   w i t h   o n l y   1   A D C   c o m m o n   i n s t a n c e ,   p a r a m e t e r   o f   t h i s   m a c r o  
     *                   i s   u s e l e s s   a n d   c a n   b e   i g n o r e d   ( p a r a m e t e r   k e p t   f o r   c o m p a t i b i l i t y  
     *                   w i t h   d e v i c e s   f e a t u r i n g   s e v e r a l   A D C   c o m m o n   i n s t a n c e s ) .  
     *   @ n o t e       O n   S T M 3 2 F 1 ,   t h e r e   i s   n o   c o m m o n   A D C   i n s t a n c e .  
     *                   H o w e v e r ,   A D C   i n s t a n c e   A D C 1   h a s   a   r o l e   o f   c o m m o n   A D C   i n s t a n c e  
     *                   f o r   A D C 1   a n d   A D C 2 :  
     *                   t h i s   i n s t a n c e   i s   u s e d   t o   m a n a g e   i n t e r n a l   c h a n n e l s  
     *                   a n d   m u l t i m o d e   ( t h e s e   f e a t u r e s   a r e   m a n a g e d   i n   A D C   c o m m o n  
     *                   i n s t a n c e s   o n   s o m e   o t h e r   S T M 3 2   d e v i c e s ) .  
     *                   A D C   i n s t a n c e   A D C 3   ( i f   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e )  
     *                   h a s   n o   A D C   c o m m o n   i n s t a n c e .  
     *   @ p a r a m     _ _ A D C X Y _ C O M M O N _ _   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   V a l u e   " 0 "   i f   a l l   A D C   i n s t a n c e s   s h a r i n g   t h e   s a m e   A D C   c o m m o n   i n s t a n c e  
     *                   a r e   d i s a b l e d .  
     *                   V a l u e   " 1 "   i f   a t   l e a s t   o n e   A D C   i n s t a n c e   s h a r i n g   t h e   s a m e   A D C   c o m m o n   i n s t a n c e  
     *                   i s   e n a b l e d .  
     * /  
 # i f   d e f i n e d ( A D C 1 )   & &   d e f i n e d ( A D C 2 )   & &   d e f i n e d ( A D C 3 )  
 # d e f i n e   _ _ L L _ A D C _ I S _ E N A B L E D _ A L L _ C O M M O N _ I N S T A N C E ( _ _ A D C X Y _ C O M M O N _ _ )                             \  
     ( ( ( _ _ A D C X Y _ C O M M O N _ _ )   = =   A D C 1 2 _ C O M M O N )                                                                                 \  
         ?   (                                                                                                                                                 \  
               ( L L _ A D C _ I s E n a b l e d ( A D C 1 )   |                                                                                               \  
                 L L _ A D C _ I s E n a b l e d ( A D C 2 )     )                                                                                             \  
             )                                                                                                                                                 \  
             :                                                                                                                                                 \  
             (                                                                                                                                                 \  
               L L _ A D C _ I s E n a b l e d ( A D C 3 )                                                                                                     \  
             )                                                                                                                                                 \  
     )  
 # e l i f   d e f i n e d ( A D C 1 )   & &   d e f i n e d ( A D C 2 )  
 # d e f i n e   _ _ L L _ A D C _ I S _ E N A B L E D _ A L L _ C O M M O N _ I N S T A N C E ( _ _ A D C X Y _ C O M M O N _ _ )                             \  
     ( L L _ A D C _ I s E n a b l e d ( A D C 1 )   |                                                                                                         \  
       L L _ A D C _ I s E n a b l e d ( A D C 2 )     )  
 # e l s e  
 # d e f i n e   _ _ L L _ A D C _ I S _ E N A B L E D _ A L L _ C O M M O N _ I N S T A N C E ( _ _ A D C X Y _ C O M M O N _ _ )                             \  
     L L _ A D C _ I s E n a b l e d ( A D C 1 )  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   d e f i n e   t h e   A D C   c o n v e r s i o n   d a t a   f u l l - s c a l e   d i g i t a l  
     *                   v a l u e   c o r r e s p o n d i n g   t o   t h e   s e l e c t e d   A D C   r e s o l u t i o n .  
     *   @ n o t e       A D C   c o n v e r s i o n   d a t a   f u l l - s c a l e   c o r r e s p o n d s   t o   v o l t a g e   r a n g e  
     *                   d e t e r m i n e d   b y   a n a l o g   v o l t a g e   r e f e r e n c e s   V r e f +   a n d   V r e f -  
     *                   ( r e f e r   t o   r e f e r e n c e   m a n u a l ) .  
     *   @ p a r a m     _ _ A D C _ R E S O L U T I O N _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E S O L U T I O N _ 1 2 B  
     *   @ r e t v a l   A D C   c o n v e r s i o n   d a t a   e q u i v a l e n t   v o l t a g e   v a l u e   ( u n i t :   m V o l t )  
     * /  
 # d e f i n e   _ _ L L _ A D C _ D I G I T A L _ S C A L E ( _ _ A D C _ R E S O L U T I O N _ _ )                                                           \  
     ( 0 x F F F U )  
  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   v o l t a g e   ( u n i t :   m V o l t )  
     *                   c o r r e s p o n d i n g   t o   a   A D C   c o n v e r s i o n   d a t a   ( u n i t :   d i g i t a l   v a l u e ) .  
     *   @ n o t e       A n a l o g   r e f e r e n c e   v o l t a g e   ( V r e f + )   m u s t   b e   k n o w n   f r o m  
     *                   u s e r   b o a r d   e n v i r o n m e n t   o r   c a n   b e   c a l c u l a t e d   u s i n g   A D C   m e a s u r e m e n t .  
     *   @ p a r a m     _ _ V R E F A N A L O G _ V O L T A G E _ _   A n a l o g   r e f e r e n c e   v o l t a g e   ( u n i t :   m V )  
     *   @ p a r a m     _ _ A D C _ D A T A _ _   A D C   c o n v e r s i o n   d a t a   ( r e s o l u t i o n   1 2   b i t s )  
     *                                               ( u n i t :   d i g i t a l   v a l u e ) .  
     *   @ p a r a m     _ _ A D C _ R E S O L U T I O N _ _   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E S O L U T I O N _ 1 2 B  
     *   @ r e t v a l   A D C   c o n v e r s i o n   d a t a   e q u i v a l e n t   v o l t a g e   v a l u e   ( u n i t :   m V o l t )  
     * /  
 # d e f i n e   _ _ L L _ A D C _ C A L C _ D A T A _ T O _ V O L T A G E ( _ _ V R E F A N A L O G _ V O L T A G E _ _ , \  
                                                                             _ _ A D C _ D A T A _ _ , \  
                                                                             _ _ A D C _ R E S O L U T I O N _ _ )                                             \  
     ( ( _ _ A D C _ D A T A _ _ )   *   ( _ _ V R E F A N A L O G _ V O L T A G E _ _ )                                                                       \  
       /   _ _ L L _ A D C _ D I G I T A L _ S C A L E ( _ _ A D C _ R E S O L U T I O N _ _ )                                                                 \  
     )  
  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   t e m p e r a t u r e   ( u n i t :   d e g r e e   C e l s i u s )  
     *                   f r o m   A D C   c o n v e r s i o n   d a t a   o f   i n t e r n a l   t e m p e r a t u r e   s e n s o r .  
     *   @ n o t e       C o m p u t a t i o n   i s   u s i n g   t e m p e r a t u r e   s e n s o r   t y p i c a l   v a l u e s  
     *                   ( r e f e r   t o   d e v i c e   d a t a s h e e t ) .  
     *   @ n o t e       C a l c u l a t i o n   f o r m u l a :  
     *                       T e m p e r a t u r e   =   ( T S _ T Y P _ C A L x _ V O L T ( u V )   -   T S _ A D C _ D A T A   *   C o n v e r s i o n _ u V )  
     *                                                   /   A v g _ S l o p e   +   C A L x _ T E M P  
     *                       w i t h   T S _ A D C _ D A T A             =   t e m p e r a t u r e   s e n s o r   r a w   d a t a   m e a s u r e d   b y   A D C  
     *                                                                       ( u n i t :   d i g i t a l   v a l u e )  
     *                                 A v g _ S l o p e                 =   t e m p e r a t u r e   s e n s o r   s l o p e  
     *                                                                       ( u n i t :   u V / D e g r e e   C e l s i u s )  
     *                                 T S _ T Y P _ C A L x _ V O L T   =   t e m p e r a t u r e   s e n s o r   d i g i t a l   v a l u e   a t  
     *                                                                       t e m p e r a t u r e   C A L x _ T E M P   ( u n i t :   m V )  
     *                   C a u t i o n :   C a l c u l a t i o n   r e l e v a n c y   u n d e r   r e s e r v e   t h e   t e m p e r a t u r e   s e n s o r  
     *                                     o f   t h e   c u r r e n t   d e v i c e   h a s   c h a r a c t e r i s t i c s   i n   l i n e   w i t h  
     *                                     d a t a s h e e t   t y p i c a l   v a l u e s .  
     *                                     I f   t e m p e r a t u r e   s e n s o r   c a l i b r a t i o n   v a l u e s   a r e   a v a i l a b l e   o n  
     *                                     o n   t h i s   d e v i c e   ( p r e s e n c e   o f   m a c r o   _ _ L L _ A D C _ C A L C _ T E M P E R A T U R E ( ) ) ,  
     *                                     t e m p e r a t u r e   c a l c u l a t i o n   w i l l   b e   m o r e   a c c u r a t e   u s i n g  
     *                                     h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C A L C _ T E M P E R A T U R E ( ) .  
     *   @ n o t e       A s   c a l c u l a t i o n   i n p u t ,   t h e   a n a l o g   r e f e r e n c e   v o l t a g e   ( V r e f + )   m u s t   b e  
     *                   d e f i n e d   a s   i t   i m p a c t s   t h e   A D C   L S B   e q u i v a l e n t   v o l t a g e .  
     *   @ n o t e       A n a l o g   r e f e r e n c e   v o l t a g e   ( V r e f + )   m u s t   b e   k n o w n   f r o m  
     *                   u s e r   b o a r d   e n v i r o n m e n t   o r   c a n   b e   c a l c u l a t e d   u s i n g   A D C   m e a s u r e m e n t .  
     *   @ n o t e       A D C   m e a s u r e m e n t   d a t a   m u s t   c o r r e s p o n d   t o   a   r e s o l u t i o n   o f   1 2 b i t s  
     *                   ( f u l l   s c a l e   d i g i t a l   v a l u e   4 0 9 5 ) .   I f   n o t   t h e   c a s e ,   t h e   d a t a   m u s t   b e  
     *                   p r e l i m i n a r i l y   r e s c a l e d   t o   a n   e q u i v a l e n t   r e s o l u t i o n   o f   1 2   b i t s .  
     *   @ p a r a m     _ _ T E M P S E N S O R _ T Y P _ A V G S L O P E _ _       D e v i c e   d a t a s h e e t   d a t a :   T e m p e r a t u r e   s e n s o r   s l o p e   t y p i c a l   v a l u e   ( u n i t :   u V / D e g C e l s i u s ) .  
     *                                                                               O n   S T M 3 2 F 1 ,   r e f e r   t o   d e v i c e   d a t a s h e e t   p a r a m e t e r   " A v g _ S l o p e " .  
     *   @ p a r a m     _ _ T E M P S E N S O R _ T Y P _ C A L X _ V _ _           D e v i c e   d a t a s h e e t   d a t a :   T e m p e r a t u r e   s e n s o r   v o l t a g e   t y p i c a l   v a l u e   ( a t   t e m p e r a t u r e   a n d   V r e f +   d e f i n e d   i n   p a r a m e t e r s   b e l o w )   ( u n i t :   m V ) .  
     *                                                                               O n   S T M 3 2 F 1 ,   r e f e r   t o   d e v i c e   d a t a s h e e t   p a r a m e t e r   " V 2 5 " .  
     *   @ p a r a m     _ _ T E M P S E N S O R _ C A L X _ T E M P _ _             D e v i c e   d a t a s h e e t   d a t a :   T e m p e r a t u r e   a t   w h i c h   t e m p e r a t u r e   s e n s o r   v o l t a g e   ( s e e   p a r a m e t e r   a b o v e )   i s   c o r r e s p o n d i n g   ( u n i t :   m V )  
     *   @ p a r a m     _ _ V R E F A N A L O G _ V O L T A G E _ _                 A n a l o g   v o l t a g e   r e f e r e n c e   ( V r e f + )   v o l t a g e   ( u n i t :   m V )  
     *   @ p a r a m     _ _ T E M P S E N S O R _ A D C _ D A T A _ _               A D C   c o n v e r s i o n   d a t a   o f   i n t e r n a l   t e m p e r a t u r e   s e n s o r   ( u n i t :   d i g i t a l   v a l u e ) .  
     *   @ p a r a m     _ _ A D C _ R E S O L U T I O N _ _                         A D C   r e s o l u t i o n   a t   w h i c h   i n t e r n a l   t e m p e r a t u r e   s e n s o r   v o l t a g e   h a s   b e e n   m e a s u r e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E S O L U T I O N _ 1 2 B  
     *   @ r e t v a l   T e m p e r a t u r e   ( u n i t :   d e g r e e   C e l s i u s )  
     * /  
 # d e f i n e   _ _ L L _ A D C _ C A L C _ T E M P E R A T U R E _ T Y P _ P A R A M S ( _ _ T E M P S E N S O R _ T Y P _ A V G S L O P E _ _ , \  
                                                                                           _ _ T E M P S E N S O R _ T Y P _ C A L X _ V _ _ , \  
                                                                                           _ _ T E M P S E N S O R _ C A L X _ T E M P _ _ , \  
                                                                                           _ _ V R E F A N A L O G _ V O L T A G E _ _ , \  
                                                                                           _ _ T E M P S E N S O R _ A D C _ D A T A _ _ , \  
                                                                                           _ _ A D C _ R E S O L U T I O N _ _ )                               \  
     ( ( (   (                                                                                                                                                 \  
               ( i n t 3 2 _ t ) ( ( ( _ _ T E M P S E N S O R _ T Y P _ C A L X _ V _ _ ) )                                                                   \  
                                   *   1 0 0 0 )                                                                                                               \  
               -                                                                                                                                               \  
               ( i n t 3 2 _ t ) ( ( ( ( _ _ T E M P S E N S O R _ A D C _ D A T A _ _ )   *   ( _ _ V R E F A N A L O G _ V O L T A G E _ _ ) )               \  
                                     /   _ _ L L _ A D C _ D I G I T A L _ S C A L E ( _ _ A D C _ R E S O L U T I O N _ _ ) )                                 \  
                                   *   1 0 0 0 )                                                                                                               \  
             )                                                                                                                                                 \  
         )   /   ( _ _ T E M P S E N S O R _ T Y P _ A V G S L O P E _ _ )                                                                                     \  
       )   +   ( _ _ T E M P S E N S O R _ C A L X _ T E M P _ _ )                                                                                             \  
     )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   A D C _ L L _ E x p o r t e d _ F u n c t i o n s   A D C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ D M A _ M a n a g e m e n t   A D C   D M A   m a n a g e m e n t  
     *   @ {  
     * /  
 / *   N o t e :   L L   A D C   f u n c t i o n s   t o   s e t   D M A   t r a n s f e r   a r e   l o c a t e d   i n t o   s e c t i o n s   o f         * /  
 / *               c o n f i g u r a t i o n   o f   A D C   i n s t a n c e ,   g r o u p s   a n d   m u l t i m o d e   ( i f   a v a i l a b l e ) :     * /  
 / *               @ r e f   L L _ A D C _ R E G _ S e t D M A T r a n s f e r ( ) ,   . . .                                                                 * /  
  
 / * *  
     *   @ b r i e f     F u n c t i o n   t o   h e l p   t o   c o n f i g u r e   D M A   t r a n s f e r   f r o m   A D C :   r e t r i e v e   t h e  
     *                   A D C   r e g i s t e r   a d d r e s s   f r o m   A D C   i n s t a n c e   a n d   a   l i s t   o f   A D C   r e g i s t e r s  
     *                   i n t e n d e d   t o   b e   u s e d   ( m o s t   c o m m o n l y )   w i t h   D M A   t r a n s f e r .  
     *   @ n o t e       T h e s e   A D C   r e g i s t e r s   a r e   d a t a   r e g i s t e r s :  
     *                   w h e n   A D C   c o n v e r s i o n   d a t a   i s   a v a i l a b l e   i n   A D C   d a t a   r e g i s t e r s ,  
     *                   A D C   g e n e r a t e s   a   D M A   t r a n s f e r   r e q u e s t .  
     *   @ n o t e       T h i s   m a c r o   i s   i n t e n d e d   t o   b e   u s e d   w i t h   L L   D M A   d r i v e r ,   r e f e r   t o  
     *                   f u n c t i o n   " L L _ D M A _ C o n f i g A d d r e s s e s ( ) " .  
     *                   E x a m p l e :  
     *                       L L _ D M A _ C o n f i g A d d r e s s e s ( D M A 1 ,  
     *                                                                     L L _ D M A _ C H A N N E L _ 1 ,  
     *                                                                     L L _ A D C _ D M A _ G e t R e g A d d r ( A D C 1 ,   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A ) ,  
     *                                                                     ( u i n t 3 2 _ t ) & <   a r r a y   o r   v a r i a b l e   > ,  
     *                                                                     L L _ D M A _ D I R E C T I O N _ P E R I P H _ T O _ M E M O R Y ) ;  
     *   @ n o t e       F o r   d e v i c e s   w i t h   s e v e r a l   A D C :   i n   m u l t i m o d e ,   s o m e   d e v i c e s  
     *                   u s e   a   d i f f e r e n t   d a t a   r e g i s t e r   o u t s i d e   o f   A D C   i n s t a n c e   s c o p e  
     *                   ( c o m m o n   d a t a   r e g i s t e r ) .   T h i s   m a c r o   m a n a g e s   t h i s   r e g i s t e r   d i f f e r e n c e ,  
     *                   o n l y   A D C   i n s t a n c e   h a s   t o   b e   s e t   a s   p a r a m e t e r .  
     *   @ n o t e       O n   S T M 3 2 F 1 ,   o n l y   A D C   i n s t a n c e s   A D C 1   a n d   A D C 3   h a v e   D M A   t r a n s f e r  
     *                   c a p a b i l i t y ,   n o t   A D C 2   ( A D C 2   a n d   A D C 3   i n s t a n c e s   n o t   a v a i l a b l e   o n  
     *                   a l l   d e v i c e s ) .  
     *   @ n o t e       O n   S T M 3 2 F 1 ,   m u l t i m o d e   c a n   b e   u s e d   o n l y   w i t h   A D C 1   a n d   A D C 2 ,   n o t   A D C 3 .  
     *                   T h e r e f o r e ,   t h e   c o r r e s p o n d i n g   p a r a m e t e r   o f   d a t a   t r a n s f e r  
     *                   f o r   m u l t i m o d e   c a n   b e   u s e d   o n l y   w i t h   A D C 1   a n d   A D C 2 .  
     *                   ( A D C 2   a n d   A D C 3   i n s t a n c e s   n o t   a v a i l a b l e   o n   a l l   d e v i c e s ) .  
     *   @ r m t o l l   D R               D A T A                       L L _ A D C _ D M A _ G e t R e g A d d r  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R e g i s t e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A  
     *                   @ a r g   @ r e f   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A _ M U L T I   ( 1 )  
     *                    
     *                   ( 1 )   A v a i l a b l e   o n   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s .  
     *   @ r e t v a l   A D C   r e g i s t e r   a d d r e s s  
     * /  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ D M A _ G e t R e g A d d r ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R e g i s t e r )  
 {  
     u i n t 3 2 _ t   d a t a _ r e g _ a d d r   =   0 U ;  
      
     i f   ( R e g i s t e r   = =   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A )  
     {  
         / *   R e t r i e v e   a d d r e s s   o f   r e g i s t e r   D R   * /  
         d a t a _ r e g _ a d d r   =   ( u i n t 3 2 _ t ) & ( A D C x - > D R ) ;  
     }  
     e l s e   / *   ( R e g i s t e r   = =   L L _ A D C _ D M A _ R E G _ R E G U L A R _ D A T A _ M U L T I )   * /  
     {  
         / *   R e t r i e v e   a d d r e s s   o f   r e g i s t e r   o f   m u l t i m o d e   d a t a   * /  
         d a t a _ r e g _ a d d r   =   ( u i n t 3 2 _ t ) & ( A D C 1 2 _ C O M M O N - > D R ) ;  
     }  
      
     r e t u r n   d a t a _ r e g _ a d d r ;  
 }  
 # e l s e  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ D M A _ G e t R e g A d d r ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R e g i s t e r )  
 {  
     / *   R e t r i e v e   a d d r e s s   o f   r e g i s t e r   D R   * /  
     r e t u r n   ( u i n t 3 2 _ t ) & ( A D C x - > D R ) ;  
 }  
 # e n d i f  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ C o m m o n   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   c o m m o n   t o   s e v e r a l   A D C   i n s t a n c e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   p a r a m e t e r   c o m m o n   t o   s e v e r a l   A D C :   m e a s u r e m e n t   p a t h   t o   i n t e r n a l  
     *                   c h a n n e l s   ( V r e f I n t ,   t e m p e r a t u r e   s e n s o r ,   . . . ) .  
     *   @ n o t e       O n e   o r   s e v e r a l   v a l u e s   c a n   b e   s e l e c t e d .  
     *                   E x a m p l e :   ( L L _ A D C _ P A T H _ I N T E R N A L _ V R E F I N T   |  
     *                                       L L _ A D C _ P A T H _ I N T E R N A L _ T E M P S E N S O R )  
     *   @ n o t e       S t a b i l i z a t i o n   t i m e   o f   m e a s u r e m e n t   p a t h   t o   i n t e r n a l   c h a n n e l :  
     *                   A f t e r   e n a b l i n g   i n t e r n a l   p a t h s ,   b e f o r e   s t a r t i n g   A D C   c o n v e r s i o n ,  
     *                   a   d e l a y   i s   r e q u i r e d   f o r   i n t e r n a l   v o l t a g e   r e f e r e n c e   a n d  
     *                   t e m p e r a t u r e   s e n s o r   s t a b i l i z a t i o n   t i m e .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t .  
     *                   R e f e r   t o   l i t e r a l   @ r e f   L L _ A D C _ D E L A Y _ T E M P S E N S O R _ S T A B _ U S .  
     *   @ n o t e       A D C   i n t e r n a l   c h a n n e l   s a m p l i n g   t i m e   c o n s t r a i n t :  
     *                   F o r   A D C   c o n v e r s i o n   o f   i n t e r n a l   c h a n n e l s ,  
     *                   a   s a m p l i n g   t i m e   m i n i m u m   v a l u e   i s   r e q u i r e d .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t .  
     *   @ r m t o l l   C R 2             T S V R E F E                 L L _ A D C _ S e t C o m m o n P a t h I n t e r n a l C h  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ p a r a m     P a t h I n t e r n a l   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ N O N E  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ V R E F I N T  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ T E M P S E N S O R  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t C o m m o n P a t h I n t e r n a l C h ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N ,   u i n t 3 2 _ t   P a t h I n t e r n a l )  
 {  
     M O D I F Y _ R E G ( A D C x y _ C O M M O N - > C R 2 ,   ( A D C _ C R 2 _ T S V R E F E ) ,   P a t h I n t e r n a l ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   p a r a m e t e r   c o m m o n   t o   s e v e r a l   A D C :   m e a s u r e m e n t   p a t h   t o   i n t e r n a l  
     *                   c h a n n e l s   ( V r e f I n t ,   t e m p e r a t u r e   s e n s o r ,   . . . ) .  
     *   @ n o t e       O n e   o r   s e v e r a l   v a l u e s   c a n   b e   s e l e c t e d .  
     *                   E x a m p l e :   ( L L _ A D C _ P A T H _ I N T E R N A L _ V R E F I N T   |  
     *                                       L L _ A D C _ P A T H _ I N T E R N A L _ T E M P S E N S O R )  
     *   @ r m t o l l   C R 2             T S V R E F E                 L L _ A D C _ G e t C o m m o n P a t h I n t e r n a l C h  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ N O N E  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ V R E F I N T  
     *                   @ a r g   @ r e f   L L _ A D C _ P A T H _ I N T E R N A L _ T E M P S E N S O R  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t C o m m o n P a t h I n t e r n a l C h ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x y _ C O M M O N - > C R 2 ,   A D C _ C R 2 _ T S V R E F E ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ I n s t a n c e   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   A D C   i n s t a n c e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   A D C   c o n v e r s i o n   d a t a   a l i g n m e n t .  
     *   @ n o t e       R e f e r   t o   r e f e r e n c e   m a n u a l   f o r   a l i g n m e n t s   f o r m a t s  
     *                   d e p e n d e n c i e s   t o   A D C   r e s o l u t i o n s .  
     *   @ r m t o l l   C R 2             A L I G N                     L L _ A D C _ S e t D a t a A l i g n m e n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     D a t a A l i g n m e n t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ D A T A _ A L I G N _ R I G H T  
     *                   @ a r g   @ r e f   L L _ A D C _ D A T A _ A L I G N _ L E F T  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t D a t a A l i g n m e n t ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   D a t a A l i g n m e n t )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 2 ,   A D C _ C R 2 _ A L I G N ,   D a t a A l i g n m e n t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   c o n v e r s i o n   d a t a   a l i g n m e n t .  
     *   @ n o t e       R e f e r   t o   r e f e r e n c e   m a n u a l   f o r   a l i g n m e n t s   f o r m a t s  
     *                   d e p e n d e n c i e s   t o   A D C   r e s o l u t i o n s .  
     *   @ r m t o l l   C R 2             A L I G N                     L L _ A D C _ S e t D a t a A l i g n m e n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ D A T A _ A L I G N _ R I G H T  
     *                   @ a r g   @ r e f   L L _ A D C _ D A T A _ A L I G N _ L E F T  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t D a t a A l i g n m e n t ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ A L I G N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   s e q u e n c e r s   s c a n   m o d e ,   f o r   a l l   A D C   g r o u p s  
     *                   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d ) .  
     *   @ n o t e     A c c o r d i n g   t o   s e q u e n c e r s   s c a n   m o d e   :  
     *                   -   I f   d i s a b l e d :   A D C   c o n v e r s i o n   i s   p e r f o r m e d   i n   u n i t a r y   c o n v e r s i o n  
     *                       m o d e   ( o n e   c h a n n e l   c o n v e r t e d ,   t h a t   d e f i n e d   i n   r a n k   1 ) .  
     *                       C o n f i g u r a t i o n   o f   s e q u e n c e r s   o f   a l l   A D C   g r o u p s  
     *                       ( s e q u e n c e r   s c a n   l e n g t h ,   . . . )   i s   d i s c a r d e d :   e q u i v a l e n t   t o  
     *                       s c a n   l e n g t h   o f   1   r a n k .  
     *                   -   I f   e n a b l e d :   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   s e q u e n c e   c o n v e r s i o n s  
     *                       m o d e ,   a c c o r d i n g   t o   c o n f i g u r a t i o n   o f   s e q u e n c e r s   o f  
     *                       e a c h   A D C   g r o u p   ( s e q u e n c e r   s c a n   l e n g t h ,   . . . ) .  
     *                       R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( )  
     *                       a n d   t o   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t S e q u e n c e r L e n g t h ( ) .  
     *   @ r m t o l l   C R 1             S C A N                       L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     S c a n M o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ S E Q _ S C A N _ E N A B L E  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   S c a n M o d e )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 1 ,   A D C _ C R 1 _ S C A N ,   S c a n M o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   s e q u e n c e r s   s c a n   m o d e ,   f o r   a l l   A D C   g r o u p s  
     *                   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d ) .  
     *   @ n o t e     A c c o r d i n g   t o   s e q u e n c e r s   s c a n   m o d e   :  
     *                   -   I f   d i s a b l e d :   A D C   c o n v e r s i o n   i s   p e r f o r m e d   i n   u n i t a r y   c o n v e r s i o n  
     *                       m o d e   ( o n e   c h a n n e l   c o n v e r t e d ,   t h a t   d e f i n e d   i n   r a n k   1 ) .  
     *                       C o n f i g u r a t i o n   o f   s e q u e n c e r s   o f   a l l   A D C   g r o u p s  
     *                       ( s e q u e n c e r   s c a n   l e n g t h ,   . . . )   i s   d i s c a r d e d :   e q u i v a l e n t   t o  
     *                       s c a n   l e n g t h   o f   1   r a n k .  
     *                   -   I f   e n a b l e d :   A D C   c o n v e r s i o n s   a r e   p e r f o r m e d   i n   s e q u e n c e   c o n v e r s i o n s  
     *                       m o d e ,   a c c o r d i n g   t o   c o n f i g u r a t i o n   o f   s e q u e n c e r s   o f  
     *                       e a c h   A D C   g r o u p   ( s e q u e n c e r   s c a n   l e n g t h ,   . . . ) .  
     *                       R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( )  
     *                       a n d   t o   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S e t S e q u e n c e r L e n g t h ( ) .  
     *   @ r m t o l l   C R 1             S C A N                       L L _ A D C _ G e t S e q u e n c e r s S c a n M o d e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ S E Q _ S C A N _ E N A B L E  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t S e q u e n c e r s S c a n M o d e ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ S C A N ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ G r o u p _ R e g u l a r   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   g r o u p   r e g u l a r  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   s o u r c e :  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,  
     *                   e x t e r n a l   i n t e r r u p t   l i n e ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   e x t e r n a l   t r i g g e r   i s   s e t   w i t h   t r i g g e r   p o l a r i t y :  
     *                   r i s i n g   e d g e   ( o n l y   t r i g g e r   p o l a r i t y   a v a i l a b l e   o n   t h i s   S T M 3 2   s e r i e ) .  
     *   @ n o t e       A v a i l a b i l i t y   o f   p a r a m e t e r s   o f   t r i g g e r   s o u r c e s   f r o m   t i m e r    
     *                   d e p e n d s   o n   t i m e r s   a v a i l a b i l i t y   o n   t h e   s e l e c t e d   d e v i c e .  
     *   @ r m t o l l   C R 2             E X T S E L                   L L _ A D C _ R E G _ S e t T r i g g e r S o u r c e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     T r i g g e r S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ S O F T W A R E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 3               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 1               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 2               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 2               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ T R G O             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 4 _ C H 4               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ E X T I _ L I N E 1 1         ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O             ( 2 ) ( 4 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O _ A D C 3   ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 3               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 3               ( 3 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n   a l l   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 2 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 3 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 4 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t T r i g g e r S o u r c e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   T r i g g e r S o u r c e )  
 {  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   A D C   g r o u p   r e g u l a r   e x t e r n a l   t r i g g e r   e d g e                 * /  
 / *               i s   u s e d   t o   p e r f o r m   a   A D C   c o n v e r s i o n   s t a r t .                                                       * /  
 / *               T h i s   f u n c t i o n   d o e s   n o t   s e t   e x t e r n a l   t r i g g e r   e d g e .                                         * /  
 / *               T h i s   f e a t u r e   i s   s e t   u s i n g   f u n c t i o n                                                                       * /  
 / *               @ r e f   L L _ A D C _ R E G _ S t a r t C o n v e r s i o n E x t T r i g ( ) .                                                         * /  
     M O D I F Y _ R E G ( A D C x - > C R 2 ,   A D C _ C R 2 _ E X T S E L ,   ( T r i g g e r S o u r c e   &   A D C _ C R 2 _ E X T S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   s o u r c e :  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,  
     *                   e x t e r n a l   i n t e r r u p t   l i n e ) .  
     *   @ n o t e       T o   d e t e r m i n e   w h e t h e r   g r o u p   r e g u l a r   t r i g g e r   s o u r c e   i s  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   e x t e r n a l ,   w i t h o u t   d e t a i l  
     *                   o f   w h i c h   p e r i p h e r a l   i s   s e l e c t e d   a s   e x t e r n a l   t r i g g e r ,  
     *                   ( e q u i v a l e n t   t o    
     *                   " i f ( L L _ A D C _ R E G _ G e t T r i g g e r S o u r c e ( A D C 1 )   = =   L L _ A D C _ R E G _ T R I G _ S O F T W A R E ) " )  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ I s T r i g g e r S o u r c e S W S t a r t .  
     *   @ n o t e       A v a i l a b i l i t y   o f   p a r a m e t e r s   o f   t r i g g e r   s o u r c e s   f r o m   t i m e r    
     *                   d e p e n d s   o n   t i m e r s   a v a i l a b i l i t y   o n   t h e   s e l e c t e d   d e v i c e .  
     *   @ r m t o l l   C R 2             E X T S E L                   L L _ A D C _ R E G _ G e t T r i g g e r S o u r c e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ S O F T W A R E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 3               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 1               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 1 _ C H 2               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 2               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ T R G O             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 4 _ C H 4               ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ E X T I _ L I N E 1 1         ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O             ( 2 ) ( 4 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O _ A D C 3   ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 3 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 2 _ C H 3               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 8 _ T R G O             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 1               ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ T I M 5 _ C H 3               ( 3 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n   a l l   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 2 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 3 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 4 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t T r i g g e r S o u r c e ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ E X T S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   t r i g g e r   s o u r c e   i n t e r n a l   ( S W   s t a r t )  
                         o r   e x t e r n a l .  
     *   @ n o t e       I n   c a s e   o f   g r o u p   r e g u l a r   t r i g g e r   s o u r c e   s e t   t o   e x t e r n a l   t r i g g e r ,  
     *                   t o   d e t e r m i n e   w h i c h   p e r i p h e r a l   i s   s e l e c t e d   a s   e x t e r n a l   t r i g g e r ,  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ G e t T r i g g e r S o u r c e ( ) .  
     *   @ r m t o l l   C R 2             E X T S E L                   L L _ A D C _ R E G _ I s T r i g g e r S o u r c e S W S t a r t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   V a l u e   " 0 "   i f   t r i g g e r   s o u r c e   e x t e r n a l   t r i g g e r  
     *                   V a l u e   " 1 "   i f   t r i g g e r   s o u r c e   S W   s t a r t .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ I s T r i g g e r S o u r c e S W S t a r t ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ E X T S E L )   = =   ( L L _ A D C _ R E G _ T R I G _ S O F T W A R E ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   l e n g t h   a n d   s c a n   d i r e c t i o n .  
     *   @ n o t e       D e s c r i p t i o n   o f   A D C   g r o u p   r e g u l a r   s e q u e n c e r   f e a t u r e s :  
     *                   -   F o r   d e v i c e s   w i t h   s e q u e n c e r   f u l l y   c o n f i g u r a b l e  
     *                       ( f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s ( ) "   a v a i l a b l e ) :  
     *                       s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k   a f f e c t a t i o n   t o   a   c h a n n e l  
     *                       a r e   c o n f i g u r a b l e .  
     *                       T h i s   f u n c t i o n   p e r f o r m s   c o n f i g u r a t i o n   o f :  
     *                       -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e .  
     *                       -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                           s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   r a n k   1   t o   r a n k   n ) .  
     *                       S e q u e n c e r   r a n k s   a r e   s e l e c t e d   u s i n g  
     *                       f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s ( ) " .  
     *                   -   F o r   d e v i c e s   w i t h   s e q u e n c e r   n o t   f u l l y   c o n f i g u r a b l e  
     *                       ( f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r C h a n n e l s ( ) "   a v a i l a b l e ) :  
     *                       s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k   a f f e c t a t i o n   t o   a   c h a n n e l  
     *                       a r e   d e f i n e d   b y   c h a n n e l   n u m b e r .  
     *                       T h i s   f u n c t i o n   p e r f o r m s   c o n f i g u r a t i o n   o f :  
     *                       -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e   i s  
     *                           d e f i n e d   b y   n u m b e r   o f   c h a n n e l s   s e t   i n   t h e   s e q u e n c e ,  
     *                           r a n k   o f   e a c h   c h a n n e l   i s   f i x e d   b y   c h a n n e l   H W   n u m b e r .  
     *                           ( c h a n n e l   0   f i x e d   o n   r a n k   0 ,   c h a n n e l   1   f i x e d   o n   r a n k 1 ,   . . . ) .  
     *                       -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                           s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   l o w e s t   c h a n n e l   n u m b e r   t o  
     *                           h i g h e s t   c h a n n e l   n u m b e r ) .  
     *                       S e q u e n c e r   r a n k s   a r e   s e l e c t e d   u s i n g  
     *                       f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r C h a n n e l s ( ) " .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   g r o u p   r e g u l a r   s e q u e n c e r   c o n f i g u r a t i o n  
     *                   i s   c o n d i t i o n e d   t o   A D C   i n s t a n c e   s e q u e n c e r   m o d e .  
     *                   I f   A D C   i n s t a n c e   s e q u e n c e r   m o d e   i s   d i s a b l e d ,   s e q u e n c e r s   o f  
     *                   a l l   g r o u p s   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d )   c a n   b e   c o n f i g u r e d  
     *                   b u t   t h e i r   e x e c u t i o n   i s   d i s a b l e d   ( l i m i t e d   t o   r a n k   1 ) .  
     *                   R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( ) .  
     *   @ n o t e       S e q u e n c e r   d i s a b l e d   i s   e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :  
     *                   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l .  
     *   @ r m t o l l   S Q R 1           L                             L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     S e q u e n c e r N b R a n k s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 6 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 7 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 8 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 9 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 0 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 1 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 6 R A N K S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   S e q u e n c e r N b R a n k s )  
 {  
     M O D I F Y _ R E G ( A D C x - > S Q R 1 ,   A D C _ S Q R 1 _ L ,   S e q u e n c e r N b R a n k s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   l e n g t h   a n d   s c a n   d i r e c t i o n .  
     *   @ n o t e       D e s c r i p t i o n   o f   A D C   g r o u p   r e g u l a r   s e q u e n c e r   f e a t u r e s :  
     *                   -   F o r   d e v i c e s   w i t h   s e q u e n c e r   f u l l y   c o n f i g u r a b l e  
     *                       ( f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s ( ) "   a v a i l a b l e ) :  
     *                       s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k   a f f e c t a t i o n   t o   a   c h a n n e l  
     *                       a r e   c o n f i g u r a b l e .  
     *                       T h i s   f u n c t i o n   r e t r i e v e s :  
     *                       -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e .  
     *                       -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                           s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   r a n k   1   t o   r a n k   n ) .  
     *                       S e q u e n c e r   r a n k s   a r e   s e l e c t e d   u s i n g  
     *                       f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s ( ) " .  
     *                   -   F o r   d e v i c e s   w i t h   s e q u e n c e r   n o t   f u l l y   c o n f i g u r a b l e  
     *                       ( f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r C h a n n e l s ( ) "   a v a i l a b l e ) :  
     *                       s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k   a f f e c t a t i o n   t o   a   c h a n n e l  
     *                       a r e   d e f i n e d   b y   c h a n n e l   n u m b e r .  
     *                       T h i s   f u n c t i o n   r e t r i e v e s :  
     *                       -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e   i s  
     *                           d e f i n e d   b y   n u m b e r   o f   c h a n n e l s   s e t   i n   t h e   s e q u e n c e ,  
     *                           r a n k   o f   e a c h   c h a n n e l   i s   f i x e d   b y   c h a n n e l   H W   n u m b e r .  
     *                           ( c h a n n e l   0   f i x e d   o n   r a n k   0 ,   c h a n n e l   1   f i x e d   o n   r a n k 1 ,   . . . ) .  
     *                       -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                           s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   l o w e s t   c h a n n e l   n u m b e r   t o  
     *                           h i g h e s t   c h a n n e l   n u m b e r ) .  
     *                       S e q u e n c e r   r a n k s   a r e   s e l e c t e d   u s i n g  
     *                       f u n c t i o n   " L L _ A D C _ R E G _ S e t S e q u e n c e r C h a n n e l s ( ) " .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   g r o u p   r e g u l a r   s e q u e n c e r   c o n f i g u r a t i o n  
     *                   i s   c o n d i t i o n e d   t o   A D C   i n s t a n c e   s e q u e n c e r   m o d e .  
     *                   I f   A D C   i n s t a n c e   s e q u e n c e r   m o d e   i s   d i s a b l e d ,   s e q u e n c e r s   o f  
     *                   a l l   g r o u p s   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d )   c a n   b e   c o n f i g u r e d  
     *                   b u t   t h e i r   e x e c u t i o n   i s   d i s a b l e d   ( l i m i t e d   t o   r a n k   1 ) .  
     *                   R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( ) .  
     *   @ n o t e       S e q u e n c e r   d i s a b l e d   i s   e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :  
     *                   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l .  
     *   @ r m t o l l   S Q R 1           L                             L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 6 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 7 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 8 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 9 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 0 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 1 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ S C A N _ E N A B L E _ 1 6 R A N K S  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t S e q u e n c e r L e n g t h ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > S Q R 1 ,   A D C _ S Q R 1 _ L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :  
     *                   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d  
     *                   n u m b e r   o f   r a n k s .  
     *   @ n o t e       I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   g r o u p   r e g u l a r    
     *                   c o n t i n u o u s   m o d e   a n d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e .  
     *   @ n o t e       I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   a u t o - i n j e c t e d   m o d e  
     *                   a n d   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e .  
     *   @ r m t o l l   C R 1             D I S C E N                   L L _ A D C _ R E G _ S e t S e q u e n c e r D i s c o n t \ n  
     *                   C R 1             D I S C N U M                 L L _ A D C _ R E G _ S e t S e q u e n c e r D i s c o n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     S e q D i s c o n t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 1 R A N K  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 6 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 7 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 8 R A N K S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t S e q u e n c e r D i s c o n t ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   S e q D i s c o n t )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 1 ,   A D C _ C R 1 _ D I S C E N   |   A D C _ C R 1 _ D I S C N U M ,   S e q D i s c o n t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :  
     *                   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d  
     *                   n u m b e r   o f   r a n k s .  
     *   @ r m t o l l   C R 1             D I S C E N                   L L _ A D C _ R E G _ G e t S e q u e n c e r D i s c o n t \ n  
     *                   C R 1             D I S C N U M                 L L _ A D C _ R E G _ G e t S e q u e n c e r D i s c o n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 1 R A N K  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 4 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 5 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 6 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 7 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ S E Q _ D I S C O N T _ 8 R A N K S  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t S e q u e n c e r D i s c o n t ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ D I S C E N   |   A D C _ C R 1 _ D I S C N U M ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   r e g u l a r   s e q u e n c e :   c h a n n e l   o n   t h e   s e l e c t e d  
     *                   s c a n   s e q u e n c e   r a n k .  
     *   @ n o t e       T h i s   f u n c t i o n   p e r f o r m s   c o n f i g u r a t i o n   o f :  
     *                   -   C h a n n e l s   o r d e r i n g   i n t o   e a c h   r a n k   o f   s c a n   s e q u e n c e :  
     *                       w h a t e v e r   c h a n n e l   c a n   b e   p l a c e d   i n t o   w h a t e v e r   r a n k .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   A D C   g r o u p   r e g u l a r   s e q u e n c e r   i s  
     *                   f u l l y   c o n f i g u r a b l e :   s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k  
     *                   a f f e c t a t i o n   t o   a   c h a n n e l   a r e   c o n f i g u r a b l e .  
     *                   R e f e r   t o   d e s c r i p t i o n   o f   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( ) .  
     *   @ n o t e       D e p e n d i n g   o n   d e v i c e s   a n d   p a c k a g e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t o   m e a s u r e   i n t e r n a l   c h a n n e l s   ( V r e f I n t ,  
     *                   T e m p S e n s o r ,   . . . ) ,   m e a s u r e m e n t   p a t h s   t o   i n t e r n a l   c h a n n e l s   m u s t   b e  
     *                   e n a b l e d   s e p a r a t e l y .  
     *                   T h i s   c a n   b e   d o n e   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ S e t C o m m o n P a t h I n t e r n a l C h ( ) .  
     *   @ r m t o l l   S Q R 3           S Q 1                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 2                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 3                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 4                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 5                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 6                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 7                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 8                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 9                         L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 0                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 1                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 2                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 3                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 4                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 5                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 6                       L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 6  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t S e q u e n c e r R a n k s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     / *   S e t   b i t s   w i t h   c o n t e n t   o f   p a r a m e t e r   " C h a n n e l "   w i t h   b i t s   p o s i t i o n                     * /  
     / *   i n   r e g i s t e r   a n d   r e g i s t e r   p o s i t i o n   d e p e n d i n g   o n   p a r a m e t e r   " R a n k " .                   * /  
     / *   P a r a m e t e r s   " R a n k "   a n d   " C h a n n e l "   a r e   u s e d   w i t h   m a s k s   b e c a u s e   c o n t a i n i n g       * /  
     / *   o t h e r   b i t s   r e s e r v e d   f o r   o t h e r   p u r p o s e .                                                                       * /  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > S Q R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ R E G _ S Q R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     M O D I F Y _ R E G ( * p r e g ,  
                           A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K   < <   ( R a n k   &   A D C _ R E G _ R A N K _ I D _ S Q R X _ M A S K ) ,  
                           ( C h a n n e l   &   A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K )   < <   ( R a n k   &   A D C _ R E G _ R A N K _ I D _ S Q R X _ M A S K ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   s e q u e n c e :   c h a n n e l   o n   t h e   s e l e c t e d  
     *                   s c a n   s e q u e n c e   r a n k .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   A D C   g r o u p   r e g u l a r   s e q u e n c e r   i s  
     *                   f u l l y   c o n f i g u r a b l e :   s e q u e n c e r   l e n g t h   a n d   e a c h   r a n k  
     *                   a f f e c t a t i o n   t o   a   c h a n n e l   a r e   c o n f i g u r a b l e .  
     *                   R e f e r   t o   d e s c r i p t i o n   o f   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S e t S e q u e n c e r L e n g t h ( ) .  
     *   @ n o t e       D e p e n d i n g   o n   d e v i c e s   a n d   p a c k a g e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
     *   @ n o t e       U s a g e   o f   t h e   r e t u r n e d   c h a n n e l   n u m b e r :  
     *                   -   T o   r e i n j e c t   t h i s   c h a n n e l   i n t o   a n o t h e r   f u n c t i o n   L L _ A D C _ x x x :  
     *                       t h e   r e t u r n e d   c h a n n e l   n u m b e r   i s   o n l y   p a r t l y   f o r m a t t e d   o n   d e f i n i t i o n  
     *                       o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x .   T h e r e f o r e ,   i t   h a s   t o   b e   c o m p a r e d  
     *                       w i t h   p a r t s   o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x   o r   u s i n g  
     *                       h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *                       T h e n   t h e   s e l e c t e d   l i t e r a l   L L _ A D C _ C H A N N E L _ x   c a n   b e   u s e d  
     *                       a s   p a r a m e t e r   f o r   a n o t h e r   f u n c t i o n .  
     *                   -   T o   g e t   t h e   c h a n n e l   n u m b e r   i n   d e c i m a l   f o r m a t :  
     *                       p r o c e s s   t h e   r e t u r n e d   v a l u e   w i t h   t h e   h e l p e r   m a c r o  
     *                       @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *   @ r m t o l l   S Q R 3           S Q 1                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 2                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 3                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 4                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 5                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 3           S Q 6                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 7                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 8                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 9                         L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 0                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 1                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 2           S Q 1 2                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 3                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 4                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 5                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s \ n  
     *                   S Q R 1           S Q 1 6                       L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ R A N K _ 1 6  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 . \ n  
     *                   ( 1 )   F o r   A D C   c h a n n e l   r e a d   b a c k   f r o m   A D C   r e g i s t e r ,  
     *                           c o m p a r i s o n   w i t h   i n t e r n a l   c h a n n e l   p a r a m e t e r   t o   b e   d o n e  
     *                           u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ I N T E R N A L _ T O _ E X T E R N A L ( ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t S e q u e n c e r R a n k s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > S Q R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ R E G _ S Q R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     r e t u r n   ( u i n t 3 2 _ t )   ( R E A D _ B I T ( * p r e g ,  
                                                             A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K   < <   ( R a n k   &   A D C _ R E G _ R A N K _ I D _ S Q R X _ M A S K ) )  
                                           > >   ( R a n k   &   A D C _ R E G _ R A N K _ I D _ S Q R X _ M A S K )  
                                         ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e   o n   A D C   g r o u p   r e g u l a r .  
     *   @ n o t e       D e s c r i p t i o n   o f   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e :  
     *                   -   s i n g l e   m o d e :   o n e   c o n v e r s i o n   p e r   t r i g g e r  
     *                   -   c o n t i n u o u s   m o d e :   a f t e r   t h e   f i r s t   t r i g g e r ,   f o l l o w i n g  
     *                       c o n v e r s i o n s   l a u n c h e d   s u c c e s s i v e l y   a u t o m a t i c a l l y .  
     *   @ n o t e       I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   g r o u p   r e g u l a r    
     *                   c o n t i n u o u s   m o d e   a n d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e .  
     *   @ r m t o l l   C R 2             C O N T                       L L _ A D C _ R E G _ S e t C o n t i n u o u s M o d e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     C o n t i n u o u s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ C O N V _ S I N G L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ C O N V _ C O N T I N U O U S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t C o n t i n u o u s M o d e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   C o n t i n u o u s )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 2 ,   A D C _ C R 2 _ C O N T ,   C o n t i n u o u s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e   o n   A D C   g r o u p   r e g u l a r .  
     *   @ n o t e       D e s c r i p t i o n   o f   A D C   c o n t i n u o u s   c o n v e r s i o n   m o d e :  
     *                   -   s i n g l e   m o d e :   o n e   c o n v e r s i o n   p e r   t r i g g e r  
     *                   -   c o n t i n u o u s   m o d e :   a f t e r   t h e   f i r s t   t r i g g e r ,   f o l l o w i n g  
     *                       c o n v e r s i o n s   l a u n c h e d   s u c c e s s i v e l y   a u t o m a t i c a l l y .  
     *   @ r m t o l l   C R 2             C O N T                       L L _ A D C _ R E G _ G e t C o n t i n u o u s M o d e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ C O N V _ S I N G L E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ C O N V _ C O N T I N U O U S  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t C o n t i n u o u s M o d e ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ C O N T ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a   t r a n s f e r :   n o   t r a n s f e r   o r  
     *                   t r a n s f e r   b y   D M A ,   a n d   D M A   r e q u e s t s   m o d e .  
     *   @ n o t e       I f   t r a n s f e r   b y   D M A   s e l e c t e d ,   s p e c i f i e s   t h e   D M A   r e q u e s t s  
     *                   m o d e :  
     *                   -   L i m i t e d   m o d e   ( O n e   s h o t   m o d e ) :   D M A   t r a n s f e r   r e q u e s t s   a r e   s t o p p e d  
     *                       w h e n   n u m b e r   o f   D M A   d a t a   t r a n s f e r s   ( n u m b e r   o f  
     *                       A D C   c o n v e r s i o n s )   i s   r e a c h e d .  
     *                       T h i s   A D C   m o d e   i s   i n t e n d e d   t o   b e   u s e d   w i t h   D M A   m o d e   n o n - c i r c u l a r .  
     *                   -   U n l i m i t e d   m o d e :   D M A   t r a n s f e r   r e q u e s t s   a r e   u n l i m i t e d ,  
     *                       w h a t e v e r   n u m b e r   o f   D M A   d a t a   t r a n s f e r s   ( n u m b e r   o f  
     *                       A D C   c o n v e r s i o n s ) .  
     *                       T h i s   A D C   m o d e   i s   i n t e n d e d   t o   b e   u s e d   w i t h   D M A   m o d e   c i r c u l a r .  
     *   @ n o t e       I f   A D C   D M A   r e q u e s t s   m o d e   i s   s e t   t o   u n l i m i t e d   a n d   D M A   i s   s e t   t o  
     *                   m o d e   n o n - c i r c u l a r :  
     *                   w h e n   D M A   t r a n s f e r s   s i z e   w i l l   b e   r e a c h e d ,   D M A   w i l l   s t o p   t r a n s f e r s   o f  
     *                   A D C   c o n v e r s i o n s   d a t a   A D C   w i l l   r a i s e   a n   o v e r r u n   e r r o r  
     *                 ( o v e r r u n   f l a g   a n d   i n t e r r u p t i o n   i f   e n a b l e d ) .  
     *   @ n o t e       T o   c o n f i g u r e   D M A   s o u r c e   a d d r e s s   ( p e r i p h e r a l   a d d r e s s ) ,  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ D M A _ G e t R e g A d d r ( ) .  
     *   @ r m t o l l   C R 2             D M A                         L L _ A D C _ R E G _ S e t D M A T r a n s f e r  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     D M A T r a n s f e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ N O N E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ U N L I M I T E D  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S e t D M A T r a n s f e r ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   D M A T r a n s f e r )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 2 ,   A D C _ C R 2 _ D M A ,   D M A T r a n s f e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a   t r a n s f e r :   n o   t r a n s f e r   o r  
     *                   t r a n s f e r   b y   D M A ,   a n d   D M A   r e q u e s t s   m o d e .  
     *   @ n o t e       I f   t r a n s f e r   b y   D M A   s e l e c t e d ,   s p e c i f i e s   t h e   D M A   r e q u e s t s  
     *                   m o d e :  
     *                   -   L i m i t e d   m o d e   ( O n e   s h o t   m o d e ) :   D M A   t r a n s f e r   r e q u e s t s   a r e   s t o p p e d  
     *                       w h e n   n u m b e r   o f   D M A   d a t a   t r a n s f e r s   ( n u m b e r   o f  
     *                       A D C   c o n v e r s i o n s )   i s   r e a c h e d .  
     *                       T h i s   A D C   m o d e   i s   i n t e n d e d   t o   b e   u s e d   w i t h   D M A   m o d e   n o n - c i r c u l a r .  
     *                   -   U n l i m i t e d   m o d e :   D M A   t r a n s f e r   r e q u e s t s   a r e   u n l i m i t e d ,  
     *                       w h a t e v e r   n u m b e r   o f   D M A   d a t a   t r a n s f e r s   ( n u m b e r   o f  
     *                       A D C   c o n v e r s i o n s ) .  
     *                       T h i s   A D C   m o d e   i s   i n t e n d e d   t o   b e   u s e d   w i t h   D M A   m o d e   c i r c u l a r .  
     *   @ n o t e       I f   A D C   D M A   r e q u e s t s   m o d e   i s   s e t   t o   u n l i m i t e d   a n d   D M A   i s   s e t   t o  
     *                   m o d e   n o n - c i r c u l a r :  
     *                   w h e n   D M A   t r a n s f e r s   s i z e   w i l l   b e   r e a c h e d ,   D M A   w i l l   s t o p   t r a n s f e r s   o f  
     *                   A D C   c o n v e r s i o n s   d a t a   A D C   w i l l   r a i s e   a n   o v e r r u n   e r r o r  
     *                   ( o v e r r u n   f l a g   a n d   i n t e r r u p t i o n   i f   e n a b l e d ) .  
     *   @ n o t e       T o   c o n f i g u r e   D M A   s o u r c e   a d d r e s s   ( p e r i p h e r a l   a d d r e s s ) ,  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ D M A _ G e t R e g A d d r ( ) .  
     *   @ r m t o l l   C R 2             D M A                         L L _ A D C _ R E G _ G e t D M A T r a n s f e r  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ N O N E  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ D M A _ T R A N S F E R _ U N L I M I T E D  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ G e t D M A T r a n s f e r ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ D M A ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ G r o u p _ I n j e c t e d   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   g r o u p   i n j e c t e d  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   s o u r c e :  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,  
     *                   e x t e r n a l   i n t e r r u p t   l i n e ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   e x t e r n a l   t r i g g e r   i s   s e t   w i t h   t r i g g e r   p o l a r i t y :  
     *                   r i s i n g   e d g e   ( o n l y   t r i g g e r   p o l a r i t y   a v a i l a b l e   o n   t h i s   S T M 3 2   s e r i e ) .  
     *   @ n o t e       A v a i l a b i l i t y   o f   p a r a m e t e r s   o f   t r i g g e r   s o u r c e s   f r o m   t i m e r    
     *                   d e p e n d s   o n   t i m e r s   a v a i l a b i l i t y   o n   t h e   s e l e c t e d   d e v i c e .  
     *   @ r m t o l l   C R 2             J E X T S E L                 L L _ A D C _ I N J _ S e t T r i g g e r S o u r c e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     T r i g g e r S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ S O F T W A R E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ T R G O           ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ C H 4             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ T R G O           ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ C H 1             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 3 _ C H 4             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ T R G O           ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ E X T I _ L I N E 1 5       ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4             ( 2 ) ( 4 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4 _ A D C 3   ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ C H 3             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 2             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ T R G O           ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ C H 4             ( 3 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n   a l l   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 2 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 3 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 4 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t T r i g g e r S o u r c e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   T r i g g e r S o u r c e )  
 {  
 / *   N o t e :   O n   t h i s   S T M 3 2   s e r i e ,   A D C   g r o u p   i n j e c t e d   e x t e r n a l   t r i g g e r   e d g e               * /  
 / *               i s   u s e d   t o   p e r f o r m   a   A D C   c o n v e r s i o n   s t a r t .                                                       * /  
 / *               T h i s   f u n c t i o n   d o e s   n o t   s e t   e x t e r n a l   t r i g g e r   e d g e .                                         * /  
 / *               T h i s   f e a t u r e   i s   s e t   u s i n g   f u n c t i o n                                                                       * /  
 / *               @ r e f   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n E x t T r i g ( ) .                                                         * /  
     M O D I F Y _ R E G ( A D C x - > C R 2 ,   A D C _ C R 2 _ J E X T S E L ,   ( T r i g g e r S o u r c e   &   A D C _ C R 2 _ J E X T S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   s o u r c e :  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   f r o m   e x t e r n a l   I P   ( t i m e r   e v e n t ,  
     *                   e x t e r n a l   i n t e r r u p t   l i n e ) .  
     *   @ n o t e       T o   d e t e r m i n e   w h e t h e r   g r o u p   i n j e c t e d   t r i g g e r   s o u r c e   i s  
     *                   i n t e r n a l   ( S W   s t a r t )   o r   e x t e r n a l ,   w i t h o u t   d e t a i l  
     *                   o f   w h i c h   p e r i p h e r a l   i s   s e l e c t e d   a s   e x t e r n a l   t r i g g e r ,  
     *                   ( e q u i v a l e n t   t o    
     *                   " i f ( L L _ A D C _ I N J _ G e t T r i g g e r S o u r c e ( A D C 1 )   = =   L L _ A D C _ I N J _ T R I G _ S O F T W A R E ) " )  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ I s T r i g g e r S o u r c e S W S t a r t .  
     *   @ n o t e       A v a i l a b i l i t y   o f   p a r a m e t e r s   o f   t r i g g e r   s o u r c e s   f r o m   t i m e r    
     *                   d e p e n d s   o n   t i m e r s   a v a i l a b i l i t y   o n   t h e   s e l e c t e d   d e v i c e .  
     *   @ r m t o l l   C R 2             J E X T S E L                 L L _ A D C _ I N J _ G e t T r i g g e r S o u r c e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ S O F T W A R E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ T R G O           ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 1 _ C H 4             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ T R G O           ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 2 _ C H 1             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 3 _ C H 4             ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ T R G O           ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ E X T I _ L I N E 1 5       ( 2 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4             ( 2 ) ( 4 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4 _ A D C 3   ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 4 _ C H 3             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 2             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 8 _ C H 4             ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ T R G O           ( 3 )  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ T I M 5 _ C H 4             ( 3 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n   a l l   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2 ,   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 2 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 1 ,   A D C 2   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 3 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e s :   A D C 3   ( f o r   A D C   i n s t a n c e s   A D C x   a v a i l a b l e   o n   t h e   s e l e c t e d   d e v i c e ) . \ n  
     *                   ( 4 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   h i g h - d e n s i t y   a n d   X L - d e n s i t y   d e v i c e s .   A   r e m a p   o f   t r i g g e r   m u s t   b e   d o n e   a t   t o p   l e v e l   ( r e f e r   t o   A F I O   p e r i p h e r a l ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t T r i g g e r S o u r c e ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ J E X T S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r   s o u r c e   i n t e r n a l   ( S W   s t a r t )  
                         o r   e x t e r n a l  
     *   @ n o t e       I n   c a s e   o f   g r o u p   i n j e c t e d   t r i g g e r   s o u r c e   s e t   t o   e x t e r n a l   t r i g g e r ,  
     *                   t o   d e t e r m i n e   w h i c h   p e r i p h e r a l   i s   s e l e c t e d   a s   e x t e r n a l   t r i g g e r ,  
     *                   u s e   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ G e t T r i g g e r S o u r c e .  
     *   @ r m t o l l   C R 2             J E X T S E L                 L L _ A D C _ I N J _ I s T r i g g e r S o u r c e S W S t a r t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   V a l u e   " 0 "   i f   t r i g g e r   s o u r c e   e x t e r n a l   t r i g g e r  
     *                   V a l u e   " 1 "   i f   t r i g g e r   s o u r c e   S W   s t a r t .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ I s T r i g g e r S o u r c e S W S t a r t ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ J E X T S E L )   = =   L L _ A D C _ I N J _ T R I G _ S O F T W A R E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   l e n g t h   a n d   s c a n   d i r e c t i o n .  
     *   @ n o t e       T h i s   f u n c t i o n   p e r f o r m s   c o n f i g u r a t i o n   o f :  
     *                   -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e .  
     *                   -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                       s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   r a n k   1   t o   r a n k   n ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   g r o u p   i n j e c t e d   s e q u e n c e r   c o n f i g u r a t i o n  
     *                   i s   c o n d i t i o n e d   t o   A D C   i n s t a n c e   s e q u e n c e r   m o d e .  
     *                   I f   A D C   i n s t a n c e   s e q u e n c e r   m o d e   i s   d i s a b l e d ,   s e q u e n c e r s   o f  
     *                   a l l   g r o u p s   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d )   c a n   b e   c o n f i g u r e d  
     *                   b u t   t h e i r   e x e c u t i o n   i s   d i s a b l e d   ( l i m i t e d   t o   r a n k   1 ) .  
     *                   R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( ) .  
     *   @ n o t e       S e q u e n c e r   d i s a b l e d   i s   e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :  
     *                   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l .  
     *   @ r m t o l l   J S Q R           J L                           L L _ A D C _ I N J _ S e t S e q u e n c e r L e n g t h  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     S e q u e n c e r N b R a n k s   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t S e q u e n c e r L e n g t h ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   S e q u e n c e r N b R a n k s )  
 {  
     M O D I F Y _ R E G ( A D C x - > J S Q R ,   A D C _ J S Q R _ J L ,   S e q u e n c e r N b R a n k s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   l e n g t h   a n d   s c a n   d i r e c t i o n .  
     *   @ n o t e       T h i s   f u n c t i o n   r e t r i e v e s :  
     *                   -   S e q u e n c e   l e n g t h :   N u m b e r   o f   r a n k s   i n   t h e   s c a n   s e q u e n c e .  
     *                   -   S e q u e n c e   d i r e c t i o n :   U n l e s s   s p e c i f i e d   i n   p a r a m e t e r s ,   s e q u e n c e r  
     *                       s c a n   d i r e c t i o n   i s   f o r w a r d   ( f r o m   r a n k   1   t o   r a n k   n ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   g r o u p   i n j e c t e d   s e q u e n c e r   c o n f i g u r a t i o n  
     *                   i s   c o n d i t i o n e d   t o   A D C   i n s t a n c e   s e q u e n c e r   m o d e .  
     *                   I f   A D C   i n s t a n c e   s e q u e n c e r   m o d e   i s   d i s a b l e d ,   s e q u e n c e r s   o f  
     *                   a l l   g r o u p s   ( g r o u p   r e g u l a r ,   g r o u p   i n j e c t e d )   c a n   b e   c o n f i g u r e d  
     *                   b u t   t h e i r   e x e c u t i o n   i s   d i s a b l e d   ( l i m i t e d   t o   r a n k   1 ) .  
     *                   R e f e r   t o   f u n c t i o n   @ r e f   L L _ A D C _ S e t S e q u e n c e r s S c a n M o d e ( ) .  
     *   @ n o t e       S e q u e n c e r   d i s a b l e d   i s   e q u i v a l e n t   t o   s e q u e n c e r   o f   1   r a n k :  
     *                   A D C   c o n v e r s i o n   o n   o n l y   1   c h a n n e l .  
     *   @ r m t o l l   J S Q R           J L                           L L _ A D C _ I N J _ G e t S e q u e n c e r L e n g t h  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 2 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 3 R A N K S  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ S C A N _ E N A B L E _ 4 R A N K S  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t S e q u e n c e r L e n g t h ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > J S Q R ,   A D C _ J S Q R _ J L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :  
     *                   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d  
     *                   n u m b e r   o f   r a n k s .  
     *   @ n o t e       I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   g r o u p   i n j e c t e d  
     *                   a u t o - i n j e c t e d   m o d e   a n d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e .  
     *   @ r m t o l l   C R 1             D I S C E N                   L L _ A D C _ I N J _ S e t S e q u e n c e r D i s c o n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     S e q D i s c o n t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ 1 R A N K  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t S e q u e n c e r D i s c o n t ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   S e q D i s c o n t )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 1 ,   A D C _ C R 1 _ J D I S C E N ,   S e q D i s c o n t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e :  
     *                   s e q u e n c e   s u b d i v i d e d   a n d   s c a n   c o n v e r s i o n s   i n t e r r u p t e d   e v e r y   s e l e c t e d  
     *                   n u m b e r   o f   r a n k s .  
     *   @ r m t o l l   C R 1             D I S C E N                   L L _ A D C _ R E G _ G e t S e q u e n c e r D i s c o n t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ S E Q _ D I S C O N T _ 1 R A N K  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t S e q u e n c e r D i s c o n t ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ J D I S C E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e :   c h a n n e l   o n   t h e   s e l e c t e d  
     *                   s e q u e n c e   r a n k .  
     *   @ n o t e       D e p e n d i n g   o n   d e v i c e s   a n d   p a c k a g e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t o   m e a s u r e   i n t e r n a l   c h a n n e l s   ( V r e f I n t ,  
     *                   T e m p S e n s o r ,   . . . ) ,   m e a s u r e m e n t   p a t h s   t o   i n t e r n a l   c h a n n e l s   m u s t   b e  
     *                   e n a b l e d   s e p a r a t e l y .  
     *                   T h i s   c a n   b e   d o n e   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ S e t C o m m o n P a t h I n t e r n a l C h ( ) .  
     *   @ r m t o l l   J S Q R           J S Q 1                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 2                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 3                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 4                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     / *   S e t   b i t s   w i t h   c o n t e n t   o f   p a r a m e t e r   " C h a n n e l "   w i t h   b i t s   p o s i t i o n                     * /  
     / *   i n   r e g i s t e r   d e p e n d i n g   o n   p a r a m e t e r   " R a n k " .                                                               * /  
     / *   P a r a m e t e r s   " R a n k "   a n d   " C h a n n e l "   a r e   u s e d   w i t h   m a s k s   b e c a u s e   c o n t a i n i n g       * /  
     / *   o t h e r   b i t s   r e s e r v e d   f o r   o t h e r   p u r p o s e .                                                                       * /  
     u i n t 3 2 _ t   t m p r e g 1   =   ( R E A D _ B I T ( A D C x - > J S Q R ,   A D C _ J S Q R _ J L )   > >   A D C _ J S Q R _ J L _ P o s )   +   1 U ;  
      
     M O D I F Y _ R E G ( A D C x - > J S Q R ,  
                           A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K   < <   ( 5 U   *   ( u i n t 8 _ t ) ( ( ( R a n k )   +   3 U )   -   ( t m p r e g 1 ) ) ) ,  
                           ( C h a n n e l   &   A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K )   < <   ( 5 U   *   ( u i n t 8 _ t ) ( ( ( R a n k )   +   3 U )   -   ( t m p r e g 1 ) ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   s e q u e n c e :   c h a n n e l   o n   t h e   s e l e c t e d  
     *                   s e q u e n c e   r a n k .  
     *   @ n o t e       D e p e n d i n g   o n   d e v i c e s   a n d   p a c k a g e s ,   s o m e   c h a n n e l s   m a y   n o t   b e   a v a i l a b l e .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   c h a n n e l s   a v a i l a b i l i t y .  
     *   @ n o t e       U s a g e   o f   t h e   r e t u r n e d   c h a n n e l   n u m b e r :  
     *                   -   T o   r e i n j e c t   t h i s   c h a n n e l   i n t o   a n o t h e r   f u n c t i o n   L L _ A D C _ x x x :  
     *                       t h e   r e t u r n e d   c h a n n e l   n u m b e r   i s   o n l y   p a r t l y   f o r m a t t e d   o n   d e f i n i t i o n  
     *                       o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x .   T h e r e f o r e ,   i t   h a s   t o   b e   c o m p a r e d  
     *                       w i t h   p a r t s   o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x   o r   u s i n g  
     *                       h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *                       T h e n   t h e   s e l e c t e d   l i t e r a l   L L _ A D C _ C H A N N E L _ x   c a n   b e   u s e d  
     *                       a s   p a r a m e t e r   f o r   a n o t h e r   f u n c t i o n .  
     *                   -   T o   g e t   t h e   c h a n n e l   n u m b e r   i n   d e c i m a l   f o r m a t :  
     *                       p r o c e s s   t h e   r e t u r n e d   v a l u e   w i t h   t h e   h e l p e r   m a c r o  
     *                       @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *   @ r m t o l l   J S Q R           J S Q 1                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 2                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 3                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s \ n  
     *                   J S Q R           J S Q 4                       L L _ A D C _ I N J _ S e t S e q u e n c e r R a n k s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 . \ n  
     *                   ( 1 )   F o r   A D C   c h a n n e l   r e a d   b a c k   f r o m   A D C   r e g i s t e r ,  
     *                           c o m p a r i s o n   w i t h   i n t e r n a l   c h a n n e l   p a r a m e t e r   t o   b e   d o n e  
     *                           u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ I N T E R N A L _ T O _ E X T E R N A L ( ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t S e q u e n c e r R a n k s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   ( R E A D _ B I T ( A D C x - > J S Q R ,   A D C _ J S Q R _ J L )   > >   A D C _ J S Q R _ J L _ P o s )     +   1 U ;  
      
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > J S Q R ,  
                                                           A D C _ C H A N N E L _ I D _ N U M B E R _ M A S K   < <   ( 5 U   *   ( u i n t 8 _ t ) ( ( ( R a n k )   +   3 U )   -   ( t m p r e g 1 ) ) ) )  
                                         > >   ( 5 U   *   ( u i n t 8 _ t ) ( ( ( R a n k )   +   3 U )   -   ( t m p r e g 1 ) ) )  
                                       ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r :  
     *                   i n d e p e n d e n t   o r   f r o m   A D C   g r o u p   r e g u l a r .  
     *   @ n o t e       T h i s   m o d e   c a n   b e   u s e d   t o   e x t e n d   n u m b e r   o f   d a t a   r e g i s t e r s  
     *                   u p d a t e d   a f t e r   o n e   A D C   c o n v e r s i o n   t r i g g e r   a n d   w i t h   d a t a    
     *                   p e r m a n e n t l y   k e p t   ( n o t   e r a s e d   b y   s u c c e s s i v e   c o n v e r s i o n s   o f   s c a n   o f  
     *                   A D C   s e q u e n c e r   r a n k s ) ,   u p   t o   5   d a t a   r e g i s t e r s :  
     *                   1   d a t a   r e g i s t e r   o n   A D C   g r o u p   r e g u l a r ,   4   d a t a   r e g i s t e r s  
     *                   o n   A D C   g r o u p   i n j e c t e d .                          
     *   @ n o t e       I f   A D C   g r o u p   i n j e c t e d   i n j e c t e d   t r i g g e r   s o u r c e   i s   s e t   t o   a n  
     *                   e x t e r n a l   t r i g g e r ,   t h i s   f e a t u r e   m u s t   b e   m u s t   b e   s e t   t o  
     *                   i n d e p e n d e n t   t r i g g e r .  
     *                   A D C   g r o u p   i n j e c t e d   a u t o m a t i c   t r i g g e r   i s   c o m p l i a n t   o n l y   w i t h    
     *                   g r o u p   i n j e c t e d   t r i g g e r   s o u r c e   s e t   t o   S W   s t a r t ,   w i t h o u t   a n y    
     *                   f u r t h e r   a c t i o n   o n     A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   s t a r t   o r   s t o p :    
     *                   i n   t h i s   c a s e ,   A D C   g r o u p   i n j e c t e d   i s   c o n t r o l l e d   o n l y    
     *                   f r o m   A D C   g r o u p   r e g u l a r .  
     *   @ n o t e       I t   i s   n o t   p o s s i b l e   t o   e n a b l e   b o t h   A D C   g r o u p   i n j e c t e d  
     *                   a u t o - i n j e c t e d   m o d e   a n d   s e q u e n c e r   d i s c o n t i n u o u s   m o d e .  
     *   @ r m t o l l   C R 1             J A U T O                     L L _ A D C _ I N J _ S e t T r i g A u t o  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     T r i g A u t o   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ I N D E P E N D E N T  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ F R O M _ G R P _ R E G U L A R  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t T r i g A u t o ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   T r i g A u t o )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 1 ,   A D C _ C R 1 _ J A U T O ,   T r i g A u t o ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   t r i g g e r :  
     *                   i n d e p e n d e n t   o r   f r o m   A D C   g r o u p   r e g u l a r .  
     *   @ r m t o l l   C R 1             J A U T O                     L L _ A D C _ I N J _ G e t T r i g A u t o  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ I N D E P E N D E N T  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ F R O M _ G R P _ R E G U L A R  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t T r i g A u t o ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ J A U T O ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   g r o u p   i n j e c t e d   o f f s e t .  
     *   @ n o t e       I t   s e t s :  
     *                   -   A D C   g r o u p   i n j e c t e d   r a n k   t o   w h i c h   t h e   o f f s e t   p r o g r a m m e d  
     *                       w i l l   b e   a p p l i e d  
     *                   -   O f f s e t   l e v e l   ( o f f s e t   t o   b e   s u b t r a c t e d   f r o m   t h e   r a w  
     *                       c o n v e r t e d   d a t a ) .  
     *                   C a u t i o n :   O f f s e t   f o r m a t   i s   d e p e n d e n t   t o   A D C   r e s o l u t i o n :  
     *                   o f f s e t   h a s   t o   b e   l e f t - a l i g n e d   o n   b i t   1 1 ,   t h e   L S B   ( r i g h t   b i t s )  
     *                   a r e   s e t   t o   0 .  
     *   @ n o t e       O f f s e t   c a n n o t   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T o   e m u l a t e   o f f s e t   d i s a b l e d ,   s e t   a n   o f f s e t   v a l u e   e q u a l   t o   0 .  
     *   @ r m t o l l   J O F R 1         J O F F S E T 1               L L _ A D C _ I N J _ S e t O f f s e t \ n  
     *                   J O F R 2         J O F F S E T 2               L L _ A D C _ I N J _ S e t O f f s e t \ n  
     *                   J O F R 3         J O F F S E T 3               L L _ A D C _ I N J _ S e t O f f s e t \ n  
     *                   J O F R 4         J O F F S E T 4               L L _ A D C _ I N J _ S e t O f f s e t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ p a r a m     O f f s e t L e v e l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S e t O f f s e t ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k ,   u i n t 3 2 _ t   O f f s e t L e v e l )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > J O F R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ I N J _ J O F R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     M O D I F Y _ R E G ( * p r e g ,  
                           A D C _ J O F R 1 _ J O F F S E T 1 ,  
                           O f f s e t L e v e l ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   o f f s e t .  
     *   @ n o t e       I t   g i v e s   o f f s e t   l e v e l   ( o f f s e t   t o   b e   s u b t r a c t e d   f r o m   t h e   r a w   c o n v e r t e d   d a t a ) .  
     *                   C a u t i o n :   O f f s e t   f o r m a t   i s   d e p e n d e n t   t o   A D C   r e s o l u t i o n :  
     *                   o f f s e t   h a s   t o   b e   l e f t - a l i g n e d   o n   b i t   1 1 ,   t h e   L S B   ( r i g h t   b i t s )  
     *                   a r e   s e t   t o   0 .  
     *   @ r m t o l l   J O F R 1         J O F F S E T 1               L L _ A D C _ I N J _ G e t O f f s e t \ n  
     *                   J O F R 2         J O F F S E T 2               L L _ A D C _ I N J _ G e t O f f s e t \ n  
     *                   J O F R 3         J O F F S E T 3               L L _ A D C _ I N J _ G e t O f f s e t \ n  
     *                   J O F R 4         J O F F S E T 4               L L _ A D C _ I N J _ G e t O f f s e t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ G e t O f f s e t ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > J O F R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ I N J _ J O F R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( * p r e g ,  
                                                           A D C _ J O F R 1 _ J O F F S E T 1 )  
                                       ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ C h a n n e l s   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   c h a n n e l s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   s a m p l i n g   t i m e   o f   t h e   s e l e c t e d   A D C   c h a n n e l  
     *                   U n i t :   A D C   c l o c k   c y c l e s .  
     *   @ n o t e       O n   t h i s   d e v i c e ,   s a m p l i n g   t i m e   i s   o n   c h a n n e l   s c o p e :   i n d e p e n d e n t l y  
     *                   o f   c h a n n e l   m a p p e d   o n   A D C   g r o u p   r e g u l a r   o r   i n j e c t e d .  
     *   @ n o t e       I n   c a s e   o f   i n t e r n a l   c h a n n e l   ( V r e f I n t ,   T e m p S e n s o r ,   . . . )   t o   b e  
     *                   c o n v e r t e d :  
     *                   s a m p l i n g   t i m e   c o n s t r a i n t s   m u s t   b e   r e s p e c t e d   ( s a m p l i n g   t i m e   c a n   b e  
     *                   a d j u s t e d   i n   f u n c t i o n   o f   A D C   c l o c k   f r e q u e n c y   a n d   s a m p l i n g   t i m e  
     *                   s e t t i n g ) .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t   f o r   t i m i n g s   v a l u e s   ( p a r a m e t e r s   T S _ v r e f i n t ,  
     *                   T S _ t e m p ,   . . . ) .  
     *   @ n o t e       C o n v e r s i o n   t i m e   i s   t h e   a d d i t i o n   o f   s a m p l i n g   t i m e   a n d   p r o c e s s i n g   t i m e .  
     *                   R e f e r   t o   r e f e r e n c e   m a n u a l   f o r   A D C   p r o c e s s i n g   t i m e   o f  
     *                   t h i s   S T M 3 2   s e r i e .  
     *   @ n o t e       I n   c a s e   o f   A D C   c o n v e r s i o n   o f   i n t e r n a l   c h a n n e l   ( V r e f I n t ,  
     *                   t e m p e r a t u r e   s e n s o r ,   . . . ) ,   a   s a m p l i n g   t i m e   m i n i m u m   v a l u e  
     *                   i s   r e q u i r e d .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t .  
     *   @ r m t o l l   S M P R 1         S M P 1 7                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 6                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 5                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 4                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 3                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 2                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 1                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 0                     L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 9                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 8                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 7                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 6                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 5                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 4                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 3                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 2                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 1                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 0                       L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ p a r a m     S a m p l i n g T i m e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 1 C Y C L E _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 7 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 1 3 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 2 8 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 4 1 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 5 5 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 7 1 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 2 3 9 C Y C L E S _ 5  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t C h a n n e l S a m p l i n g T i m e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   S a m p l i n g T i m e )  
 {  
     / *   S e t   b i t s   w i t h   c o n t e n t   o f   p a r a m e t e r   " S a m p l i n g T i m e "   w i t h   b i t s   p o s i t i o n           * /  
     / *   i n   r e g i s t e r   a n d   r e g i s t e r   p o s i t i o n   d e p e n d i n g   o n   p a r a m e t e r   " C h a n n e l " .             * /  
     / *   P a r a m e t e r   " C h a n n e l "   i s   u s e d   w i t h   m a s k s   b e c a u s e   c o n t a i n i n g                                 * /  
     / *   o t h e r   b i t s   r e s e r v e d   f o r   o t h e r   p u r p o s e .                                                                       * /  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > S M P R 1 ,   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     M O D I F Y _ R E G ( * p r e g ,  
                           A D C _ S M P R 2 _ S M P 0   < <   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K ) ,  
                           S a m p l i n g T i m e       < <   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   s a m p l i n g   t i m e   o f   t h e   s e l e c t e d   A D C   c h a n n e l  
     *                   U n i t :   A D C   c l o c k   c y c l e s .  
     *   @ n o t e       O n   t h i s   d e v i c e ,   s a m p l i n g   t i m e   i s   o n   c h a n n e l   s c o p e :   i n d e p e n d e n t l y  
     *                   o f   c h a n n e l   m a p p e d   o n   A D C   g r o u p   r e g u l a r   o r   i n j e c t e d .  
     *   @ n o t e       C o n v e r s i o n   t i m e   i s   t h e   a d d i t i o n   o f   s a m p l i n g   t i m e   a n d   p r o c e s s i n g   t i m e .  
     *                   R e f e r   t o   r e f e r e n c e   m a n u a l   f o r   A D C   p r o c e s s i n g   t i m e   o f  
     *                   t h i s   S T M 3 2   s e r i e .  
     *   @ r m t o l l   S M P R 1         S M P 1 7                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 6                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 5                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 4                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 3                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 2                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 1                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 1         S M P 1 0                     L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 9                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 8                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 7                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 6                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 5                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 4                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 3                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 2                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 1                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e \ n  
     *                   S M P R 2         S M P 0                       L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     C h a n n e l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 8  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 9  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 0  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 1  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 2  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 3  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 4  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 5  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 6  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ 1 7  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ V R E F I N T             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ C H A N N E L _ T E M P S E N S O R       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 1 C Y C L E _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 7 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 1 3 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 2 8 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 4 1 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 5 5 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 7 1 C Y C L E S _ 5  
     *                   @ a r g   @ r e f   L L _ A D C _ S A M P L I N G T I M E _ 2 3 9 C Y C L E S _ 5  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t C h a n n e l S a m p l i n g T i m e ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   C h a n n e l )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > S M P R 1 ,   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( * p r e g ,  
                                                           A D C _ S M P R 2 _ S M P 0   < <   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K ) )  
                                         > >   _ _ A D C _ M A S K _ S H I F T ( C h a n n e l ,   A D C _ C H A N N E L _ S M P x _ B I T O F F S E T _ M A S K )  
                                       ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ A n a l o g W a t c h d o g   C o n f i g u r a t i o n   o f   A D C   t r a n s v e r s a l   s c o p e :   a n a l o g   w a t c h d o g  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   A D C   a n a l o g   w a t c h d o g   m o n i t o r e d   c h a n n e l s :  
     *                   a   s i n g l e   c h a n n e l   o r   a l l   c h a n n e l s ,  
     *                   o n   A D C   g r o u p s   r e g u l a r   a n d - o r   i n j e c t e d .  
     *   @ n o t e       O n c e   m o n i t o r e d   c h a n n e l s   a r e   s e l e c t e d ,   a n a l o g   w a t c h d o g  
     *                   i s   e n a b l e d .  
     *   @ n o t e       I n   c a s e   o f   n e e d   t o   d e f i n e   a   s i n g l e   c h a n n e l   t o   m o n i t o r  
     *                   w i t h   a n a l o g   w a t c h d o g   f r o m   s e q u e n c e r   c h a n n e l   d e f i n i t i o n ,  
     *                   u s e   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ A N A L O G W D _ C H A N N E L _ G R O U P ( ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   o n l y   1   k i n d   o f   a n a l o g   w a t c h d o g  
     *                   i n s t a n c e :  
     *                   -   A W D   s t a n d a r d   ( i n s t a n c e   A W D 1 ) :  
     *                       -   c h a n n e l s   m o n i t o r e d :   c a n   m o n i t o r   1   c h a n n e l   o r   a l l   c h a n n e l s .  
     *                       -   g r o u p s   m o n i t o r e d :   A D C   g r o u p s   r e g u l a r   a n d - o r   i n j e c t e d .  
     *                       -   r e s o l u t i o n :   r e s o l u t i o n   i s   n o t   l i m i t e d   ( c o r r e s p o n d s   t o  
     *                           A D C   r e s o l u t i o n   c o n f i g u r e d ) .  
     *   @ r m t o l l   C R 1             A W D 1 C H                   L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s \ n  
     *                   C R 1             A W D 1 S G L                 L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s \ n  
     *                   C R 1             A W D 1 E N                   L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     A W D C h a n n e l G r o u p   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G                     ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ I N J                     ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ V R E F I N T _ R E G _ I N J             ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ I N J               ( 1 )  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H _ T E M P S E N S O R _ R E G _ I N J       ( 1 )  
     *                    
     *                   ( 1 )   O n   S T M 3 2 F 1 ,   p a r a m e t e r   a v a i l a b l e   o n l y   o n   A D C   i n s t a n c e :   A D C 1 .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t A n a l o g W D M o n i t C h a n n e l s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   A W D C h a n n e l G r o u p )  
 {  
     M O D I F Y _ R E G ( A D C x - > C R 1 ,  
                           ( A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D S G L   |   A D C _ C R 1 _ A W D C H ) ,  
                           A W D C h a n n e l G r o u p ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   a n a l o g   w a t c h d o g   m o n i t o r e d   c h a n n e l .  
     *   @ n o t e       U s a g e   o f   t h e   r e t u r n e d   c h a n n e l   n u m b e r :  
     *                   -   T o   r e i n j e c t   t h i s   c h a n n e l   i n t o   a n o t h e r   f u n c t i o n   L L _ A D C _ x x x :  
     *                       t h e   r e t u r n e d   c h a n n e l   n u m b e r   i s   o n l y   p a r t l y   f o r m a t t e d   o n   d e f i n i t i o n  
     *                       o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x .   T h e r e f o r e ,   i t   h a s   t o   b e   c o m p a r e d  
     *                       w i t h   p a r t s   o f   l i t e r a l s   L L _ A D C _ C H A N N E L _ x   o r   u s i n g  
     *                       h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *                       T h e n   t h e   s e l e c t e d   l i t e r a l   L L _ A D C _ C H A N N E L _ x   c a n   b e   u s e d  
     *                       a s   p a r a m e t e r   f o r   a n o t h e r   f u n c t i o n .  
     *                   -   T o   g e t   t h e   c h a n n e l   n u m b e r   i n   d e c i m a l   f o r m a t :  
     *                       p r o c e s s   t h e   r e t u r n e d   v a l u e   w i t h   t h e   h e l p e r   m a c r o  
     *                       @ r e f   _ _ L L _ A D C _ C H A N N E L _ T O _ D E C I M A L _ N B ( ) .  
     *                       A p p l i c a b l e   o n l y   w h e n   t h e   a n a l o g   w a t c h d o g   i s   s e t   t o   m o n i t o r  
     *                       o n e   c h a n n e l .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   o n l y   1   k i n d   o f   a n a l o g   w a t c h d o g  
     *                   i n s t a n c e :  
     *                   -   A W D   s t a n d a r d   ( i n s t a n c e   A W D 1 ) :  
     *                       -   c h a n n e l s   m o n i t o r e d :   c a n   m o n i t o r   1   c h a n n e l   o r   a l l   c h a n n e l s .  
     *                       -   g r o u p s   m o n i t o r e d :   A D C   g r o u p s   r e g u l a r   a n d - o r   i n j e c t e d .  
     *                       -   r e s o l u t i o n :   r e s o l u t i o n   i s   n o t   l i m i t e d   ( c o r r e s p o n d s   t o  
     *                           A D C   r e s o l u t i o n   c o n f i g u r e d ) .  
     *   @ r m t o l l   C R 1             A W D 1 C H                   L L _ A D C _ G e t A n a l o g W D M o n i t C h a n n e l s \ n  
     *                   C R 1             A W D 1 S G L                 L L _ A D C _ G e t A n a l o g W D M o n i t C h a n n e l s \ n  
     *                   C R 1             A W D 1 E N                   L L _ A D C _ G e t A n a l o g W D M o n i t C h a n n e l s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ D I S A B L E  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ A L L _ C H A N N E L S _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 7 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 8 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ I N J    
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 9 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 0 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 1 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 2 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 3 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 4 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 5 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 6 _ R E G _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ I N J  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ C H A N N E L _ 1 7 _ R E G _ I N J  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t A n a l o g W D M o n i t C h a n n e l s ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > C R 1 ,   ( A D C _ C R 1 _ A W D E N   |   A D C _ C R 1 _ J A W D E N   |   A D C _ C R 1 _ A W D S G L   |   A D C _ C R 1 _ A W D C H ) ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   v a l u e   o f   t h r e s h o l d  
     *                   h i g h   o r   l o w .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   o n l y   1   k i n d   o f   a n a l o g   w a t c h d o g  
     *                   i n s t a n c e :  
     *                   -   A W D   s t a n d a r d   ( i n s t a n c e   A W D 1 ) :  
     *                       -   c h a n n e l s   m o n i t o r e d :   c a n   m o n i t o r   1   c h a n n e l   o r   a l l   c h a n n e l s .  
     *                       -   g r o u p s   m o n i t o r e d :   A D C   g r o u p s   r e g u l a r   a n d - o r   i n j e c t e d .  
     *                       -   r e s o l u t i o n :   r e s o l u t i o n   i s   n o t   l i m i t e d   ( c o r r e s p o n d s   t o  
     *                           A D C   r e s o l u t i o n   c o n f i g u r e d ) .  
     *   @ r m t o l l   H T R             H T                           L L _ A D C _ S e t A n a l o g W D T h r e s h o l d s \ n  
     *                   L T R             L T                           L L _ A D C _ S e t A n a l o g W D T h r e s h o l d s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     A W D T h r e s h o l d s H i g h L o w   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ T H R E S H O L D _ H I G H  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ T H R E S H O L D _ L O W  
     *   @ p a r a m     A W D T h r e s h o l d V a l u e :   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t A n a l o g W D T h r e s h o l d s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   A W D T h r e s h o l d s H i g h L o w ,   u i n t 3 2 _ t   A W D T h r e s h o l d V a l u e )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > H T R ,   A W D T h r e s h o l d s H i g h L o w ) ;  
      
     M O D I F Y _ R E G ( * p r e g ,  
                           A D C _ H T R _ H T ,  
                           A W D T h r e s h o l d V a l u e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   a n a l o g   w a t c h d o g   t h r e s h o l d   v a l u e   o f   t h r e s h o l d   h i g h   o r  
     *                   t h r e s h o l d   l o w .  
     *   @ n o t e       I n   c a s e   o f   A D C   r e s o l u t i o n   d i f f e r e n t   o f   1 2   b i t s ,  
     *                   a n a l o g   w a t c h d o g   t h r e s h o l d s   d a t a   r e q u i r e   a   s p e c i f i c   s h i f t .  
     *                   U s e   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ A N A L O G W D _ G E T _ T H R E S H O L D _ R E S O L U T I O N ( ) .  
     *   @ r m t o l l   H T R             H T                           L L _ A D C _ G e t A n a l o g W D T h r e s h o l d s \ n  
     *                   L T R             L T                           L L _ A D C _ G e t A n a l o g W D T h r e s h o l d s  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     A W D T h r e s h o l d s H i g h L o w   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ T H R E S H O L D _ H I G H  
     *                   @ a r g   @ r e f   L L _ A D C _ A W D _ T H R E S H O L D _ L O W  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
 * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t A n a l o g W D T h r e s h o l d s ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   A W D T h r e s h o l d s H i g h L o w )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > H T R ,   A W D T h r e s h o l d s H i g h L o w ) ;  
      
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( * p r e g ,   A D C _ H T R _ H T ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ C o n f i g u r a t i o n _ A D C _ M u l t i m o d e   C o n f i g u r a t i o n   o f   A D C   h i e r a r c h i c a l   s c o p e :   m u l t i m o d e  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *  
     *   @ b r i e f     S e t   A D C   m u l t i m o d e   c o n f i g u r a t i o n   t o   o p e r a t e   i n   i n d e p e n d e n t   m o d e  
     *                   o r   m u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s ) .  
     *   @ n o t e       I f   m u l t i m o d e   c o n f i g u r a t i o n :   t h e   s e l e c t e d   A D C   i n s t a n c e   i s  
     *                   e i t h e r   m a s t e r   o r   s l a v e   d e p e n d i n g   o n   h a r d w a r e .  
     *                   R e f e r   t o   r e f e r e n c e   m a n u a l .  
     *   @ r m t o l l   C R 1             D U A L M O D                 L L _ A D C _ S e t M u l t i m o d e  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ p a r a m     M u l t i m o d e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ I N D E P E N D E N T                            
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M U L T                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ F A S T          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ S L O W          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ I N J _ S I M U L T                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ I N J _ A L T E R N                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ S I M          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ A L T          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T F A S T _ I N J _ S I M  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T S L O W _ I N J _ S I M  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S e t M u l t i m o d e ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N ,   u i n t 3 2 _ t   M u l t i m o d e )  
 {  
     M O D I F Y _ R E G ( A D C x y _ C O M M O N - > C R 1 ,   A D C _ C R 1 _ D U A L M O D ,   M u l t i m o d e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   m u l t i m o d e   c o n f i g u r a t i o n   t o   o p e r a t e   i n   i n d e p e n d e n t   m o d e  
     *                   o r   m u l t i m o d e   ( f o r   d e v i c e s   w i t h   s e v e r a l   A D C   i n s t a n c e s ) .  
     *   @ n o t e       I f   m u l t i m o d e   c o n f i g u r a t i o n :   t h e   s e l e c t e d   A D C   i n s t a n c e   i s  
     *                   e i t h e r   m a s t e r   o r   s l a v e   d e p e n d i n g   o n   h a r d w a r e .  
     *                   R e f e r   t o   r e f e r e n c e   m a n u a l .  
     *   @ r m t o l l   C R 1             D U A L M O D                 L L _ A D C _ G e t M u l t i m o d e  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ I N D E P E N D E N T  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M U L T                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ F A S T          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T E R L _ S L O W          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ I N J _ S I M U L T                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ I N J _ A L T E R N                    
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ S I M          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ S I M _ I N J _ A L T          
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T F A S T _ I N J _ S I M  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ D U A L _ R E G _ I N T S L O W _ I N J _ S I M  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ G e t M u l t i m o d e ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x y _ C O M M O N - > C R 1 ,   A D C _ C R 1 _ D U A L M O D ) ) ;  
 }  
  
 # e n d i f   / *   A D C _ M U L T I M O D E _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ O p e r a t i o n _ A D C _ I n s t a n c e   O p e r a t i o n   o n   A D C   h i e r a r c h i c a l   s c o p e :   A D C   i n s t a n c e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   s e l e c t e d   A D C   i n s t a n c e .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   a f t e r   A D C   e n a b l e ,   a   d e l a y   f o r    
     *                   A D C   i n t e r n a l   a n a l o g   s t a b i l i z a t i o n   i s   r e q u i r e d   b e f o r e   p e r f o r m i n g   a  
     *                   A D C   c o n v e r s i o n   s t a r t .  
     *                   R e f e r   t o   d e v i c e   d a t a s h e e t ,   p a r a m e t e r   t S T A B .  
     *   @ r m t o l l   C R 2             A D O N                       L L _ A D C _ E n a b l e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ E n a b l e ( A D C _ T y p e D e f   * A D C x )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ A D O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   s e l e c t e d   A D C   i n s t a n c e .  
     *   @ r m t o l l   C R 2             A D O N                       L L _ A D C _ D i s a b l e  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ D i s a b l e ( A D C _ T y p e D e f   * A D C x )  
 {  
     C L E A R _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ A D O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   A D C   i n s t a n c e   e n a b l e   s t a t e .  
     *   @ r m t o l l   C R 2             A D O N                       L L _ A D C _ I s E n a b l e d  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   0 :   A D C   i s   d i s a b l e d ,   1 :   A D C   i s   e n a b l e d .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s E n a b l e d ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ A D O N )   = =   ( A D C _ C R 2 _ A D O N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t a r t   A D C   c a l i b r a t i o n   i n   t h e   m o d e   s i n g l e - e n d e d  
     *                   o r   d i f f e r e n t i a l   ( f o r   d e v i c e s   w i t h   d i f f e r e n t i a l   m o d e   a v a i l a b l e ) .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   b e f o r e   s t a r t i n g   a   c a l i b r a t i o n ,  
     *                   A D C   m u s t   b e   d i s a b l e d .  
     *                   A   m i n i m u m   n u m b e r   o f   A D C   c l o c k   c y c l e s   a r e   r e q u i r e d  
     *                   b e t w e e n   A D C   d i s a b l e   s t a t e   a n d   c a l i b r a t i o n   s t a r t .  
     *                   R e f e r   t o   l i t e r a l   @ r e f   L L _ A D C _ D E L A Y _ D I S A B L E _ C A L I B _ A D C _ C Y C L E S .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   h a r d w a r e   p r e r e q u i s i t e   b e f o r e   s t a r t i n g   a   c a l i b r a t i o n :  
                         t h e   A D C   m u s t   h a v e   b e e n   i n   p o w e r - o n   s t a t e   f o r   a t   l e a s t  
                         t w o   A D C   c l o c k   c y c l e s .  
     *   @ r m t o l l   C R 2             C A L                         L L _ A D C _ S t a r t C a l i b r a t i o n  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ S t a r t C a l i b r a t i o n ( A D C _ T y p e D e f   * A D C x )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ C A L ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   c a l i b r a t i o n   s t a t e .  
     *   @ r m t o l l   C R 2             C A L                         L L _ A D C _ I s C a l i b r a t i o n O n G o i n g  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   0 :   c a l i b r a t i o n   c o m p l e t e ,   1 :   c a l i b r a t i o n   i n   p r o g r e s s .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s C a l i b r a t i o n O n G o i n g ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ C A L )   = =   ( A D C _ C R 2 _ C A L ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ O p e r a t i o n _ A D C _ G r o u p _ R e g u l a r   O p e r a t i o n   o n   A D C   h i e r a r c h i c a l   s c o p e :   g r o u p   r e g u l a r  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h i s   f u n c t i o n   i s   r e l e v a n t   o n l y   f o r  
     *                   i n t e r n a l   t r i g g e r   ( S W   s t a r t ) ,   n o t   f o r   e x t e r n a l   t r i g g e r :  
     *                   -   I f   A D C   t r i g g e r   h a s   b e e n   s e t   t o   s o f t w a r e   s t a r t ,   A D C   c o n v e r s i o n  
     *                       s t a r t s   i m m e d i a t e l y .  
     *                   -   I f   A D C   t r i g g e r   h a s   b e e n   s e t   t o   e x t e r n a l   t r i g g e r ,   A D C   c o n v e r s i o n  
     *                       s t a r t   m u s t   b e   p e r f o r m e d   u s i n g   f u n c t i o n    
     *                       @ r e f   L L _ A D C _ R E G _ S t a r t C o n v e r s i o n E x t T r i g ( ) .  
     *                       ( i f   e x t e r n a l   t r i g g e r   e d g e   w o u l d   h a v e   b e e n   s e t   d u r i n g   A D C   o t h e r    
     *                       s e t t i n g s ,   A D C   c o n v e r s i o n   w o u l d   s t a r t   a t   t r i g g e r   e v e n t  
     *                       a s   s o o n   a s   A D C   i s   e n a b l e d ) .  
     *   @ r m t o l l   C R 2             S W S T A R T                 L L _ A D C _ R E G _ S t a r t C o n v e r s i o n S W S t a r t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S t a r t C o n v e r s i o n S W S t a r t ( A D C _ T y p e D e f   * A D C x )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   ( A D C _ C R 2 _ S W S T A R T   |   A D C _ C R 2 _ E X T T R I G ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t a r t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   f r o m   e x t e r n a l   t r i g g e r .  
     *   @ n o t e       A D C   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t   t r i g g e r   e v e n t   ( o n   t h e   s e l e c t e d  
     *                   t r i g g e r   e d g e )   f o l l o w i n g   t h e   A D C   s t a r t   c o n v e r s i o n   c o m m a n d .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h i s   f u n c t i o n   i s   r e l e v a n t   f o r    
     *                   A D C   c o n v e r s i o n   s t a r t   f r o m   e x t e r n a l   t r i g g e r .  
     *                   I f   i n t e r n a l   t r i g g e r   ( S W   s t a r t )   i s   n e e d e d ,   p e r f o r m   A D C   c o n v e r s i o n  
     *                   s t a r t   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ R E G _ S t a r t C o n v e r s i o n S W S t a r t ( ) .  
     *   @ r m t o l l   C R 2             E X T E N                     L L _ A D C _ R E G _ S t a r t C o n v e r s i o n E x t T r i g  
     *   @ p a r a m     E x t e r n a l T r i g g e r E d g e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ R E G _ T R I G _ E X T _ R I S I N G  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S t a r t C o n v e r s i o n E x t T r i g ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   E x t e r n a l T r i g g e r E d g e )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   E x t e r n a l T r i g g e r E d g e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   f r o m   e x t e r n a l   t r i g g e r .  
     *   @ n o t e       N o   m o r e   A D C   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t   t r i g g e r   e v e n t  
     *                   f o l l o w i n g   t h e   A D C   s t o p   c o n v e r s i o n   c o m m a n d .  
     *                   I f   a   c o n v e r s i o n   i s   o n - g o i n g ,   i t   w i l l   b e   c o m p l e t e d .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   s p e c i f i c   c o m m a n d  
     *                   t o   s t o p   a   c o n v e r s i o n   o n - g o i n g   o r   t o   s t o p   A D C   c o n v e r t i n g  
     *                   i n   c o n t i n u o u s   m o d e .   T h e s e   a c t i o n s   c a n   b e   p e r f o r m e d  
     *                   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ D i s a b l e ( ) .  
     *   @ r m t o l l   C R 2             E X T S E L                   L L _ A D C _ R E G _ S t o p C o n v e r s i o n E x t T r i g  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ R E G _ S t o p C o n v e r s i o n E x t T r i g ( A D C _ T y p e D e f   * A D C x )  
 {  
     C L E A R _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ E X T T R I G ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a ,   r a n g e   f i t   f o r  
     *                   a l l   A D C   c o n f i g u r a t i o n s :   a l l   A D C   r e s o l u t i o n s   a n d  
     *                   a l l   o v e r s a m p l i n g   i n c r e a s e d   d a t a   w i d t h   ( f o r   d e v i c e s  
     *                   w i t h   f e a t u r e   o v e r s a m p l i n g ) .  
     *   @ r m t o l l   D R               R D A T A                     L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 3 2  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0 0 0 0 0 0   a n d   M a x _ D a t a = 0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 3 2 ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 1 6 _ t ) ( R E A D _ B I T ( A D C x - > D R ,   A D C _ D R _ D A T A ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a ,   r a n g e   f i t   f o r  
     *                   A D C   r e s o l u t i o n   1 2   b i t s .  
     *   @ n o t e       F o r   d e v i c e s   w i t h   f e a t u r e   o v e r s a m p l i n g :   O v e r s a m p l i n g  
     *                   c a n   i n c r e a s e   d a t a   w i d t h ,   f u n c t i o n   f o r   e x t e n d e d   r a n g e  
     *                   m a y   b e   n e e d e d :   @ r e f   L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 3 2 .  
     *   @ r m t o l l   D R               R D A T A                     L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 1 2  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 1 6 _ t   L L _ A D C _ R E G _ R e a d C o n v e r s i o n D a t a 1 2 ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( u i n t 1 6 _ t ) ( R E A D _ B I T ( A D C x - > D R ,   A D C _ D R _ D A T A ) ) ;  
 }  
  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *  
     *   @ b r i e f     G e t   A D C   m u l t i m o d e   c o n v e r s i o n   d a t a   o f   A D C   m a s t e r ,   A D C   s l a v e  
     *                   o r   r a w   d a t a   w i t h   A D C   m a s t e r   a n d   s l a v e   c o n c a t e n a t e d .  
     *   @ n o t e       I f   r a w   d a t a   w i t h   A D C   m a s t e r   a n d   s l a v e   c o n c a t e n a t e d   i s   r e t r i e v e d ,  
     *                   a   m a c r o   i s   a v a i l a b l e   t o   g e t   t h e   c o n v e r s i o n   d a t a   o f  
     *                   A D C   m a s t e r   o r   A D C   s l a v e :   s e e   h e l p e r   m a c r o  
     *                   @ r e f   _ _ L L _ A D C _ M U L T I _ C O N V _ D A T A _ M A S T E R _ S L A V E ( ) .  
     *                   ( h o w e v e r   t h i s   m a c r o   i s   m a i n l y   i n t e n d e d   f o r   m u l t i m o d e  
     *                   t r a n s f e r   b y   D M A ,   b e c a u s e   t h i s   f u n c t i o n   c a n   d o   t h e   s a m e  
     *                   b y   g e t t i n g   m u l t i m o d e   c o n v e r s i o n   d a t a   o f   A D C   m a s t e r   o r   A D C   s l a v e  
     *                   s e p a r a t e l y ) .  
     *   @ r m t o l l   D R               D A T A                       L L _ A D C _ R E G _ R e a d M u l t i C o n v e r s i o n D a t a 3 2 \ n  
     *                   D R               A D C 2 D A T A               L L _ A D C _ R E G _ R e a d M u l t i C o n v e r s i o n D a t a 3 2  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ p a r a m     C o n v e r s i o n D a t a   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ M A S T E R  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ S L A V E  
     *                   @ a r g   @ r e f   L L _ A D C _ M U L T I _ M A S T E R _ S L A V E  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0 0 0 0 0 0   a n d   M a x _ D a t a = 0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ R E G _ R e a d M u l t i C o n v e r s i o n D a t a 3 2 ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   C o n v e r s i o n D a t a )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( A D C x - > D R ,  
                                                           A D C _ D R _ A D C 2 D A T A )  
                                         > >   P O S I T I O N _ V A L ( C o n v e r s i o n D a t a )  
                                       ) ;  
 }  
 # e n d i f   / *   A D C _ M U L T I M O D E _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ O p e r a t i o n _ A D C _ G r o u p _ I n j e c t e d   O p e r a t i o n   o n   A D C   h i e r a r c h i c a l   s c o p e :   g r o u p   i n j e c t e d  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h i s   f u n c t i o n   i s   r e l e v a n t   o n l y   f o r  
     *                   i n t e r n a l   t r i g g e r   ( S W   s t a r t ) ,   n o t   f o r   e x t e r n a l   t r i g g e r :  
     *                   -   I f   A D C   t r i g g e r   h a s   b e e n   s e t   t o   s o f t w a r e   s t a r t ,   A D C   c o n v e r s i o n  
     *                       s t a r t s   i m m e d i a t e l y .  
     *                   -   I f   A D C   t r i g g e r   h a s   b e e n   s e t   t o   e x t e r n a l   t r i g g e r ,   A D C   c o n v e r s i o n  
     *                       s t a r t   m u s t   b e   p e r f o r m e d   u s i n g   f u n c t i o n    
     *                       @ r e f   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n E x t T r i g ( ) .  
     *                       ( i f   e x t e r n a l   t r i g g e r   e d g e   w o u l d   h a v e   b e e n   s e t   d u r i n g   A D C   o t h e r    
     *                       s e t t i n g s ,   A D C   c o n v e r s i o n   w o u l d   s t a r t   a t   t r i g g e r   e v e n t  
     *                       a s   s o o n   a s   A D C   i s   e n a b l e d ) .  
     *   @ r m t o l l   C R 2             J S W S T A R T               L L _ A D C _ I N J _ S t a r t C o n v e r s i o n S W S t a r t  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n S W S t a r t ( A D C _ T y p e D e f   * A D C x )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   ( A D C _ C R 2 _ J S W S T A R T   |   A D C _ C R 2 _ J E X T T R I G ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t a r t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   f r o m   e x t e r n a l   t r i g g e r .  
     *   @ n o t e       A D C   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t   t r i g g e r   e v e n t   ( o n   t h e   s e l e c t e d  
     *                   t r i g g e r   e d g e )   f o l l o w i n g   t h e   A D C   s t a r t   c o n v e r s i o n   c o m m a n d .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h i s   f u n c t i o n   i s   r e l e v a n t   f o r    
     *                   A D C   c o n v e r s i o n   s t a r t   f r o m   e x t e r n a l   t r i g g e r .  
     *                   I f   i n t e r n a l   t r i g g e r   ( S W   s t a r t )   i s   n e e d e d ,   p e r f o r m   A D C   c o n v e r s i o n  
     *                   s t a r t   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n S W S t a r t ( ) .  
     *   @ r m t o l l   C R 2             J E X T E N                   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n E x t T r i g  
     *   @ p a r a m     E x t e r n a l T r i g g e r E d g e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ T R I G _ E X T _ R I S I N G  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S t a r t C o n v e r s i o n E x t T r i g ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   E x t e r n a l T r i g g e r E d g e )  
 {  
     S E T _ B I T ( A D C x - > C R 2 ,   E x t e r n a l T r i g g e r E d g e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   f r o m   e x t e r n a l   t r i g g e r .  
     *   @ n o t e       N o   m o r e   A D C   c o n v e r s i o n   w i l l   s t a r t   a t   n e x t   t r i g g e r   e v e n t  
     *                   f o l l o w i n g   t h e   A D C   s t o p   c o n v e r s i o n   c o m m a n d .  
     *                   I f   a   c o n v e r s i o n   i s   o n - g o i n g ,   i t   w i l l   b e   c o m p l e t e d .  
     *   @ n o t e       O n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   s p e c i f i c   c o m m a n d  
     *                   t o   s t o p   a   c o n v e r s i o n   o n - g o i n g   o r   t o   s t o p   A D C   c o n v e r t i n g  
     *                   i n   c o n t i n u o u s   m o d e .   T h e s e   a c t i o n s   c a n   b e   p e r f o r m e d  
     *                   u s i n g   f u n c t i o n   @ r e f   L L _ A D C _ D i s a b l e ( ) .  
     *   @ r m t o l l   C R 2             J E X T S E L                 L L _ A D C _ I N J _ S t o p C o n v e r s i o n E x t T r i g  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ I N J _ S t o p C o n v e r s i o n E x t T r i g ( A D C _ T y p e D e f   * A D C x )  
 {  
     C L E A R _ B I T ( A D C x - > C R 2 ,   A D C _ C R 2 _ J E X T T R I G ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   r e g u l a r   c o n v e r s i o n   d a t a ,   r a n g e   f i t   f o r  
     *                   a l l   A D C   c o n f i g u r a t i o n s :   a l l   A D C   r e s o l u t i o n s   a n d  
     *                   a l l   o v e r s a m p l i n g   i n c r e a s e d   d a t a   w i d t h   ( f o r   d e v i c e s  
     *                   w i t h   f e a t u r e   o v e r s a m p l i n g ) .  
     *   @ r m t o l l   J D R 1           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2 \ n  
     *                   J D R 2           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2 \ n  
     *                   J D R 3           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2 \ n  
     *                   J D R 4           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0 0 0 0 0 0   a n d   M a x _ D a t a = 0 x F F F F F F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2 ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > J D R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ I N J _ J D R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( * p r e g ,  
                                                           A D C _ J D R 1 _ J D A T A )  
                                       ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A D C   g r o u p   i n j e c t e d   c o n v e r s i o n   d a t a ,   r a n g e   f i t   f o r  
     *                   A D C   r e s o l u t i o n   1 2   b i t s .  
     *   @ n o t e       F o r   d e v i c e s   w i t h   f e a t u r e   o v e r s a m p l i n g :   O v e r s a m p l i n g  
     *                   c a n   i n c r e a s e   d a t a   w i d t h ,   f u n c t i o n   f o r   e x t e n d e d   r a n g e  
     *                   m a y   b e   n e e d e d :   @ r e f   L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 3 2 .  
     *   @ r m t o l l   J D R 1           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 1 2 \ n  
     *                   J D R 2           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 1 2 \ n  
     *                   J D R 3           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 1 2 \ n  
     *                   J D R 4           J D A T A                     L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 1 2  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ p a r a m     R a n k   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 1  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 2  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 3  
     *                   @ a r g   @ r e f   L L _ A D C _ I N J _ R A N K _ 4  
     *   @ r e t v a l   V a l u e   b e t w e e n   M i n _ D a t a = 0 x 0 0 0   a n d   M a x _ D a t a = 0 x F F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 1 6 _ t   L L _ A D C _ I N J _ R e a d C o n v e r s i o n D a t a 1 2 ( A D C _ T y p e D e f   * A D C x ,   u i n t 3 2 _ t   R a n k )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x - > J D R 1 ,   _ _ A D C _ M A S K _ S H I F T ( R a n k ,   A D C _ I N J _ J D R X _ R E G O F F S E T _ M A S K ) ) ;  
      
     r e t u r n   ( u i n t 1 6 _ t ) ( R E A D _ B I T ( * p r e g ,  
                                                           A D C _ J D R 1 _ J D A T A )  
                                       ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ F L A G _ M a n a g e m e n t   A D C   f l a g   m a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   S R               E O C                         L L _ A D C _ I s A c t i v e F l a g _ E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C x - > S R ,   L L _ A D C _ F L A G _ E O S )   = =   ( L L _ A D C _ F L A G _ E O S ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   S R               J E O C                       L L _ A D C _ I s A c t i v e F l a g _ J E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ J E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C x - > S R ,   L L _ A D C _ F L A G _ J E O S )   = =   ( L L _ A D C _ F L A G _ J E O S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   A D C   a n a l o g   w a t c h d o g   1   f l a g  
     *   @ r m t o l l   S R               A W D                         L L _ A D C _ I s A c t i v e F l a g _ A W D 1  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ A W D 1 ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > S R ,   L L _ A D C _ F L A G _ A W D 1 )   = =   ( L L _ A D C _ F L A G _ A W D 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   f l a g   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   S R               E O C                         L L _ A D C _ C l e a r F l a g _ E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ C l e a r F l a g _ E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     W R I T E _ R E G ( A D C x - > S R ,   ~ L L _ A D C _ F L A G _ E O S ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     C l e a r   f l a g   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   S R               J E O C                       L L _ A D C _ C l e a r F l a g _ J E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ C l e a r F l a g _ J E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     W R I T E _ R E G ( A D C x - > S R ,   ~ L L _ A D C _ F L A G _ J E O S ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   f l a g   A D C   a n a l o g   w a t c h d o g   1 .  
     *   @ r m t o l l   S R               A W D                         L L _ A D C _ C l e a r F l a g _ A W D 1  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ C l e a r F l a g _ A W D 1 ( A D C _ T y p e D e f   * A D C x )  
 {  
     W R I T E _ R E G ( A D C x - > S R ,   ~ L L _ A D C _ F L A G _ A W D 1 ) ;  
 }  
  
 # i f   d e f i n e d ( A D C _ M U L T I M O D E _ S U P P O R T )  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   o f   t h e   A D C   m a s t e r .  
     *   @ r m t o l l   S R               E O C                         L L _ A D C _ I s A c t i v e F l a g _ M S T _ E O S  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ M S T _ E O S ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C x y _ C O M M O N - > S R ,   A D C _ S R _ E O C )   = =   ( A D C _ S R _ E O C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s   o f   t h e   A D C   s l a v e .  
     *   @ r m t o l l   S R               E O C                         L L _ A D C _ I s A c t i v e F l a g _ S L V _ E O S  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ S L V _ E O S ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
      
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x y _ C O M M O N - > S R ,   1 U ) ;  
      
     r e t u r n   ( R E A D _ B I T ( * p r e g ,   L L _ A D C _ F L A G _ E O S _ S L V )   = =   ( L L _ A D C _ F L A G _ E O S _ S L V ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   o f   t h e   A D C   m a s t e r .  
     *   @ r m t o l l   S R               J E O C                       L L _ A D C _ I s A c t i v e F l a g _ M S T _ J E O S  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ M S T _ J E O S ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C 1 - > S R ,   A D C _ S R _ J E O C )   = =   ( A D C _ S R _ J E O C ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s   o f   t h e   A D C   s l a v e .  
     *   @ r m t o l l   S R               J E O C                       L L _ A D C _ I s A c t i v e F l a g _ S L V _ J E O S  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ S L V _ J E O S ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
      
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x y _ C O M M O N - > S R ,   1 U ) ;  
      
     r e t u r n   ( R E A D _ B I T ( * p r e g ,   L L _ A D C _ F L A G _ J E O S _ S L V )   = =   ( L L _ A D C _ F L A G _ J E O S _ S L V ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   A D C   a n a l o g   w a t c h d o g   1   o f   t h e   A D C   m a s t e r .  
     *   @ r m t o l l   S R               A W D                         L L _ A D C _ I s A c t i v e F l a g _ M S T _ A W D 1  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ M S T _ A W D 1 ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C 1 - > S R ,   L L _ A D C _ F L A G _ A W D 1 )   = =   ( L L _ A D C _ F L A G _ A W D 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   f l a g   m u l t i m o d e   a n a l o g   w a t c h d o g   1   o f   t h e   A D C   s l a v e .  
     *   @ r m t o l l   S R               A W D                         L L _ A D C _ I s A c t i v e F l a g _ S L V _ A W D 1  
     *   @ p a r a m     A D C x y _ C O M M O N   A D C   c o m m o n   i n s t a n c e  
     *                   ( c a n   b e   s e t   d i r e c t l y   f r o m   C M S I S   d e f i n i t i o n   o r   b y   u s i n g   h e l p e r   m a c r o   @ r e f   _ _ L L _ A D C _ C O M M O N _ I N S T A N C E ( )   )  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s A c t i v e F l a g _ S L V _ A W D 1 ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N )  
 {  
     _ _ I O   u i n t 3 2 _ t   * p r e g   =   _ _ A D C _ P T R _ R E G _ O F F S E T ( A D C x y _ C O M M O N - > S R ,   1 U ) ;  
      
     r e t u r n   ( R E A D _ B I T ( * p r e g ,   L L _ A D C _ F L A G _ A W D 1 )   = =   ( L L _ A D C _ F L A G _ A W D 1 ) ) ;  
 }  
  
 # e n d i f   / *   A D C _ M U L T I M O D E _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ I T _ M a n a g e m e n t   A D C   I T   m a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   i n t e r r u p t i o n   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   C R 1             E O C I E                     L L _ A D C _ E n a b l e I T _ E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ E n a b l e I T _ E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     S E T _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ E O C I E ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     E n a b l e   i n t e r r u p t i o n   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   C R 1             J E O C I E                   L L _ A D C _ E n a b l e I T _ J E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ E n a b l e I T _ J E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     S E T _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ J E O S ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   i n t e r r u p t i o n   A D C   a n a l o g   w a t c h d o g   1 .  
     *   @ r m t o l l   C R 1             A W D I E                     L L _ A D C _ E n a b l e I T _ A W D 1  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ E n a b l e I T _ A W D 1 ( A D C _ T y p e D e f   * A D C x )  
 {  
     S E T _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ A W D 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   i n t e r r u p t i o n   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   C R 1             E O C I E                     L L _ A D C _ D i s a b l e I T _ E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ D i s a b l e I T _ E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     C L E A R _ B I T ( A D C x - > C R 1 ,   A D C _ C R 1 _ E O C I E ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     D i s a b l e   i n t e r r u p t i o n   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s .  
     *   @ r m t o l l   C R 1             J E O C I E                   L L _ A D C _ E n a b l e I T _ J E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ D i s a b l e I T _ J E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     C L E A R _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ J E O S ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   i n t e r r u p t i o n   A D C   a n a l o g   w a t c h d o g   1 .  
     *   @ r m t o l l   C R 1             A W D I E                     L L _ A D C _ E n a b l e I T _ A W D 1  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A D C _ D i s a b l e I T _ A W D 1 ( A D C _ T y p e D e f   * A D C x )  
 {  
     C L E A R _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ A W D 1 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   s t a t e   o f   i n t e r r u p t i o n   A D C   g r o u p   r e g u l a r   e n d   o f   s e q u e n c e   c o n v e r s i o n s  
     *                   ( 0 :   i n t e r r u p t   d i s a b l e d ,   1 :   i n t e r r u p t   e n a b l e d ) .  
     *   @ r m t o l l   C R 1             E O C I E                     L L _ A D C _ I s E n a b l e d I T _ E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s E n a b l e d I T _ E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   r e g u l a r                       * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " E O S "                                   * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ E O S )   = =   ( L L _ A D C _ I T _ E O S ) ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     G e t   s t a t e   o f   i n t e r r u p t i o n   A D C   g r o u p   i n j e c t e d   e n d   o f   s e q u e n c e   c o n v e r s i o n s  
     *                   ( 0 :   i n t e r r u p t   d i s a b l e d ,   1 :   i n t e r r u p t   e n a b l e d ) .  
     *   @ r m t o l l   C R 1             J E O C I E                   L L _ A D C _ E n a b l e I T _ J E O S  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s E n a b l e d I T _ J E O S ( A D C _ T y p e D e f   * A D C x )  
 {  
     / *   N o t e :   o n   t h i s   S T M 3 2   s e r i e ,   t h e r e   i s   n o   f l a g   A D C   g r o u p   i n j e c t e d                     * /  
     / *               e n d   o f   u n i t a r y   c o n v e r s i o n .                                                                                   * /  
     / *               F l a g   n o t e d   a s   " J E O C "   i s   c o r r e s p o n d i n g   t o   f l a g   " J E O S "                               * /  
     / *               i n   o t h e r   S T M 3 2   f a m i l i e s ) .                                                                                     * /  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ J E O S )   = =   ( L L _ A D C _ I T _ J E O S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   s t a t e   o f   i n t e r r u p t i o n   A D C   a n a l o g   w a t c h d o g   1  
     *                   ( 0 :   i n t e r r u p t   d i s a b l e d ,   1 :   i n t e r r u p t   e n a b l e d ) .  
     *   @ r m t o l l   C R 1             A W D I E                     L L _ A D C _ E n a b l e I T _ A W D 1  
     *   @ p a r a m     A D C x   A D C   i n s t a n c e  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A D C _ I s E n a b l e d I T _ A W D 1 ( A D C _ T y p e D e f   * A D C x )  
 {  
     r e t u r n   ( R E A D _ B I T ( A D C x - > C R 1 ,   L L _ A D C _ I T _ A W D 1 )   = =   ( L L _ A D C _ I T _ A W D 1 ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   A D C _ L L _ E F _ I n i t   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 / *   I n i t i a l i z a t i o n   o f   s o m e   f e a t u r e s   o f   A D C   c o m m o n   p a r a m e t e r s   a n d   m u l t i m o d e   * /  
 E r r o r S t a t u s   L L _ A D C _ C o m m o n D e I n i t ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N ) ;  
 E r r o r S t a t u s   L L _ A D C _ C o m m o n I n i t ( A D C _ C o m m o n _ T y p e D e f   * A D C x y _ C O M M O N ,   L L _ A D C _ C o m m o n I n i t T y p e D e f   * A D C _ C o m m o n I n i t S t r u c t ) ;  
 v o i d                 L L _ A D C _ C o m m o n S t r u c t I n i t ( L L _ A D C _ C o m m o n I n i t T y p e D e f   * A D C _ C o m m o n I n i t S t r u c t ) ;  
  
 / *   D e - i n i t i a l i z a t i o n   o f   A D C   i n s t a n c e ,   A D C   g r o u p   r e g u l a r   a n d   A D C   g r o u p   i n j e c t e d   * /  
 / *   ( a v a i l a b i l i t y   o f   A D C   g r o u p   i n j e c t e d   d e p e n d s   o n   S T M 3 2   f a m i l i e s )   * /  
 E r r o r S t a t u s   L L _ A D C _ D e I n i t ( A D C _ T y p e D e f   * A D C x ) ;  
  
 / *   I n i t i a l i z a t i o n   o f   s o m e   f e a t u r e s   o f   A D C   i n s t a n c e   * /  
 E r r o r S t a t u s   L L _ A D C _ I n i t ( A D C _ T y p e D e f   * A D C x ,   L L _ A D C _ I n i t T y p e D e f   * A D C _ I n i t S t r u c t ) ;  
 v o i d                 L L _ A D C _ S t r u c t I n i t ( L L _ A D C _ I n i t T y p e D e f   * A D C _ I n i t S t r u c t ) ;  
  
 / *   I n i t i a l i z a t i o n   o f   s o m e   f e a t u r e s   o f   A D C   i n s t a n c e   a n d   A D C   g r o u p   r e g u l a r   * /  
 E r r o r S t a t u s   L L _ A D C _ R E G _ I n i t ( A D C _ T y p e D e f   * A D C x ,   L L _ A D C _ R E G _ I n i t T y p e D e f   * A D C _ R E G _ I n i t S t r u c t ) ;  
 v o i d                 L L _ A D C _ R E G _ S t r u c t I n i t ( L L _ A D C _ R E G _ I n i t T y p e D e f   * A D C _ R E G _ I n i t S t r u c t ) ;  
  
 / *   I n i t i a l i z a t i o n   o f   s o m e   f e a t u r e s   o f   A D C   i n s t a n c e   a n d   A D C   g r o u p   i n j e c t e d   * /  
 E r r o r S t a t u s   L L _ A D C _ I N J _ I n i t ( A D C _ T y p e D e f   * A D C x ,   L L _ A D C _ I N J _ I n i t T y p e D e f   * A D C _ I N J _ I n i t S t r u c t ) ;  
 v o i d                 L L _ A D C _ I N J _ S t r u c t I n i t ( L L _ A D C _ I N J _ I n i t T y p e D e f   * A D C _ I N J _ I n i t S t r u c t ) ;  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   A D C 1   | |   A D C 2   | |   A D C 3   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ A D C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  