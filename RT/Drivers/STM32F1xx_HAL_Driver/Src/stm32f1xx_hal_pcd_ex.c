??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p c d _ e x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       P C D   E x t e n d e d   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   U S B   P e r i p h e r a l   C o n t r o l l e r :  
     *                       +   E x t e n d e d   f e a t u r e s   f u n c t i o n s  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P C D E x   P C D E x  
     *   @ b r i e f   P C D   E x t e n d e d   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ P C D _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   P C D E x _ E x p o r t e d _ F u n c t i o n s   P C D E x   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P C D E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ b r i e f         P C D E x   c o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   E x t e n d e d   f e a t u r e s   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   U p d a t e   F I F O   c o n f i g u r a t i o n  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 / * *  
     *   @ b r i e f     S e t   T x   F I F O  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     f i f o   T h e   n u m b e r   o f   T x   f i f o  
     *   @ p a r a m     s i z e   F i f o   s i z e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D E x _ S e t T x F i F o ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   f i f o ,   u i n t 1 6 _ t   s i z e )  
 {  
     u i n t 8 _ t   i ;  
     u i n t 3 2 _ t   T x _ O f f s e t ;  
  
     / *     T X n   m i n   s i z e   =   1 6   w o r d s .   ( n     :   T r a n s m i t   F I F O   i n d e x )  
             W h e n   a   T x F I F O   i s   n o t   u s e d ,   t h e   C o n f i g u r a t i o n   s h o u l d   b e   a s   f o l l o w s :  
                     c a s e   1   :     n   >   m         a n d   T x n   i s   n o t   u s e d         ( n , m     :   T r a n s m i t   F I F O   i n d e x e s )  
                   - - >   T x m   c a n   u s e   t h e   s p a c e   a l l o c a t e d   f o r   T x n .  
                   c a s e 2     :     n   <   m         a n d   T x n   i s   n o t   u s e d         ( n , m     :   T r a n s m i t   F I F O   i n d e x e s )  
                   - - >   T x n   s h o u l d   b e   c o n f i g u r e d   w i t h   t h e   m i n i m u m   s p a c e   o f   1 6   w o r d s  
           T h e   F I F O   i s   u s e d   o p t i m a l l y   w h e n   u s e d   T x F I F O s   a r e   a l l o c a t e d   i n   t h e   t o p  
                   o f   t h e   F I F O . E x :   u s e   E P 1   a n d   E P 2   a s   I N   i n s t e a d   o f   E P 1   a n d   E P 3   a s   I N   o n e s .  
           W h e n   D M A   i s   u s e d   3 n   *   F I F O   l o c a t i o n s   s h o u l d   b e   r e s e r v e d   f o r   i n t e r n a l   D M A   r e g i s t e r s   * /  
  
     T x _ O f f s e t   =   h p c d - > I n s t a n c e - > G R X F S I Z ;  
  
     i f   ( f i f o   = =   0 U )  
     {  
         h p c d - > I n s t a n c e - > D I E P T X F 0 _ H N P T X F S I Z   =   ( ( u i n t 3 2 _ t ) s i z e   < <   1 6 )   |   T x _ O f f s e t ;  
     }  
     e l s e  
     {  
         T x _ O f f s e t   + =   ( h p c d - > I n s t a n c e - > D I E P T X F 0 _ H N P T X F S I Z )   > >   1 6 ;  
         f o r   ( i   =   0 U ;   i   <   ( f i f o   -   1 U ) ;   i + + )  
         {  
             T x _ O f f s e t   + =   ( h p c d - > I n s t a n c e - > D I E P T X F [ i ]   > >   1 6 ) ;  
         }  
  
         / *   M u l t i p l y   T x _ S i z e   b y   2   t o   g e t   h i g h e r   p e r f o r m a n c e   * /  
         h p c d - > I n s t a n c e - > D I E P T X F [ f i f o   -   1 U ]   =   ( ( u i n t 3 2 _ t ) s i z e   < <   1 6 )   |   T x _ O f f s e t ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   R x   F I F O  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     s i z e   S i z e   o f   R x   f i f o  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D E x _ S e t R x F i F o ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 1 6 _ t   s i z e )  
 {  
     h p c d - > I n s t a n c e - > G R X F S I Z   =   s i z e ;  
  
     r e t u r n   H A L _ O K ;  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # i f   d e f i n e d   ( U S B )  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P M A   f o r   E P  
     *   @ p a r a m     h p c d     D e v i c e   i n s t a n c e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ p a r a m     e p _ k i n d   e n d p o i n t   K i n d  
     *                                     U S B _ S N G _ B U F :   S i n g l e   B u f f e r   u s e d  
     *                                     U S B _ D B L _ B U F :   D o u b l e   B u f f e r   u s e d  
     *   @ p a r a m     p m a a d r e s s :   E P   a d d r e s s   i n   T h e   P M A :   I n   c a s e   o f   s i n g l e   b u f f e r   e n d p o i n t  
     *                                       t h i s   p a r a m e t e r   i s   1 6 - b i t   v a l u e   p r o v i d i n g   t h e   a d d r e s s  
     *                                       i n   P M A   a l l o c a t e d   t o   e n d p o i n t .  
     *                                       I n   c a s e   o f   d o u b l e   b u f f e r   e n d p o i n t   t h i s   p a r a m e t e r  
     *                                       i s   a   3 2 - b i t   v a l u e   p r o v i d i n g   t h e   e n d p o i n t   b u f f e r   0   a d d r e s s  
     *                                       i n   t h e   L S B   p a r t   o f   3 2 - b i t   v a l u e   a n d   e n d p o i n t   b u f f e r   1   a d d r e s s  
     *                                       i n   t h e   M S B   p a r t   o f   3 2 - b i t   v a l u e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
  
 H A L _ S t a t u s T y p e D e f     H A L _ P C D E x _ P M A C o n f i g ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 1 6 _ t   e p _ a d d r ,  
                                                                               u i n t 1 6 _ t   e p _ k i n d ,   u i n t 3 2 _ t   p m a a d r e s s )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     / *   i n i t i a l i z e   e p   s t r u c t u r e * /  
     i f   ( ( 0 x 8 0 U   &   e p _ a d d r )   = =   0 x 8 0 U )  
     {  
         e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
     }  
     e l s e  
     {  
         e p   =   & h p c d - > O U T _ e p [ e p _ a d d r ] ;  
     }  
  
     / *   H e r e   w e   c h e c k   i f   t h e   e n d p o i n t   i s   s i n g l e   o r   d o u b l e   B u f f e r * /  
     i f   ( e p _ k i n d   = =   P C D _ S N G _ B U F )  
     {  
         / *   S i n g l e   B u f f e r   * /  
         e p - > d o u b l e b u f f e r   =   0 U ;  
         / *   C o n f i g u r e   t h e   P M A   * /  
         e p - > p m a a d r e s s   =   ( u i n t 1 6 _ t ) p m a a d r e s s ;  
     }  
     e l s e   / *   U S B _ D B L _ B U F   * /  
     {  
         / *   D o u b l e   B u f f e r   E n d p o i n t   * /  
         e p - > d o u b l e b u f f e r   =   1 U ;  
         / *   C o n f i g u r e   t h e   P M A   * /  
         e p - > p m a a d d r 0   =   ( u i n t 1 6 _ t ) ( p m a a d r e s s   &   0 x F F F F U ) ;  
         e p - > p m a a d d r 1   =   ( u i n t 1 6 _ t ) ( ( p m a a d r e s s   &   0 x F F F F 0 0 0 0 U )   > >   1 6 ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S o f t w a r e   D e v i c e   C o n n e c t i o n ,  
     *                   t h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   O T G   F S   p e r i p h e r a l ,   i t   i s   u s e d  
     *                   o n l y   b y   U S B   D e v i c e   F S   p e r i p h e r a l .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     s t a t e   c o n n e c t i o n   s t a t e   ( 0   :   d i s c o n n e c t e d   /   1 :   c o n n e c t e d )  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   s t a t e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( s t a t e ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ b r i e f     S e n d   L P M   m e s s a g e   t o   u s e r   l a y e r   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     m s g   L P M   m e s s a g e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D E x _ L P M _ C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   P C D _ L P M _ M s g T y p e D e f   m s g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( m s g ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D E x _ L P M _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S e n d   B a t t e r y C h a r g i n g   m e s s a g e   t o   u s e r   l a y e r   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     m s g   L P M   m e s s a g e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D E x _ B C D _ C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   P C D _ B C D _ M s g T y p e D e f   m s g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( m s g ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D E x _ B C D _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # e n d i f   / *   H A L _ P C D _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  