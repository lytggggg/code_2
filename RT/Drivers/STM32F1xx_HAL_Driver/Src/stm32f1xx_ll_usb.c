??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ u s b . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       U S B   L o w   L a y e r   H A L   m o d u l e   d r i v e r .  
     *  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   U S B   P e r i p h e r a l   C o n t r o l l e r :  
     *                       +   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I / O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # )   F i l l   p a r a m e t e r s   o f   I n i t   s t r u c t u r e   i n   U S B _ O T G _ C f g T y p e D e f   s t r u c t u r e .  
  
             ( # )   C a l l   U S B _ C o r e I n i t ( )   A P I   t o   i n i t i a l i z e   t h e   U S B   C o r e   p e r i p h e r a l .  
  
             ( # )   T h e   u p p e r   H A L   H C D / P C D   d r i v e r   w i l l   c a l l   t h e   r i g h t   r o u t i n e s   f o r   i t s   i n t e r n a l   p r o c e s s e s .  
  
     @ e n d v e r b a t i m  
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
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ U S B _ D R I V E R  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( H A L _ P C D _ M O D U L E _ E N A B L E D )   | |   d e f i n e d   ( H A L _ H C D _ M O D U L E _ E N A B L E D )  
 # i f   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S B _ C o r e R e s e t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ) ;  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S B _ L L _ E x p o r t e d _ F u n c t i o n s   U S B   L o w   L a y e r   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S B _ L L _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   U S B   C o r e  
     *   @ p a r a m     U S B x   U S B   I n s t a n c e  
     *   @ p a r a m     c f g   p o i n t e r   t o   a   U S B _ O T G _ C f g T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S B x   p e r i p h e r a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ C o r e I n i t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ C f g T y p e D e f   c f g )  
 {  
     H A L _ S t a t u s T y p e D e f   r e t ;  
  
  
     / *   S e l e c t   F S   E m b e d d e d   P H Y   * /  
     U S B x - > G U S B C F G   | =   U S B _ O T G _ G U S B C F G _ P H Y S E L ;  
  
     / *   R e s e t   a f t e r   a   P H Y   s e l e c t   * /  
     r e t   =   U S B _ C o r e R e s e t ( U S B x ) ;  
  
     / *   A c t i v a t e   t h e   U S B   T r a n s c e i v e r   * /  
     U S B x - > G C C F G   | =   U S B _ O T G _ G C C F G _ P W R D W N ;  
  
     r e t u r n   r e t ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t   t h e   U S B   t u r n a r o u n d   t i m e  
     *   @ p a r a m     U S B x   U S B   I n s t a n c e  
     *   @ p a r a m     h c l k :   A H B   c l o c k   f r e q u e n c y  
     *   @ r e t v a l   U S B   t u r n a r o u n d   t i m e   I n   P H Y   C l o c k s   n u m b e r  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S e t T u r n a r o u n d T i m e ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,  
                                                                                 u i n t 3 2 _ t   h c l k ,   u i n t 8 _ t   s p e e d )  
 {  
     u i n t 3 2 _ t   U s b T r d ;  
  
     / *   T h e   U S B T R D   i s   c o n f i g u r e d   a c c o r d i n g   t o   t h e   t a b l e s   b e l o w ,   d e p e n d i n g   o n   A H B   f r e q u e n c y  
     u s e d   b y   a p p l i c a t i o n .   I n   t h e   l o w   A H B   f r e q u e n c y   r a n g e   i t   i s   u s e d   t o   s t r e t c h   e n o u g h   t h e   U S B   r e s p o n s e  
     t i m e   t o   I N   t o k e n s ,   t h e   U S B   t u r n a r o u n d   t i m e ,   s o   t o   c o m p e n s a t e   f o r   t h e   l o n g e r   A H B   r e a d   a c c e s s  
     l a t e n c y   t o   t h e   D a t a   F I F O   * /  
     i f   ( s p e e d   = =   U S B D _ F S _ S P E E D )  
     {  
         i f   ( ( h c l k   > =   1 4 2 0 0 0 0 0 U )   & &   ( h c l k   <   1 5 0 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   1 4 . 2 - 1 5   M H z   * /  
             U s b T r d   =   0 x F U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   1 5 0 0 0 0 0 0 U )   & &   ( h c l k   <   1 6 0 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   1 5 - 1 6   M H z   * /  
             U s b T r d   =   0 x E U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   1 6 0 0 0 0 0 0 U )   & &   ( h c l k   <   1 7 2 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   1 6 - 1 7 . 2   M H z   * /  
             U s b T r d   =   0 x D U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   1 7 2 0 0 0 0 0 U )   & &   ( h c l k   <   1 8 5 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   1 7 . 2 - 1 8 . 5   M H z   * /  
             U s b T r d   =   0 x C U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   1 8 5 0 0 0 0 0 U )   & &   ( h c l k   <   2 0 0 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   1 8 . 5 - 2 0   M H z   * /  
             U s b T r d   =   0 x B U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   2 0 0 0 0 0 0 0 U )   & &   ( h c l k   <   2 1 8 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   2 0 - 2 1 . 8   M H z   * /  
             U s b T r d   =   0 x A U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   2 1 8 0 0 0 0 0 U )   & &   ( h c l k   <   2 4 0 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   2 1 . 8 - 2 4   M H z   * /  
             U s b T r d   =   0 x 9 U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   2 4 0 0 0 0 0 0 U )   & &   ( h c l k   <   2 7 7 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   2 4 - 2 7 . 7   M H z   * /  
             U s b T r d   =   0 x 8 U ;  
         }  
         e l s e   i f   ( ( h c l k   > =   2 7 7 0 0 0 0 0 U )   & &   ( h c l k   <   3 2 0 0 0 0 0 0 U ) )  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   2 7 . 7 - 3 2   M H z   * /  
             U s b T r d   =   0 x 7 U ;  
         }  
         e l s e   / *   i f ( h c l k   > =   3 2 0 0 0 0 0 0 )   * /  
         {  
             / *   h c l k   C l o c k   R a n g e   b e t w e e n   3 2 - 2 0 0   M H z   * /  
             U s b T r d   =   0 x 6 U ;  
         }  
     }  
     e l s e  
     {  
         U s b T r d   =   U S B D _ D E F A U L T _ T R D T _ V A L U E ;  
     }  
  
     U S B x - > G U S B C F G   & =   ~ U S B _ O T G _ G U S B C F G _ T R D T ;  
     U S B x - > G U S B C F G   | =   ( u i n t 3 2 _ t ) ( ( U s b T r d   < <   1 0 )   &   U S B _ O T G _ G U S B C F G _ T R D T ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E n a b l e G l o b a l I n t  
     *                   E n a b l e s   t h e   c o n t r o l l e r ' s   G l o b a l   I n t   i n   t h e   A H B   C o n f i g   r e g  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E n a b l e G l o b a l I n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     U S B x - > G A H B C F G   | =   U S B _ O T G _ G A H B C F G _ G I N T ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D i s a b l e G l o b a l I n t  
     *                   D i s a b l e   t h e   c o n t r o l l e r ' s   G l o b a l   I n t   i n   t h e   A H B   C o n f i g   r e g  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D i s a b l e G l o b a l I n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     U S B x - > G A H B C F G   & =   ~ U S B _ O T G _ G A H B C F G _ G I N T ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S e t C u r r e n t M o d e   S e t   f u n c t i o n a l   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     m o d e     c u r r e n t   c o r e   m o d e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   U S B _ D E V I C E _ M O D E   P e r i p h e r a l   m o d e  
     *                         @ a r g   U S B _ H O S T _ M O D E   H o s t   m o d e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S e t C u r r e n t M o d e ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ M o d e T y p e D e f   m o d e )  
 {  
     u i n t 3 2 _ t   m s   =   0 U ;  
  
     U S B x - > G U S B C F G   & =   ~ ( U S B _ O T G _ G U S B C F G _ F H M O D   |   U S B _ O T G _ G U S B C F G _ F D M O D ) ;  
  
     i f   ( m o d e   = =   U S B _ H O S T _ M O D E )  
     {  
         U S B x - > G U S B C F G   | =   U S B _ O T G _ G U S B C F G _ F H M O D ;  
  
         d o  
         {  
             H A L _ D e l a y ( 1 U ) ;  
             m s + + ;  
         }   w h i l e   ( ( U S B _ G e t M o d e ( U S B x )   ! =   ( u i n t 3 2 _ t ) U S B _ H O S T _ M O D E )   & &   ( m s   <   5 0 U ) ) ;  
     }  
     e l s e   i f   ( m o d e   = =   U S B _ D E V I C E _ M O D E )  
     {  
         U S B x - > G U S B C F G   | =   U S B _ O T G _ G U S B C F G _ F D M O D ;  
  
         d o  
         {  
             H A L _ D e l a y ( 1 U ) ;  
             m s + + ;  
         }   w h i l e   ( ( U S B _ G e t M o d e ( U S B x )   ! =   ( u i n t 3 2 _ t ) U S B _ D E V I C E _ M O D E )   & &   ( m s   <   5 0 U ) ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( m s   = =   5 0 U )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v I n i t   I n i t i a l i z e s   t h e   U S B _ O T G   c o n t r o l l e r   r e g i s t e r s  
     *                   f o r   d e v i c e   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     c f g       p o i n t e r   t o   a   U S B _ O T G _ C f g T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S B x   p e r i p h e r a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e v I n i t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ C f g T y p e D e f   c f g )  
 {  
     H A L _ S t a t u s T y p e D e f   r e t   =   H A L _ O K ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ;  
  
     f o r   ( i   =   0 U ;   i   <   1 5 U ;   i + + )  
     {  
         U S B x - > D I E P T X F [ i ]   =   0 U ;  
     }  
  
     / *   E n a b l e   H W   V B U S   s e n s i n g   * /  
     U S B x - > G C C F G   | =   U S B _ O T G _ G C C F G _ V B U S B S E N ;  
  
     / *   R e s t a r t   t h e   P h y   C l o c k   * /  
     U S B x _ P C G C C T L   =   0 U ;  
  
     / *   D e v i c e   m o d e   c o n f i g u r a t i o n   * /  
     U S B x _ D E V I C E - > D C F G   | =   D C F G _ F R A M E _ I N T E R V A L _ 8 0 ;  
  
     / *   S e t   C o r e   s p e e d   t o   F u l l   s p e e d   m o d e   * /  
     ( v o i d ) U S B _ S e t D e v S p e e d ( U S B x ,   U S B _ O T G _ S P E E D _ F U L L ) ;  
  
     / *   F l u s h   t h e   F I F O s   * /  
     i f   ( U S B _ F l u s h T x F i f o ( U S B x ,   0 x 1 0 U )   ! =   H A L _ O K )   / *   a l l   T x   F I F O s   * /  
     {  
         r e t   =   H A L _ E R R O R ;  
     }  
  
     i f   ( U S B _ F l u s h R x F i f o ( U S B x )   ! =   H A L _ O K )  
     {  
         r e t   =   H A L _ E R R O R ;  
     }  
  
     / *   C l e a r   a l l   p e n d i n g   D e v i c e   I n t e r r u p t s   * /  
     U S B x _ D E V I C E - > D I E P M S K   =   0 U ;  
     U S B x _ D E V I C E - > D O E P M S K   =   0 U ;  
     U S B x _ D E V I C E - > D A I N T M S K   =   0 U ;  
  
     f o r   ( i   =   0 U ;   i   <   c f g . d e v _ e n d p o i n t s ;   i + + )  
     {  
         i f   ( ( U S B x _ I N E P ( i ) - > D I E P C T L   &   U S B _ O T G _ D I E P C T L _ E P E N A )   = =   U S B _ O T G _ D I E P C T L _ E P E N A )  
         {  
             i f   ( i   = =   0 U )  
             {  
                 U S B x _ I N E P ( i ) - > D I E P C T L   =   U S B _ O T G _ D I E P C T L _ S N A K ;  
             }  
             e l s e  
             {  
                 U S B x _ I N E P ( i ) - > D I E P C T L   =   U S B _ O T G _ D I E P C T L _ E P D I S   |   U S B _ O T G _ D I E P C T L _ S N A K ;  
             }  
         }  
         e l s e  
         {  
             U S B x _ I N E P ( i ) - > D I E P C T L   =   0 U ;  
         }  
  
         U S B x _ I N E P ( i ) - > D I E P T S I Z   =   0 U ;  
         U S B x _ I N E P ( i ) - > D I E P I N T     =   0 x F B 7 F U ;  
     }  
  
     f o r   ( i   =   0 U ;   i   <   c f g . d e v _ e n d p o i n t s ;   i + + )  
     {  
         i f   ( ( U S B x _ O U T E P ( i ) - > D O E P C T L   &   U S B _ O T G _ D O E P C T L _ E P E N A )   = =   U S B _ O T G _ D O E P C T L _ E P E N A )  
         {  
             i f   ( i   = =   0 U )  
             {  
                 U S B x _ O U T E P ( i ) - > D O E P C T L   =   U S B _ O T G _ D O E P C T L _ S N A K ;  
             }  
             e l s e  
             {  
                 U S B x _ O U T E P ( i ) - > D O E P C T L   =   U S B _ O T G _ D O E P C T L _ E P D I S   |   U S B _ O T G _ D O E P C T L _ S N A K ;  
             }  
         }  
         e l s e  
         {  
             U S B x _ O U T E P ( i ) - > D O E P C T L   =   0 U ;  
         }  
  
         U S B x _ O U T E P ( i ) - > D O E P T S I Z   =   0 U ;  
         U S B x _ O U T E P ( i ) - > D O E P I N T     =   0 x F B 7 F U ;  
     }  
  
     U S B x _ D E V I C E - > D I E P M S K   & =   ~ ( U S B _ O T G _ D I E P M S K _ T X F U R M ) ;  
  
     / *   D i s a b l e   a l l   i n t e r r u p t s .   * /  
     U S B x - > G I N T M S K   =   0 U ;  
  
     / *   C l e a r   a n y   p e n d i n g   i n t e r r u p t s   * /  
     U S B x - > G I N T S T S   =   0 x B F F F F F F F U ;  
  
     / *   E n a b l e   t h e   c o m m o n   i n t e r r u p t s   * /  
     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ R X F L V L M ;  
  
     / *   E n a b l e   i n t e r r u p t s   m a t c h i n g   t o   t h e   D e v i c e   m o d e   O N L Y   * /  
     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ U S B S U S P M   |   U S B _ O T G _ G I N T M S K _ U S B R S T   |  
                                       U S B _ O T G _ G I N T M S K _ E N U M D N E M   |   U S B _ O T G _ G I N T M S K _ I E P I N T   |  
                                       U S B _ O T G _ G I N T M S K _ O E P I N T       |   U S B _ O T G _ G I N T M S K _ I I S O I X F R M   |  
                                       U S B _ O T G _ G I N T M S K _ P X F R M _ I I S O O X F R M   |   U S B _ O T G _ G I N T M S K _ W U I M ;  
  
     i f   ( c f g . S o f _ e n a b l e   ! =   0 U )  
     {  
         U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ S O F M ;  
     }  
  
     i f   ( c f g . v b u s _ s e n s i n g _ e n a b l e   = =   1 U )  
     {  
         U S B x - > G I N T M S K   | =   ( U S B _ O T G _ G I N T M S K _ S R Q I M   |   U S B _ O T G _ G I N T M S K _ O T G I N T ) ;  
     }  
  
     r e t u r n   r e t ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ O T G _ F l u s h T x F i f o   :   F l u s h   a   T x   F I F O  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     n u m     F I F O   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
                         1 5   m e a n s   F l u s h   a l l   T x   F I F O s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ F l u s h T x F i f o ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 3 2 _ t   n u m )  
 {  
     u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     U S B x - > G R S T C T L   =   ( U S B _ O T G _ G R S T C T L _ T X F F L S H   |   ( n u m   < <   6 ) ) ;  
  
     d o  
     {  
         i f   ( + + c o u n t   >   2 0 0 0 0 0 U )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }   w h i l e   ( ( U S B x - > G R S T C T L   &   U S B _ O T G _ G R S T C T L _ T X F F L S H )   = =   U S B _ O T G _ G R S T C T L _ T X F F L S H ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ F l u s h R x F i f o   :   F l u s h   R x   F I F O  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ F l u s h R x F i f o ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   c o u n t   =   0 ;  
  
     U S B x - > G R S T C T L   =   U S B _ O T G _ G R S T C T L _ R X F F L S H ;  
  
     d o  
     {  
         i f   ( + + c o u n t   >   2 0 0 0 0 0 U )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }   w h i l e   ( ( U S B x - > G R S T C T L   &   U S B _ O T G _ G R S T C T L _ R X F F L S H )   = =   U S B _ O T G _ G R S T C T L _ R X F F L S H ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S e t D e v S p e e d     I n i t i a l i z e s   t h e   D e v S p d   f i e l d   o f   D C F G   r e g i s t e r  
     *                   d e p e n d i n g   t h e   P H Y   t y p e   a n d   t h e   e n u m e r a t i o n   s p e e d   o f   t h e   d e v i c e .  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     s p e e d     d e v i c e   s p e e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   U S B _ O T G _ S P E E D _ F U L L :   F u l l   s p e e d   m o d e  
     *   @ r e t v a l     H a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S e t D e v S p e e d ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   s p e e d )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     U S B x _ D E V I C E - > D C F G   | =   s p e e d ;  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ G e t D e v S p e e d     R e t u r n   t h e   D e v   S p e e d  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   s p e e d     d e v i c e   s p e e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   U S B D _ F S _ S P E E D :   F u l l   s p e e d   m o d e  
     * /  
 u i n t 8 _ t   U S B _ G e t D e v S p e e d ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 8 _ t   s p e e d ;  
     u i n t 3 2 _ t   D e v E n u m S p e e d   =   U S B x _ D E V I C E - > D S T S   &   U S B _ O T G _ D S T S _ E N U M S P D ;  
  
     i f   ( ( D e v E n u m S p e e d   = =   D S T S _ E N U M S P D _ F S _ P H Y _ 3 0 M H Z _ O R _ 6 0 M H Z )   | |  
             ( D e v E n u m S p e e d   = =   D S T S _ E N U M S P D _ F S _ P H Y _ 4 8 M H Z ) )  
     {  
         s p e e d   =   U S B D _ F S _ S P E E D ;  
     }  
     e l s e  
     {  
         s p e e d   =   0 x F U ;  
     }  
  
     r e t u r n   s p e e d ;  
 }  
  
 / * *  
     *   @ b r i e f     A c t i v a t e   a n d   c o n f i g u r e   a n   e n d p o i n t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ A c t i v a t e E n d p o i n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         U S B x _ D E V I C E - > D A I N T M S K   | =   U S B _ O T G _ D A I N T M S K _ I E P M   &   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ) ;  
  
         i f   ( ( U S B x _ I N E P ( e p n u m ) - > D I E P C T L   &   U S B _ O T G _ D I E P C T L _ U S B A E P )   = =   0 U )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   ( e p - > m a x p a c k e t   &   U S B _ O T G _ D I E P C T L _ M P S I Z )   |  
                                                                       ( ( u i n t 3 2 _ t ) e p - > t y p e   < <   1 8 )   |   ( e p n u m   < <   2 2 )   |  
                                                                       U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M   |  
                                                                       U S B _ O T G _ D I E P C T L _ U S B A E P ;  
         }  
     }  
     e l s e  
     {  
         U S B x _ D E V I C E - > D A I N T M S K   | =   U S B _ O T G _ D A I N T M S K _ O E P M   &   ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) )   < <   1 6 ) ;  
  
         i f   ( ( ( U S B x _ O U T E P ( e p n u m ) - > D O E P C T L )   &   U S B _ O T G _ D O E P C T L _ U S B A E P )   = =   0 U )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   ( e p - > m a x p a c k e t   &   U S B _ O T G _ D O E P C T L _ M P S I Z )   |  
                                                                         ( ( u i n t 3 2 _ t ) e p - > t y p e   < <   1 8 )   |  
                                                                         U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M   |  
                                                                         U S B _ O T G _ D O E P C T L _ U S B A E P ;  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A c t i v a t e   a n d   c o n f i g u r e   a   d e d i c a t e d   e n d p o i n t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ A c t i v a t e D e d i c a t e d E n d p o i n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     / *   R e a d   D E P C T L n   r e g i s t e r   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         i f   ( ( ( U S B x _ I N E P ( e p n u m ) - > D I E P C T L )   &   U S B _ O T G _ D I E P C T L _ U S B A E P )   = =   0 U )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   ( e p - > m a x p a c k e t   &   U S B _ O T G _ D I E P C T L _ M P S I Z )   |  
                                                                       ( ( u i n t 3 2 _ t ) e p - > t y p e   < <   1 8 )   |   ( e p n u m   < <   2 2 )   |  
                                                                       U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M   |  
                                                                       U S B _ O T G _ D I E P C T L _ U S B A E P ;  
         }  
  
         U S B x _ D E V I C E - > D E A C H M S K   | =   U S B _ O T G _ D A I N T M S K _ I E P M   &   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ) ;  
     }  
     e l s e  
     {  
         i f   ( ( ( U S B x _ O U T E P ( e p n u m ) - > D O E P C T L )   &   U S B _ O T G _ D O E P C T L _ U S B A E P )   = =   0 U )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   ( e p - > m a x p a c k e t   &   U S B _ O T G _ D O E P C T L _ M P S I Z )   |  
                                                                         ( ( u i n t 3 2 _ t ) e p - > t y p e   < <   1 8 )   |   ( e p n u m   < <   2 2 )   |  
                                                                         U S B _ O T G _ D O E P C T L _ U S B A E P ;  
         }  
  
         U S B x _ D E V I C E - > D E A C H M S K   | =   U S B _ O T G _ D A I N T M S K _ O E P M   &   ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) )   < <   1 6 ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - a c t i v a t e   a n d   d e - i n i t i a l i z e   a n   e n d p o i n t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e a c t i v a t e E n d p o i n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     / *   R e a d   D E P C T L n   r e g i s t e r   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         i f   ( ( U S B x _ I N E P ( e p n u m ) - > D I E P C T L   &   U S B _ O T G _ D I E P C T L _ E P E N A )   = =   U S B _ O T G _ D I E P C T L _ E P E N A )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S N A K ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ E P D I S ;  
         }  
  
         U S B x _ D E V I C E - > D E A C H M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ I E P M   &   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ) ) ;  
         U S B x _ D E V I C E - > D A I N T M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ I E P M   &   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ) ) ;  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   & =   ~ ( U S B _ O T G _ D I E P C T L _ U S B A E P   |  
                                                                       U S B _ O T G _ D I E P C T L _ M P S I Z   |  
                                                                       U S B _ O T G _ D I E P C T L _ T X F N U M   |  
                                                                       U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M   |  
                                                                       U S B _ O T G _ D I E P C T L _ E P T Y P ) ;  
     }  
     e l s e  
     {  
         i f   ( ( U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   &   U S B _ O T G _ D O E P C T L _ E P E N A )   = =   U S B _ O T G _ D O E P C T L _ E P E N A )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S N A K ;  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ E P D I S ;  
         }  
  
         U S B x _ D E V I C E - > D E A C H M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ O E P M   &   ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) )   < <   1 6 ) ) ;  
         U S B x _ D E V I C E - > D A I N T M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ O E P M   &   ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) )   < <   1 6 ) ) ;  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   & =   ~ ( U S B _ O T G _ D O E P C T L _ U S B A E P   |  
                                                                         U S B _ O T G _ D O E P C T L _ M P S I Z   |  
                                                                         U S B _ O T G _ D O E P C T L _ S D 0 P I D _ S E V N F R M   |  
                                                                         U S B _ O T G _ D O E P C T L _ E P T Y P ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - a c t i v a t e   a n d   d e - i n i t i a l i z e   a   d e d i c a t e d   e n d p o i n t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e a c t i v a t e D e d i c a t e d E n d p o i n t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     / *   R e a d   D E P C T L n   r e g i s t e r   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         i f   ( ( U S B x _ I N E P ( e p n u m ) - > D I E P C T L   &   U S B _ O T G _ D I E P C T L _ E P E N A )   = =   U S B _ O T G _ D I E P C T L _ E P E N A )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L     | =   U S B _ O T G _ D I E P C T L _ S N A K ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L     | =   U S B _ O T G _ D I E P C T L _ E P D I S ;  
         }  
  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   & =   ~   U S B _ O T G _ D I E P C T L _ U S B A E P ;  
         U S B x _ D E V I C E - > D A I N T M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ I E P M   &   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ) ) ;  
     }  
     e l s e  
     {  
         i f   ( ( U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   &   U S B _ O T G _ D O E P C T L _ E P E N A )   = =   U S B _ O T G _ D O E P C T L _ E P E N A )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L     | =   U S B _ O T G _ D O E P C T L _ S N A K ;  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L     | =   U S B _ O T G _ D O E P C T L _ E P D I S ;  
         }  
  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   & =   ~ U S B _ O T G _ D O E P C T L _ U S B A E P ;  
         U S B x _ D E V I C E - > D A I N T M S K   & =   ~ ( U S B _ O T G _ D A I N T M S K _ O E P M   &   ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) )   < <   1 6 ) ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P S t a r t X f e r   :   s e t u p   a n d   s t a r t s   a   t r a n s f e r   o v e r   a n   E P  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P S t a r t X f e r ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
     u i n t 1 6 _ t   p k t c n t ;  
  
     / *   I N   e n d p o i n t   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         / *   Z e r o   L e n g t h   P a c k e t ?   * /  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ P K T C N T ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z ) ;  
         }  
         e l s e  
         {  
             / *   P r o g r a m   t h e   t r a n s f e r   s i z e   a n d   p a c k e t   c o u n t  
             *   a s   f o l l o w s :   x f e r s i z e   =   N   *   m a x p a c k e t   +  
             *   s h o r t _ p a c k e t   p k t c n t   =   N   +   ( s h o r t _ p a c k e t  
             *   e x i s t   ?   1   :   0 )  
             * /  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ P K T C N T ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ P K T C N T   &  
                                                                           ( ( ( e p - > x f e r _ l e n   +   e p - > m a x p a c k e t   -   1 U )   /   e p - > m a x p a c k e t )   < <   1 9 ) ) ;  
  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z   &   e p - > x f e r _ l e n ) ;  
  
             i f   ( e p - > t y p e   = =   E P _ T Y P E _ I S O C )  
             {  
                 U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ M U L C N T ) ;  
                 U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ M U L C N T   &   ( 1 U   < <   2 9 ) ) ;  
             }  
         }  
         / *   E P   e n a b l e ,   I N   d a t a   i n   F I F O   * /  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   ( U S B _ O T G _ D I E P C T L _ C N A K   |   U S B _ O T G _ D I E P C T L _ E P E N A ) ;  
  
         i f   ( e p - > t y p e   ! =   E P _ T Y P E _ I S O C )  
         {  
             / *   E n a b l e   t h e   T x   F I F O   E m p t y   I n t e r r u p t   f o r   t h i s   E P   * /  
             i f   ( e p - > x f e r _ l e n   >   0 U )  
             {  
                 U S B x _ D E V I C E - > D I E P E M P M S K   | =   1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ;  
             }  
         }  
         e l s e  
         {  
             i f   ( ( U S B x _ D E V I C E - > D S T S   &   ( 1 U   < <   8 ) )   = =   0 U )  
             {  
                 U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S O D D F R M ;  
             }  
             e l s e  
             {  
                 U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M ;  
             }  
  
             ( v o i d ) U S B _ W r i t e P a c k e t ( U S B x ,   e p - > x f e r _ b u f f ,   e p - > n u m ,   ( u i n t 1 6 _ t ) e p - > x f e r _ l e n ) ;  
         }  
     }  
     e l s e   / *   O U T   e n d p o i n t   * /  
     {  
         / *   P r o g r a m   t h e   t r a n s f e r   s i z e   a n d   p a c k e t   c o u n t   a s   f o l l o w s :  
         *   p k t c n t   =   N  
         *   x f e r s i z e   =   N   *   m a x p a c k e t  
         * /  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   & =   ~ ( U S B _ O T G _ D O E P T S I Z _ X F R S I Z ) ;  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   & =   ~ ( U S B _ O T G _ D O E P T S I Z _ P K T C N T ) ;  
  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   ( U S B _ O T G _ D O E P T S I Z _ X F R S I Z   &   e p - > m a x p a c k e t ) ;  
             U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   ( U S B _ O T G _ D O E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
         }  
         e l s e  
         {  
             p k t c n t   =   ( u i n t 1 6 _ t ) ( ( e p - > x f e r _ l e n   +   e p - > m a x p a c k e t   -   1 U )   /   e p - > m a x p a c k e t ) ;  
             U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   U S B _ O T G _ D O E P T S I Z _ P K T C N T   &   ( ( u i n t 3 2 _ t ) p k t c n t   < <   1 9 ) ;  
             U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   U S B _ O T G _ D O E P T S I Z _ X F R S I Z   &   ( e p - > m a x p a c k e t   *   p k t c n t ) ;  
         }  
  
         i f   ( e p - > t y p e   = =   E P _ T Y P E _ I S O C )  
         {  
             i f   ( ( U S B x _ D E V I C E - > D S T S   &   ( 1 U   < <   8 ) )   = =   0 U )  
             {  
                 U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S O D D F R M ;  
             }  
             e l s e  
             {  
                 U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S D 0 P I D _ S E V N F R M ;  
             }  
         }  
         / *   E P   e n a b l e   * /  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   ( U S B _ O T G _ D O E P C T L _ C N A K   |   U S B _ O T G _ D O E P C T L _ E P E N A ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P 0 S t a r t X f e r   :   s e t u p   a n d   s t a r t s   a   t r a n s f e r   o v e r   t h e   E P     0  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P 0 S t a r t X f e r ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     / *   I N   e n d p o i n t   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         / *   Z e r o   L e n g t h   P a c k e t ?   * /  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ P K T C N T ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z ) ;  
         }  
         e l s e  
         {  
             / *   P r o g r a m   t h e   t r a n s f e r   s i z e   a n d   p a c k e t   c o u n t  
             *   a s   f o l l o w s :   x f e r s i z e   =   N   *   m a x p a c k e t   +  
             *   s h o r t _ p a c k e t   p k t c n t   =   N   +   ( s h o r t _ p a c k e t  
             *   e x i s t   ?   1   :   0 )  
             * /  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   & =   ~ ( U S B _ O T G _ D I E P T S I Z _ P K T C N T ) ;  
  
             i f   ( e p - > x f e r _ l e n   >   e p - > m a x p a c k e t )  
             {  
                 e p - > x f e r _ l e n   =   e p - > m a x p a c k e t ;  
             }  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
             U S B x _ I N E P ( e p n u m ) - > D I E P T S I Z   | =   ( U S B _ O T G _ D I E P T S I Z _ X F R S I Z   &   e p - > x f e r _ l e n ) ;  
         }  
  
         / *   E P   e n a b l e ,   I N   d a t a   i n   F I F O   * /  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   ( U S B _ O T G _ D I E P C T L _ C N A K   |   U S B _ O T G _ D I E P C T L _ E P E N A ) ;  
  
         / *   E n a b l e   t h e   T x   F I F O   E m p t y   I n t e r r u p t   f o r   t h i s   E P   * /  
         i f   ( e p - > x f e r _ l e n   >   0 U )  
         {  
             U S B x _ D E V I C E - > D I E P E M P M S K   | =   1 U L   < <   ( e p - > n u m   &   E P _ A D D R _ M S K ) ;  
         }  
     }  
     e l s e   / *   O U T   e n d p o i n t   * /  
     {  
         / *   P r o g r a m   t h e   t r a n s f e r   s i z e   a n d   p a c k e t   c o u n t   a s   f o l l o w s :  
         *   p k t c n t   =   N  
         *   x f e r s i z e   =   N   *   m a x p a c k e t  
         * /  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   & =   ~ ( U S B _ O T G _ D O E P T S I Z _ X F R S I Z ) ;  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   & =   ~ ( U S B _ O T G _ D O E P T S I Z _ P K T C N T ) ;  
  
         i f   ( e p - > x f e r _ l e n   >   0 U )  
         {  
             e p - > x f e r _ l e n   =   e p - > m a x p a c k e t ;  
         }  
  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   ( U S B _ O T G _ D O E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
         U S B x _ O U T E P ( e p n u m ) - > D O E P T S I Z   | =   ( U S B _ O T G _ D O E P T S I Z _ X F R S I Z   &   ( e p - > m a x p a c k e t ) ) ;  
  
         / *   E P   e n a b l e   * /  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   ( U S B _ O T G _ D O E P C T L _ C N A K   |   U S B _ O T G _ D O E P C T L _ E P E N A ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ W r i t e P a c k e t   :   W r i t e s   a   p a c k e t   i n t o   t h e   T x   F I F O   a s s o c i a t e d  
     *                   w i t h   t h e   E P / c h a n n e l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     s r c       p o i n t e r   t o   s o u r c e   b u f f e r  
     *   @ p a r a m     c h _ e p _ n u m     e n d p o i n t   o r   h o s t   c h a n n e l   n u m b e r  
     *   @ p a r a m     l e n     N u m b e r   o f   b y t e s   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ W r i t e P a c k e t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   * s r c ,  
                                                                     u i n t 8 _ t   c h _ e p _ n u m ,   u i n t 1 6 _ t   l e n )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 8 _ t   * p S r c   =   s r c ;  
     u i n t 3 2 _ t   c o u n t 3 2 b ;  
     u i n t 3 2 _ t   i ;  
  
     c o u n t 3 2 b   =   ( ( u i n t 3 2 _ t ) l e n   +   3 U )   /   4 U ;  
     f o r   ( i   =   0 U ;   i   <   c o u n t 3 2 b ;   i + + )  
     {  
         U S B x _ D F I F O ( ( u i n t 3 2 _ t ) c h _ e p _ n u m )   =   _ _ U N A L I G N E D _ U I N T 3 2 _ R E A D ( p S r c ) ;  
         p S r c + + ;  
         p S r c + + ;  
         p S r c + + ;  
         p S r c + + ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d P a c k e t   :   r e a d   a   p a c k e t   f r o m   t h e   R X   F I F O  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     d e s t     s o u r c e   p o i n t e r  
     *   @ p a r a m     l e n     N u m b e r   o f   b y t e s   t o   r e a d  
     *   @ r e t v a l   p o i n t e r   t o   d e s t i n a t i o n   b u f f e r  
     * /  
 v o i d   * U S B _ R e a d P a c k e t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   * d e s t ,   u i n t 1 6 _ t   l e n )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 8 _ t   * p D e s t   =   d e s t ;  
     u i n t 3 2 _ t   p D a t a ;  
     u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   c o u n t 3 2 b   =   ( u i n t 3 2 _ t ) l e n   > >   2 U ;  
     u i n t 1 6 _ t   r e m a i n i n g _ b y t e s   =   l e n   %   4 U ;  
  
     f o r   ( i   =   0 U ;   i   <   c o u n t 3 2 b ;   i + + )  
     {  
         _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E ( p D e s t ,   U S B x _ D F I F O ( 0 U ) ) ;  
         p D e s t + + ;  
         p D e s t + + ;  
         p D e s t + + ;  
         p D e s t + + ;  
     }  
  
     / *   W h e n   N u m b e r   o f   d a t a   i s   n o t   w o r d   a l i g n e d ,   r e a d   t h e   r e m a i n i n g   b y t e   * /  
     i f   ( r e m a i n i n g _ b y t e s   ! =   0 U )  
     {  
         i   =   0 U ;  
         _ _ U N A L I G N E D _ U I N T 3 2 _ W R I T E ( & p D a t a ,   U S B x _ D F I F O ( 0 U ) ) ;  
  
         d o  
         {  
             * ( u i n t 8 _ t   * ) p D e s t   =   ( u i n t 8 _ t ) ( p D a t a   > >   ( 8 U   *   ( u i n t 8 _ t ) ( i ) ) ) ;  
             i + + ;  
             p D e s t + + ;  
             r e m a i n i n g _ b y t e s - - ;  
         }   w h i l e   ( r e m a i n i n g _ b y t e s   ! =   0 U ) ;  
     }  
  
     r e t u r n   ( ( v o i d   * ) p D e s t ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P S e t S t a l l   :   s e t   a   s t a l l   c o n d i t i o n   o v e r   a n   E P  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P S e t S t a l l ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         i f   ( ( ( U S B x _ I N E P ( e p n u m ) - > D I E P C T L   &   U S B _ O T G _ D I E P C T L _ E P E N A )   = =   0 U )   & &   ( e p n u m   ! =   0 U ) )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   & =   ~ ( U S B _ O T G _ D I E P C T L _ E P D I S ) ;  
         }  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S T A L L ;  
     }  
     e l s e  
     {  
         i f   ( ( ( U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   &   U S B _ O T G _ D O E P C T L _ E P E N A )   = =   0 U )   & &   ( e p n u m   ! =   0 U ) )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   & =   ~ ( U S B _ O T G _ D O E P C T L _ E P D I S ) ;  
         }  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S T A L L ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P C l e a r S t a l l   :   C l e a r   a   s t a l l   c o n d i t i o n   o v e r   a n   E P  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P C l e a r S t a l l ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   e p n u m   =   ( u i n t 3 2 _ t ) e p - > n u m ;  
  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         U S B x _ I N E P ( e p n u m ) - > D I E P C T L   & =   ~ U S B _ O T G _ D I E P C T L _ S T A L L ;  
         i f   ( ( e p - > t y p e   = =   E P _ T Y P E _ I N T R )   | |   ( e p - > t y p e   = =   E P _ T Y P E _ B U L K ) )  
         {  
             U S B x _ I N E P ( e p n u m ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S D 0 P I D _ S E V N F R M ;   / *   D A T A 0   * /  
         }  
     }  
     e l s e  
     {  
         U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   & =   ~ U S B _ O T G _ D O E P C T L _ S T A L L ;  
         i f   ( ( e p - > t y p e   = =   E P _ T Y P E _ I N T R )   | |   ( e p - > t y p e   = =   E P _ T Y P E _ B U L K ) )  
         {  
             U S B x _ O U T E P ( e p n u m ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S D 0 P I D _ S E V N F R M ;   / *   D A T A 0   * /  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S t o p D e v i c e   :   S t o p   t h e   u s b   d e v i c e   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S t o p D e v i c e ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     H A L _ S t a t u s T y p e D e f   r e t ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ;  
  
     / *   C l e a r   P e n d i n g   i n t e r r u p t   * /  
     f o r   ( i   =   0 U ;   i   <   1 5 U ;   i + + )  
     {  
         U S B x _ I N E P ( i ) - > D I E P I N T   =   0 x F B 7 F U ;  
         U S B x _ O U T E P ( i ) - > D O E P I N T   =   0 x F B 7 F U ;  
     }  
  
     / *   C l e a r   i n t e r r u p t   m a s k s   * /  
     U S B x _ D E V I C E - > D I E P M S K     =   0 U ;  
     U S B x _ D E V I C E - > D O E P M S K     =   0 U ;  
     U S B x _ D E V I C E - > D A I N T M S K   =   0 U ;  
  
     / *   F l u s h   t h e   F I F O   * /  
     r e t   =   U S B _ F l u s h R x F i f o ( U S B x ) ;  
     i f   ( r e t   ! =   H A L _ O K )  
     {  
         r e t u r n   r e t ;  
     }  
  
     r e t   =   U S B _ F l u s h T x F i f o ( U S B x ,     0 x 1 0 U ) ;  
     i f   ( r e t   ! =   H A L _ O K )  
     {  
         r e t u r n   r e t ;  
     }  
  
     r e t u r n   r e t ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S e t D e v A d d r e s s   :   S t o p   t h e   u s b   d e v i c e   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     a d d r e s s     n e w   d e v i c e   a d d r e s s   t o   b e   a s s i g n e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   2 5 5  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ S e t D e v A d d r e s s ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   a d d r e s s )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     U S B x _ D E V I C E - > D C F G   & =   ~ ( U S B _ O T G _ D C F G _ D A D ) ;  
     U S B x _ D E V I C E - > D C F G   | =   ( ( u i n t 3 2 _ t ) a d d r e s s   < <   4 )   &   U S B _ O T G _ D C F G _ D A D ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v C o n n e c t   :   C o n n e c t   t h e   U S B   d e v i c e   b y   e n a b l i n g   R p u  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ D e v C o n n e c t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     / *   I n   c a s e   p h y   i s   s t o p p e d ,   e n s u r e   t o   u n g a t e   a n d   r e s t o r e   t h e   p h y   C L K   * /  
     U S B x _ P C G C C T L   & =   ~ ( U S B _ O T G _ P C G C C T L _ S T O P C L K   |   U S B _ O T G _ P C G C C T L _ G A T E C L K ) ;  
  
     U S B x _ D E V I C E - > D C T L   & =   ~ U S B _ O T G _ D C T L _ S D I S ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v D i s c o n n e c t   :   D i s c o n n e c t   t h e   U S B   d e v i c e   b y   d i s a b l i n g   R p u  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ D e v D i s c o n n e c t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     / *   I n   c a s e   p h y   i s   s t o p p e d ,   e n s u r e   t o   u n g a t e   a n d   r e s t o r e   t h e   p h y   C L K   * /  
     U S B x _ P C G C C T L   & =   ~ ( U S B _ O T G _ P C G C C T L _ S T O P C L K   |   U S B _ O T G _ P C G C C T L _ G A T E C L K ) ;  
  
     U S B x _ D E V I C E - > D C T L   | =   U S B _ O T G _ D C T L _ S D I S ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d I n t e r r u p t s :   r e t u r n   t h e   g l o b a l   U S B   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t     U S B _ R e a d I n t e r r u p t s ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   t m p r e g ;  
  
     t m p r e g   =   U S B x - > G I N T S T S ;  
     t m p r e g   & =   U S B x - > G I N T M S K ;  
  
     r e t u r n   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d D e v A l l O u t E p I n t e r r u p t :   r e t u r n   t h e   U S B   d e v i c e   O U T   e n d p o i n t s   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v A l l O u t E p I n t e r r u p t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   t m p r e g ;  
  
     t m p r e g     =   U S B x _ D E V I C E - > D A I N T ;  
     t m p r e g   & =   U S B x _ D E V I C E - > D A I N T M S K ;  
  
     r e t u r n   ( ( t m p r e g   &   0 x f f f f 0 0 0 0 U )   > >   1 6 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d D e v A l l I n E p I n t e r r u p t :   r e t u r n   t h e   U S B   d e v i c e   I N   e n d p o i n t s   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v A l l I n E p I n t e r r u p t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   t m p r e g ;  
  
     t m p r e g     =   U S B x _ D E V I C E - > D A I N T ;  
     t m p r e g   & =   U S B x _ D E V I C E - > D A I N T M S K ;  
  
     r e t u r n   ( ( t m p r e g   &   0 x F F F F U ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   D e v i c e   O U T   E P   I n t e r r u p t   r e g i s t e r  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p n u m     e n d p o i n t   n u m b e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   1 5  
     *   @ r e t v a l   D e v i c e   O U T   E P   I n t e r r u p t   r e g i s t e r  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v O u t E P I n t e r r u p t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   e p n u m )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   t m p r e g ;  
  
     t m p r e g     =   U S B x _ O U T E P ( ( u i n t 3 2 _ t ) e p n u m ) - > D O E P I N T ;  
     t m p r e g   & =   U S B x _ D E V I C E - > D O E P M S K ;  
  
     r e t u r n   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   D e v i c e   I N   E P   I n t e r r u p t   r e g i s t e r  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p n u m     e n d p o i n t   n u m b e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   1 5  
     *   @ r e t v a l   D e v i c e   I N   E P   I n t e r r u p t   r e g i s t e r  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v I n E P I n t e r r u p t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   e p n u m )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   t m p r e g ;  
     u i n t 3 2 _ t   m s k ;  
     u i n t 3 2 _ t   e m p ;  
  
     m s k   =   U S B x _ D E V I C E - > D I E P M S K ;  
     e m p   =   U S B x _ D E V I C E - > D I E P E M P M S K ;  
     m s k   | =   ( ( e m p   > >   ( e p n u m   &   E P _ A D D R _ M S K ) )   &   0 x 1 U )   < <   7 ;  
     t m p r e g   =   U S B x _ I N E P ( ( u i n t 3 2 _ t ) e p n u m ) - > D I E P I N T   &   m s k ;  
  
     r e t u r n   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ C l e a r I n t e r r u p t s :   c l e a r   a   U S B   i n t e r r u p t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     i n t e r r u p t     f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d     U S B _ C l e a r I n t e r r u p t s ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 3 2 _ t   i n t e r r u p t )  
 {  
     U S B x - > G I N T S T S   | =   i n t e r r u p t ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   U S B   c o r e   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   r e t u r n   c o r e   m o d e   :   H o s t   o r   D e v i c e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                       0   :   H o s t  
     *                       1   :   D e v i c e  
     * /  
 u i n t 3 2 _ t   U S B _ G e t M o d e ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     r e t u r n   ( ( U S B x - > G I N T S T S )   &   0 x 1 U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     A c t i v a t e   E P 0   f o r   S e t u p   t r a n s a c t i o n s  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ A c t i v a t e S e t u p ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     / *   S e t   t h e   M P S   o f   t h e   I N   E P 0   t o   6 4   b y t e s   * /  
     U S B x _ I N E P ( 0 U ) - > D I E P C T L   & =   ~ U S B _ O T G _ D I E P C T L _ M P S I Z ;  
  
     U S B x _ D E V I C E - > D C T L   | =   U S B _ O T G _ D C T L _ C G I N A K ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P r e p a r e   t h e   E P 0   t o   s t a r t   t h e   f i r s t   c o n t r o l   s e t u p  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     p s e t u p     p o i n t e r   t o   s e t u p   p a c k e t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P 0 _ O u t S t a r t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   * p s e t u p )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   g S N P S i D   =   * ( _ _ I O   u i n t 3 2 _ t   * ) ( & U S B x - > C I D   +   0 x 1 U ) ;  
     U N U S E D ( p s e t u p ) ;  
  
     i f   ( g S N P S i D   >   U S B _ O T G _ C O R E _ I D _ 3 0 0 A )  
     {  
         i f   ( ( U S B x _ O U T E P ( 0 U ) - > D O E P C T L   &   U S B _ O T G _ D O E P C T L _ E P E N A )   = =   U S B _ O T G _ D O E P C T L _ E P E N A )  
         {  
             r e t u r n   H A L _ O K ;  
         }  
     }  
  
     U S B x _ O U T E P ( 0 U ) - > D O E P T S I Z   =   0 U ;  
     U S B x _ O U T E P ( 0 U ) - > D O E P T S I Z   | =   ( U S B _ O T G _ D O E P T S I Z _ P K T C N T   &   ( 1 U   < <   1 9 ) ) ;  
     U S B x _ O U T E P ( 0 U ) - > D O E P T S I Z   | =   ( 3 U   *   8 U ) ;  
     U S B x _ O U T E P ( 0 U ) - > D O E P T S I Z   | =     U S B _ O T G _ D O E P T S I Z _ S T U P C N T ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   U S B   C o r e   ( n e e d e d   a f t e r   U S B   c l o c k   s e t t i n g s   c h a n g e )  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S B _ C o r e R e s e t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   c o u n t   =   0 U ;  
  
     / *   W a i t   f o r   A H B   m a s t e r   I D L E   s t a t e .   * /  
     d o  
     {  
         i f   ( + + c o u n t   >   2 0 0 0 0 0 U )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }   w h i l e   ( ( U S B x - > G R S T C T L   &   U S B _ O T G _ G R S T C T L _ A H B I D L )   = =   0 U ) ;  
  
     / *   C o r e   S o f t   R e s e t   * /  
     c o u n t   =   0 U ;  
     U S B x - > G R S T C T L   | =   U S B _ O T G _ G R S T C T L _ C S R S T ;  
  
     d o  
     {  
         i f   ( + + c o u n t   >   2 0 0 0 0 0 U )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }   w h i l e   ( ( U S B x - > G R S T C T L   &   U S B _ O T G _ G R S T C T L _ C S R S T )   = =   U S B _ O T G _ G R S T C T L _ C S R S T ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ H o s t I n i t   :   I n i t i a l i z e s   t h e   U S B   O T G   c o n t r o l l e r   r e g i s t e r s  
     *                   f o r   H o s t   m o d e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     c f g       p o i n t e r   t o   a   U S B _ O T G _ C f g T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S B x   p e r i p h e r a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ H o s t I n i t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ C f g T y p e D e f   c f g )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ;  
  
     / *   R e s t a r t   t h e   P h y   C l o c k   * /  
     U S B x _ P C G C C T L   =   0 U ;  
  
     / *   D i s a b l e   V B U S   s e n s i n g   * /  
     U S B x - > G C C F G   & =   ~ ( U S B _ O T G _ G C C F G _ V B U S A S E N ) ;  
     U S B x - > G C C F G   & =   ~ ( U S B _ O T G _ G C C F G _ V B U S B S E N ) ;  
     / *   S e t   d e f a u l t   M a x   s p e e d   s u p p o r t   * /  
     U S B x _ H O S T - > H C F G   & =   ~ ( U S B _ O T G _ H C F G _ F S L S S ) ;  
  
     / *   M a k e   s u r e   t h e   F I F O s   a r e   f l u s h e d .   * /  
     ( v o i d ) U S B _ F l u s h T x F i f o ( U S B x ,   0 x 1 0 U ) ;   / *   a l l   T x   F I F O s   * /  
     ( v o i d ) U S B _ F l u s h R x F i f o ( U S B x ) ;  
  
     / *   C l e a r   a l l   p e n d i n g   H C   I n t e r r u p t s   * /  
     f o r   ( i   =   0 U ;   i   <   c f g . H o s t _ c h a n n e l s ;   i + + )  
     {  
         U S B x _ H C ( i ) - > H C I N T   =   0 x F F F F F F F F U ;  
         U S B x _ H C ( i ) - > H C I N T M S K   =   0 U ;  
     }  
  
     / *   D i s a b l e   a l l   i n t e r r u p t s .   * /  
     U S B x - > G I N T M S K   =   0 U ;  
  
     / *   C l e a r   a n y   p e n d i n g   i n t e r r u p t s   * /  
     U S B x - > G I N T S T S   =   0 x F F F F F F F F U ;  
  
     / *   s e t   R x   F I F O   s i z e   * /  
     U S B x - > G R X F S I Z     =   0 x 8 0 U ;  
     U S B x - > D I E P T X F 0 _ H N P T X F S I Z   =   ( u i n t 3 2 _ t ) ( ( ( 0 x 6 0 U   < <   1 6 )   &   U S B _ O T G _ N P T X F D )   |   0 x 8 0 U ) ;  
     U S B x - > H P T X F S I Z   =   ( u i n t 3 2 _ t ) ( ( ( 0 x 4 0 U   < <   1 6 ) &   U S B _ O T G _ H P T X F S I Z _ P T X F D )   |   0 x E 0 U ) ;  
     / *   E n a b l e   t h e   c o m m o n   i n t e r r u p t s   * /  
     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ R X F L V L M ;  
  
     / *   E n a b l e   i n t e r r u p t s   m a t c h i n g   t o   t h e   H o s t   m o d e   O N L Y   * /  
     U S B x - > G I N T M S K   | =   ( U S B _ O T G _ G I N T M S K _ P R T I M                         |   U S B _ O T G _ G I N T M S K _ H C I M   |   \  
                                         U S B _ O T G _ G I N T M S K _ S O F M                           |   U S B _ O T G _ G I N T S T S _ D I S C I N T   |   \  
                                         U S B _ O T G _ G I N T M S K _ P X F R M _ I I S O O X F R M     |   U S B _ O T G _ G I N T M S K _ W U I M ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ I n i t F S L S P C l k S e l   :   I n i t i a l i z e s   t h e   F S L S P C l k S e l   f i e l d   o f   t h e  
     *                   H C F G   r e g i s t e r   o n   t h e   P H Y   t y p e   a n d   s e t   t h e   r i g h t   f r a m e   i n t e r v a l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     f r e q     c l o c k   f r e q u e n c y  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                       H C F G _ 4 8 _ M H Z   :   F u l l   S p e e d   4 8   M H z   C l o c k  
     *                       H C F G _ 6 _ M H Z   :   L o w   S p e e d   6   M H z   C l o c k  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ I n i t F S L S P C l k S e l ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   f r e q )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     U S B x _ H O S T - > H C F G   & =   ~ ( U S B _ O T G _ H C F G _ F S L S P C S ) ;  
     U S B x _ H O S T - > H C F G   | =   ( u i n t 3 2 _ t ) f r e q   &   U S B _ O T G _ H C F G _ F S L S P C S ;  
  
     i f   ( f r e q   = =   H C F G _ 4 8 _ M H Z )  
     {  
         U S B x _ H O S T - > H F I R   =   4 8 0 0 0 U ;  
     }  
     e l s e   i f   ( f r e q   = =   H C F G _ 6 _ M H Z )  
     {  
         U S B x _ H O S T - > H F I R   =   6 0 0 0 U ;  
     }  
     e l s e  
     {  
         / *   . . .   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ O T G _ R e s e t P o r t   :   R e s e t   H o s t   P o r t  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     *   @ n o t e   ( 1 ) T h e   a p p l i c a t i o n   m u s t   w a i t   a t   l e a s t   1 0   m s  
     *       b e f o r e   c l e a r i n g   t h e   r e s e t   b i t .  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ R e s e t P o r t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     _ _ I O   u i n t 3 2 _ t   h p r t 0   =   0 U ;  
  
     h p r t 0   =   U S B x _ H P R T 0 ;  
  
     h p r t 0   & =   ~ ( U S B _ O T G _ H P R T _ P E N A   |   U S B _ O T G _ H P R T _ P C D E T   |  
                           U S B _ O T G _ H P R T _ P E N C H N G   |   U S B _ O T G _ H P R T _ P O C C H N G ) ;  
  
     U S B x _ H P R T 0   =   ( U S B _ O T G _ H P R T _ P R S T   |   h p r t 0 ) ;  
     H A L _ D e l a y ( 1 0 0 U ) ;                                                                   / *   S e e   N o t e   # 1   * /  
     U S B x _ H P R T 0   =   ( ( ~ U S B _ O T G _ H P R T _ P R S T )   &   h p r t 0 ) ;  
     H A L _ D e l a y ( 1 0 U ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D r i v e V b u s   :   a c t i v a t e   o r   d e - a c t i v a t e   v b u s  
     *   @ p a r a m     s t a t e     V B U S   s t a t e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                       0   :   D e a c t i v a t e   V B U S  
     *                       1   :   A c t i v a t e   V B U S  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D r i v e V b u s ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   s t a t e )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     _ _ I O   u i n t 3 2 _ t   h p r t 0   =   0 U ;  
  
     h p r t 0   =   U S B x _ H P R T 0 ;  
  
     h p r t 0   & =   ~ ( U S B _ O T G _ H P R T _ P E N A   |   U S B _ O T G _ H P R T _ P C D E T   |  
                           U S B _ O T G _ H P R T _ P E N C H N G   |   U S B _ O T G _ H P R T _ P O C C H N G ) ;  
  
     i f   ( ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P P W R )   = =   0 U )   & &   ( s t a t e   = =   1 U ) )  
     {  
         U S B x _ H P R T 0   =   ( U S B _ O T G _ H P R T _ P P W R   |   h p r t 0 ) ;  
     }  
     i f   ( ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P P W R )   = =   U S B _ O T G _ H P R T _ P P W R )   & &   ( s t a t e   = =   0 U ) )  
     {  
         U S B x _ H P R T 0   =   ( ( ~ U S B _ O T G _ H P R T _ P P W R )   &   h p r t 0 ) ;  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   H o s t   C o r e   s p e e d  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   s p e e d   :   H o s t   s p e e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   H C D _ S P E E D _ F U L L :   F u l l   s p e e d   m o d e  
     *                         @ a r g   H C D _ S P E E D _ L O W :   L o w   s p e e d   m o d e  
     * /  
 u i n t 3 2 _ t   U S B _ G e t H o s t S p e e d ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     _ _ I O   u i n t 3 2 _ t   h p r t 0   =   0 U ;  
  
     h p r t 0   =   U S B x _ H P R T 0 ;  
     r e t u r n   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P S P D )   > >   1 7 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   H o s t   C u r r e n t   F r a m e   n u m b e r  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   c u r r e n t   f r a m e   n u m b e r  
     * /  
 u i n t 3 2 _ t   U S B _ G e t C u r r e n t F r a m e ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     r e t u r n   ( U S B x _ H O S T - > H F N U M   &   U S B _ O T G _ H F N U M _ F R N U M ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   a   h o s t   c h a n n e l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     c h _ n u m     C h a n n e l   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     e p n u m     E n d p o i n t   n u m b e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     d e v _ a d d r e s s     C u r r e n t   d e v i c e   a d d r e s s  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   2 5 5  
     *   @ p a r a m     s p e e d     C u r r e n t   d e v i c e   s p e e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   U S B _ O T G _ S P E E D _ F U L L :   F u l l   s p e e d   m o d e  
     *                         @ a r g   U S B _ O T G _ S P E E D _ L O W :   L o w   s p e e d   m o d e  
     *   @ p a r a m     e p _ t y p e     E n d p o i n t   T y p e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         @ a r g   E P _ T Y P E _ C T R L :   C o n t r o l   t y p e  
     *                         @ a r g   E P _ T Y P E _ I S O C :   I s o c h r o n o u s   t y p e  
     *                         @ a r g   E P _ T Y P E _ B U L K :   B u l k   t y p e  
     *                         @ a r g   E P _ T Y P E _ I N T R :   I n t e r r u p t   t y p e  
     *   @ p a r a m     m p s     M a x   P a c k e t   S i z e  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   3 2 K  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ H C _ I n i t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   c h _ n u m ,  
                                                             u i n t 8 _ t   e p n u m ,   u i n t 8 _ t   d e v _ a d d r e s s ,   u i n t 8 _ t   s p e e d ,  
                                                             u i n t 8 _ t   e p _ t y p e ,   u i n t 1 6 _ t   m p s )  
 {  
     H A L _ S t a t u s T y p e D e f   r e t   =   H A L _ O K ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   H C c h a r E p D i r ;  
     u i n t 3 2 _ t   H C c h a r L o w S p e e d ;  
     u i n t 3 2 _ t   H o s t C o r e S p e e d ;  
  
     / *   C l e a r   o l d   i n t e r r u p t   c o n d i t i o n s   f o r   t h i s   h o s t   c h a n n e l .   * /  
     U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T   =   0 x F F F F F F F F U ;  
  
     / *   E n a b l e   c h a n n e l   i n t e r r u p t s   r e q u i r e d   f o r   t h i s   t r a n s f e r .   * /  
     s w i t c h   ( e p _ t y p e )  
     {  
         c a s e   E P _ T Y P E _ C T R L :  
         c a s e   E P _ T Y P E _ B U L K :  
             U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   =   U S B _ O T G _ H C I N T M S K _ X F R C M     |  
                                                                                         U S B _ O T G _ H C I N T M S K _ S T A L L M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ T X E R R M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ D T E R R M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ A H B E R R   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ N A K M ;  
  
             i f   ( ( e p n u m   &   0 x 8 0 U )   = =   0 x 8 0 U )  
             {  
                 U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   | =   U S B _ O T G _ H C I N T M S K _ B B E R R M ;  
             }  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ I N T R :  
             U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   =   U S B _ O T G _ H C I N T M S K _ X F R C M     |  
                                                                                         U S B _ O T G _ H C I N T M S K _ S T A L L M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ T X E R R M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ D T E R R M   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ N A K M       |  
                                                                                         U S B _ O T G _ H C I N T M S K _ A H B E R R   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ F R M O R M ;  
  
             i f   ( ( e p n u m   &   0 x 8 0 U )   = =   0 x 8 0 U )  
             {  
                 U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   | =   U S B _ O T G _ H C I N T M S K _ B B E R R M ;  
             }  
  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ I S O C :  
             U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   =   U S B _ O T G _ H C I N T M S K _ X F R C M     |  
                                                                                         U S B _ O T G _ H C I N T M S K _ A C K M       |  
                                                                                         U S B _ O T G _ H C I N T M S K _ A H B E R R   |  
                                                                                         U S B _ O T G _ H C I N T M S K _ F R M O R M ;  
  
             i f   ( ( e p n u m   &   0 x 8 0 U )   = =   0 x 8 0 U )  
             {  
                 U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C I N T M S K   | =   ( U S B _ O T G _ H C I N T M S K _ T X E R R M   |   U S B _ O T G _ H C I N T M S K _ B B E R R M ) ;  
             }  
             b r e a k ;  
  
         d e f a u l t :  
             r e t   =   H A L _ E R R O R ;  
             b r e a k ;  
     }  
  
     / *   E n a b l e   t h e   t o p   l e v e l   h o s t   c h a n n e l   i n t e r r u p t .   * /  
     U S B x _ H O S T - > H A I N T M S K   | =   1 U L   < <   ( c h _ n u m   &   0 x F U ) ;  
  
     / *   M a k e   s u r e   h o s t   c h a n n e l   i n t e r r u p t s   a r e   e n a b l e d .   * /  
     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ H C I M ;  
  
     / *   P r o g r a m   t h e   H C C H A R   r e g i s t e r   * /  
     i f   ( ( e p n u m   &   0 x 8 0 U )   = =   0 x 8 0 U )  
     {  
         H C c h a r E p D i r   =   ( 0 x 1 U   < <   1 5 )   &   U S B _ O T G _ H C C H A R _ E P D I R ;  
     }  
     e l s e  
     {  
         H C c h a r E p D i r   =   0 U ;  
     }  
  
     H o s t C o r e S p e e d   =   U S B _ G e t H o s t S p e e d ( U S B x ) ;  
  
     / *   L S   d e v i c e   p l u g g e d   t o   H U B   * /  
     i f   ( ( s p e e d   = =   H P R T 0 _ P R T S P D _ L O W _ S P E E D )   & &   ( H o s t C o r e S p e e d   ! =   H P R T 0 _ P R T S P D _ L O W _ S P E E D ) )  
     {  
         H C c h a r L o w S p e e d   =   ( 0 x 1 U   < <   1 7 )   &   U S B _ O T G _ H C C H A R _ L S D E V ;  
     }  
     e l s e  
     {  
         H C c h a r L o w S p e e d   =   0 U ;  
     }  
  
     U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C C H A R   =   ( ( ( u i n t 3 2 _ t ) d e v _ a d d r e s s   < <   2 2 )   &   U S B _ O T G _ H C C H A R _ D A D )   |  
                                                                             ( ( ( ( u i n t 3 2 _ t ) e p n u m   &   0 x 7 F U )   < <   1 1 )   &   U S B _ O T G _ H C C H A R _ E P N U M )   |  
                                                                             ( ( ( u i n t 3 2 _ t ) e p _ t y p e   < <   1 8 )   &   U S B _ O T G _ H C C H A R _ E P T Y P )   |  
                                                                             ( ( u i n t 3 2 _ t ) m p s   &   U S B _ O T G _ H C C H A R _ M P S I Z )   |   H C c h a r E p D i r   |   H C c h a r L o w S p e e d ;  
  
     i f   ( e p _ t y p e   = =   E P _ T Y P E _ I N T R )  
     {  
         U S B x _ H C ( ( u i n t 3 2 _ t ) c h _ n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ O D D F R M   ;  
     }  
  
     r e t u r n   r e t ;  
 }  
  
 / * *  
     *   @ b r i e f     S t a r t   a   t r a n s f e r   o v e r   a   h o s t   c h a n n e l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     h c     p o i n t e r   t o   h o s t   c h a n n e l   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ H C _ S t a r t X f e r ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   U S B _ O T G _ H C T y p e D e f   * h c )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   c h _ n u m   =   ( u i n t 3 2 _ t ) h c - > c h _ n u m ;  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     u i n t 8 _ t     i s _ o d d f r a m e ;  
     u i n t 1 6 _ t   l e n _ w o r d s ;  
     u i n t 1 6 _ t   n u m _ p a c k e t s ;  
     u i n t 1 6 _ t   m a x _ h c _ p k t _ c o u n t   =   2 5 6 U ;  
  
     / *   C o m p u t e   t h e   e x p e c t e d   n u m b e r   o f   p a c k e t s   a s s o c i a t e d   t o   t h e   t r a n s f e r   * /  
     i f   ( h c - > x f e r _ l e n   >   0 U )  
     {  
         n u m _ p a c k e t s   =   ( u i n t 1 6 _ t ) ( ( h c - > x f e r _ l e n   +   h c - > m a x _ p a c k e t   -   1 U )   /   h c - > m a x _ p a c k e t ) ;  
  
         i f   ( n u m _ p a c k e t s   >   m a x _ h c _ p k t _ c o u n t )  
         {  
             n u m _ p a c k e t s   =   m a x _ h c _ p k t _ c o u n t ;  
             h c - > X f e r S i z e   =   ( u i n t 3 2 _ t ) n u m _ p a c k e t s   *   h c - > m a x _ p a c k e t ;  
         }  
     }  
     e l s e  
     {  
         n u m _ p a c k e t s   =   1 U ;  
     }  
  
     / *  
       *   F o r   I N   c h a n n e l   H C T S I Z . X f e r S i z e   i s   e x p e c t e d   t o   b e   a n   i n t e g e r   m u l t i p l e   o f  
       *   m a x _ p a c k e t   s i z e .  
       * /  
     i f   ( h c - > e p _ i s _ i n   ! =   0 U )  
     {  
         h c - > X f e r S i z e   =   ( u i n t 3 2 _ t ) n u m _ p a c k e t s   *   h c - > m a x _ p a c k e t ;  
     }  
     e l s e  
     {  
         h c - > X f e r S i z e   =   h c - > x f e r _ l e n ;  
     }  
  
     / *   I n i t i a l i z e   t h e   H C T S I Z n   r e g i s t e r   * /  
     U S B x _ H C ( c h _ n u m ) - > H C T S I Z   =   ( h c - > X f e r S i z e   &   U S B _ O T G _ H C T S I Z _ X F R S I Z )   |  
                                                         ( ( ( u i n t 3 2 _ t ) n u m _ p a c k e t s   < <   1 9 )   &   U S B _ O T G _ H C T S I Z _ P K T C N T )   |  
                                                         ( ( ( u i n t 3 2 _ t ) h c - > d a t a _ p i d   < <   2 9 )   &   U S B _ O T G _ H C T S I Z _ D P I D ) ;  
  
     i s _ o d d f r a m e   =   ( ( ( u i n t 3 2 _ t ) U S B x _ H O S T - > H F N U M   &   0 x 0 1 U )   ! =   0 U )   ?   0 U   :   1 U ;  
     U S B x _ H C ( c h _ n u m ) - > H C C H A R   & =   ~ U S B _ O T G _ H C C H A R _ O D D F R M ;  
     U S B x _ H C ( c h _ n u m ) - > H C C H A R   | =   ( u i n t 3 2 _ t ) i s _ o d d f r a m e   < <   2 9 ;  
  
     / *   S e t   h o s t   c h a n n e l   e n a b l e   * /  
     t m p r e g   =   U S B x _ H C ( c h _ n u m ) - > H C C H A R ;  
     t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
  
     / *   m a k e   s u r e   t o   s e t   t h e   c o r r e c t   e p   d i r e c t i o n   * /  
     i f   ( h c - > e p _ i s _ i n   ! =   0 U )  
     {  
         t m p r e g   | =   U S B _ O T G _ H C C H A R _ E P D I R ;  
     }  
     e l s e  
     {  
         t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ E P D I R ;  
     }  
     t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
     U S B x _ H C ( c h _ n u m ) - > H C C H A R   =   t m p r e g ;  
  
     i f   ( ( h c - > e p _ i s _ i n   = =   0 U )   & &   ( h c - > x f e r _ l e n   >   0 U ) )  
     {  
         s w i t c h   ( h c - > e p _ t y p e )  
         {  
             / *   N o n   p e r i o d i c   t r a n s f e r   * /  
             c a s e   E P _ T Y P E _ C T R L :  
             c a s e   E P _ T Y P E _ B U L K :  
  
                 l e n _ w o r d s   =   ( u i n t 1 6 _ t ) ( ( h c - > x f e r _ l e n   +   3 U )   /   4 U ) ;  
  
                 / *   c h e c k   i f   t h e r e   i s   e n o u g h   s p a c e   i n   F I F O   s p a c e   * /  
                 i f   ( l e n _ w o r d s   >   ( U S B x - > H N P T X S T S   &   0 x F F F F U ) )  
                 {  
                     / *   n e e d   t o   p r o c e s s   d a t a   i n   n p t x f e m p t y   i n t e r r u p t   * /  
                     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ N P T X F E M ;  
                 }  
                 b r e a k ;  
  
             / *   P e r i o d i c   t r a n s f e r   * /  
             c a s e   E P _ T Y P E _ I N T R :  
             c a s e   E P _ T Y P E _ I S O C :  
                 l e n _ w o r d s   =   ( u i n t 1 6 _ t ) ( ( h c - > x f e r _ l e n   +   3 U )   /   4 U ) ;  
                 / *   c h e c k   i f   t h e r e   i s   e n o u g h   s p a c e   i n   F I F O   s p a c e   * /  
                 i f   ( l e n _ w o r d s   >   ( U S B x _ H O S T - > H P T X S T S   &   0 x F F F F U ) )   / *   s p l i t   t h e   t r a n s f e r   * /  
                 {  
                     / *   n e e d   t o   p r o c e s s   d a t a   i n   p t x f e m p t y   i n t e r r u p t   * /  
                     U S B x - > G I N T M S K   | =   U S B _ O T G _ G I N T M S K _ P T X F E M ;  
                 }  
                 b r e a k ;  
  
             d e f a u l t :  
                 b r e a k ;  
         }  
  
         / *   W r i t e   p a c k e t   i n t o   t h e   T x   F I F O .   * /  
         ( v o i d ) U S B _ W r i t e P a c k e t ( U S B x ,   h c - > x f e r _ b u f f ,   h c - > c h _ n u m ,   ( u i n t 1 6 _ t ) h c - > x f e r _ l e n ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   R e a d   a l l   h o s t   c h a n n e l   i n t e r r u p t s   s t a t u s  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 u i n t 3 2 _ t   U S B _ H C _ R e a d I n t e r r u p t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     r e t u r n   ( ( U S B x _ H O S T - > H A I N T )   &   0 x F F F F U ) ;  
 }  
  
 / * *  
     *   @ b r i e f     H a l t   a   h o s t   c h a n n e l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     h c _ n u m     H o s t   C h a n n e l   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ H C _ H a l t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   h c _ n u m )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   h c n u m   =   ( u i n t 3 2 _ t ) h c _ n u m ;  
     u i n t 3 2 _ t   c o u n t   =   0 U ;  
     u i n t 3 2 _ t   H c E p T y p e   =   ( U S B x _ H C ( h c n u m ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ E P T Y P )   > >   1 8 ;  
     u i n t 3 2 _ t   C h a n n e l E n a   =   ( U S B x _ H C ( h c n u m ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ C H E N A )   > >   3 1 ;  
  
     i f   ( ( ( U S B x - > G A H B C F G   &   U S B _ O T G _ G A H B C F G _ D M A E N )   = =   U S B _ O T G _ G A H B C F G _ D M A E N )   & &  
             ( C h a n n e l E n a   = =   0 U ) )  
     {  
         r e t u r n   H A L _ O K ;  
     }  
  
     / *   C h e c k   f o r   s p a c e   i n   t h e   r e q u e s t   q u e u e   t o   i s s u e   t h e   h a l t .   * /  
     i f   ( ( H c E p T y p e   = =   H C C H A R _ C T R L )   | |   ( H c E p T y p e   = =   H C C H A R _ B U L K ) )  
     {  
         U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H D I S ;  
  
         i f   ( ( U S B x - > G A H B C F G   &   U S B _ O T G _ G A H B C F G _ D M A E N )   = =   0 U )  
         {  
             i f   ( ( U S B x - > H N P T X S T S   &   ( 0 x F F U   < <   1 6 ) )   = =   0 U )  
             {  
                 U S B x _ H C ( h c n u m ) - > H C C H A R   & =   ~ U S B _ O T G _ H C C H A R _ C H E N A ;  
                 U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
                 U S B x _ H C ( h c n u m ) - > H C C H A R   & =   ~ U S B _ O T G _ H C C H A R _ E P D I R ;  
                 d o  
                 {  
                     i f   ( + + c o u n t   >   1 0 0 0 U )  
                     {  
                         b r e a k ;  
                     }  
                 }   w h i l e   ( ( U S B x _ H C ( h c n u m ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ C H E N A )   = =   U S B _ O T G _ H C C H A R _ C H E N A ) ;  
             }  
             e l s e  
             {  
                 U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
             }  
         }  
     }  
     e l s e  
     {  
         U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H D I S ;  
  
         i f   ( ( U S B x _ H O S T - > H P T X S T S   &   ( 0 x F F U   < <   1 6 ) )   = =   0 U )  
         {  
             U S B x _ H C ( h c n u m ) - > H C C H A R   & =   ~ U S B _ O T G _ H C C H A R _ C H E N A ;  
             U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
             U S B x _ H C ( h c n u m ) - > H C C H A R   & =   ~ U S B _ O T G _ H C C H A R _ E P D I R ;  
             d o  
             {  
                 i f   ( + + c o u n t   >   1 0 0 0 U )  
                 {  
                     b r e a k ;  
                 }  
             }   w h i l e   ( ( U S B x _ H C ( h c n u m ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ C H E N A )   = =   U S B _ O T G _ H C C H A R _ C H E N A ) ;  
         }  
         e l s e  
         {  
             U S B x _ H C ( h c n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a t e   D o   P i n g   p r o t o c o l  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ p a r a m     h c _ n u m     H o s t   C h a n n e l   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D o P i n g ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ,   u i n t 8 _ t   c h _ n u m )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   c h n u m   =   ( u i n t 3 2 _ t ) c h _ n u m ;  
     u i n t 3 2 _ t   n u m _ p a c k e t s   =   1 U ;  
     u i n t 3 2 _ t   t m p r e g ;  
  
     U S B x _ H C ( c h n u m ) - > H C T S I Z   =   ( ( n u m _ p a c k e t s   < <   1 9 )   &   U S B _ O T G _ H C T S I Z _ P K T C N T )   |  
                                                       U S B _ O T G _ H C T S I Z _ D O P I N G ;  
  
     / *   S e t   h o s t   c h a n n e l   e n a b l e   * /  
     t m p r e g   =   U S B x _ H C ( c h n u m ) - > H C C H A R ;  
     t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
     t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
     U S B x _ H C ( c h n u m ) - > H C C H A R   =   t m p r e g ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   H o s t   C o r e  
     *   @ p a r a m     U S B x     S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S t o p H o s t ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   c o u n t   =   0 U ;  
     u i n t 3 2 _ t   v a l u e ;  
     u i n t 3 2 _ t   i ;  
  
     ( v o i d ) U S B _ D i s a b l e G l o b a l I n t ( U S B x ) ;  
  
     / *   F l u s h   F I F O   * /  
     ( v o i d ) U S B _ F l u s h T x F i f o ( U S B x ,   0 x 1 0 U ) ;  
     ( v o i d ) U S B _ F l u s h R x F i f o ( U S B x ) ;  
  
     / *   F l u s h   o u t   a n y   l e f t o v e r   q u e u e d   r e q u e s t s .   * /  
     f o r   ( i   =   0 U ;   i   < =   1 5 U ;   i + + )  
     {  
         v a l u e   =   U S B x _ H C ( i ) - > H C C H A R ;  
         v a l u e   | =     U S B _ O T G _ H C C H A R _ C H D I S ;  
         v a l u e   & =   ~ U S B _ O T G _ H C C H A R _ C H E N A ;  
         v a l u e   & =   ~ U S B _ O T G _ H C C H A R _ E P D I R ;  
         U S B x _ H C ( i ) - > H C C H A R   =   v a l u e ;  
     }  
  
     / *   H a l t   a l l   c h a n n e l s   t o   p u t   t h e m   i n t o   a   k n o w n   s t a t e .   * /  
     f o r   ( i   =   0 U ;   i   < =   1 5 U ;   i + + )  
     {  
         v a l u e   =   U S B x _ H C ( i ) - > H C C H A R ;  
         v a l u e   | =   U S B _ O T G _ H C C H A R _ C H D I S ;  
         v a l u e   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
         v a l u e   & =   ~ U S B _ O T G _ H C C H A R _ E P D I R ;  
         U S B x _ H C ( i ) - > H C C H A R   =   v a l u e ;  
  
         d o  
         {  
             i f   ( + + c o u n t   >   1 0 0 0 U )  
             {  
                 b r e a k ;  
             }  
         }   w h i l e   ( ( U S B x _ H C ( i ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ C H E N A )   = =   U S B _ O T G _ H C C H A R _ C H E N A ) ;  
     }  
  
     / *   C l e a r   a n y   p e n d i n g   H o s t   i n t e r r u p t s   * /  
     U S B x _ H O S T - > H A I N T   =   0 x F F F F F F F F U ;  
     U S B x - > G I N T S T S   =   0 x F F F F F F F F U ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ A c t i v a t e R e m o t e W a k e u p   a c t i v e   r e m o t e   w a k e u p   s i g n a l l i n g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ A c t i v a t e R e m o t e W a k e u p ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     i f   ( ( U S B x _ D E V I C E - > D S T S   &   U S B _ O T G _ D S T S _ S U S P S T S )   = =   U S B _ O T G _ D S T S _ S U S P S T S )  
     {  
         / *   a c t i v e   R e m o t e   w a k e u p   s i g n a l l i n g   * /  
         U S B x _ D E V I C E - > D C T L   | =   U S B _ O T G _ D C T L _ R W U S I G ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e A c t i v a t e R e m o t e W a k e u p   d e - a c t i v e   r e m o t e   w a k e u p   s i g n a l l i n g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e A c t i v a t e R e m o t e W a k e u p ( U S B _ O T G _ G l o b a l T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
  
     / *   a c t i v e   R e m o t e   w a k e u p   s i g n a l l i n g   * /  
     U S B x _ D E V I C E - > D C T L   & =   ~ ( U S B _ O T G _ D C T L _ R W U S I G ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   U S B   C o r e  
     *   @ p a r a m     U S B x   U S B   I n s t a n c e  
     *   @ p a r a m     c f g   p o i n t e r   t o   a   U S B _ C f g T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S B x   p e r i p h e r a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ C o r e I n i t ( U S B _ T y p e D e f   * U S B x ,   U S B _ C f g T y p e D e f   c f g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( c f g ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E n a b l e G l o b a l I n t  
     *                   E n a b l e s   t h e   c o n t r o l l e r ' s   G l o b a l   I n t   i n   t h e   A H B   C o n f i g   r e g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E n a b l e G l o b a l I n t ( U S B _ T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   w i n t e r r u p t m a s k ;  
  
     / *   C l e a r   p e n d i n g   i n t e r r u p t s   * /  
     U S B x - > I S T R   =   0 U ;  
  
     / *   S e t   w i n t e r r u p t m a s k   v a r i a b l e   * /  
     w i n t e r r u p t m a s k   =   U S B _ C N T R _ C T R M     |   U S B _ C N T R _ W K U P M   |  
                                       U S B _ C N T R _ S U S P M   |   U S B _ C N T R _ E R R M   |  
                                       U S B _ C N T R _ S O F M   |   U S B _ C N T R _ E S O F M   |  
                                       U S B _ C N T R _ R E S E T M ;  
  
     / *   S e t   i n t e r r u p t   m a s k   * /  
     U S B x - > C N T R   =   ( u i n t 1 6 _ t ) w i n t e r r u p t m a s k ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D i s a b l e G l o b a l I n t  
     *                   D i s a b l e   t h e   c o n t r o l l e r ' s   G l o b a l   I n t   i n   t h e   A H B   C o n f i g   r e g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D i s a b l e G l o b a l I n t ( U S B _ T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   w i n t e r r u p t m a s k ;  
  
     / *   S e t   w i n t e r r u p t m a s k   v a r i a b l e   * /  
     w i n t e r r u p t m a s k   =   U S B _ C N T R _ C T R M     |   U S B _ C N T R _ W K U P M   |  
                                       U S B _ C N T R _ S U S P M   |   U S B _ C N T R _ E R R M   |  
                                       U S B _ C N T R _ S O F M   |   U S B _ C N T R _ E S O F M   |  
                                       U S B _ C N T R _ R E S E T M ;  
  
     / *   C l e a r   i n t e r r u p t   m a s k   * /  
     U S B x - > C N T R   & =   ( u i n t 1 6 _ t ) ( ~ w i n t e r r u p t m a s k ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S e t C u r r e n t M o d e   S e t   f u n c t i o n a l   m o d e  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     m o d e   c u r r e n t   c o r e   m o d e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   t h e s e   v a l u e s :  
     *                         @ a r g   U S B _ D E V I C E _ M O D E   P e r i p h e r a l   m o d e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S e t C u r r e n t M o d e ( U S B _ T y p e D e f   * U S B x ,   U S B _ M o d e T y p e D e f   m o d e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( m o d e ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v I n i t   I n i t i a l i z e s   t h e   U S B   c o n t r o l l e r   r e g i s t e r s  
     *                   f o r   d e v i c e   m o d e  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     c f g     p o i n t e r   t o   a   U S B _ C f g T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S B x   p e r i p h e r a l .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e v I n i t ( U S B _ T y p e D e f   * U S B x ,   U S B _ C f g T y p e D e f   c f g )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( c f g ) ;  
  
     / *   I n i t   D e v i c e   * /  
     / *   C N T R _ F R E S   =   1   * /  
     U S B x - > C N T R   =   ( u i n t 1 6 _ t ) U S B _ C N T R _ F R E S ;  
  
     / *   C N T R _ F R E S   =   0   * /  
     U S B x - > C N T R   =   0 U ;  
  
     / *   C l e a r   p e n d i n g   i n t e r r u p t s   * /  
     U S B x - > I S T R   =   0 U ;  
  
     / * S e t   B t a b l e   A d d r e s s * /  
     U S B x - > B T A B L E   =   B T A B L E _ A D D R E S S ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ F l u s h T x F i f o   :   F l u s h   a   T x   F I F O  
     *   @ p a r a m     U S B x   :   S e l e c t e d   d e v i c e  
     *   @ p a r a m     n u m   :   F I F O   n u m b e r  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
                         1 5   m e a n s   F l u s h   a l l   T x   F I F O s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ F l u s h T x F i f o ( U S B _ T y p e D e f   * U S B x ,   u i n t 3 2 _ t   n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( n u m ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ F l u s h R x F i f o   :   F l u s h   R x   F I F O  
     *   @ p a r a m     U S B x   :   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ F l u s h R x F i f o ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 # i f   d e f i n e d   ( H A L _ P C D _ M O D U L E _ E N A B L E D )  
 / * *  
     *   @ b r i e f     A c t i v a t e   a n d   c o n f i g u r e   a n   e n d p o i n t  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ A c t i v a t e E n d p o i n t ( U S B _ T y p e D e f   * U S B x ,   U S B _ E P T y p e D e f   * e p )  
 {  
     H A L _ S t a t u s T y p e D e f   r e t   =   H A L _ O K ;  
     u i n t 1 6 _ t   w E p R e g V a l ;  
  
     w E p R e g V a l   =   P C D _ G E T _ E N D P O I N T ( U S B x ,   e p - > n u m )   &   U S B _ E P _ T _ M A S K ;  
  
     / *   i n i t i a l i z e   E n d p o i n t   * /  
     s w i t c h   ( e p - > t y p e )  
     {  
         c a s e   E P _ T Y P E _ C T R L :  
             w E p R e g V a l   | =   U S B _ E P _ C O N T R O L ;  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ B U L K :  
             w E p R e g V a l   | =   U S B _ E P _ B U L K ;  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ I N T R :  
             w E p R e g V a l   | =   U S B _ E P _ I N T E R R U P T ;  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ I S O C :  
             w E p R e g V a l   | =   U S B _ E P _ I S O C H R O N O U S ;  
             b r e a k ;  
  
         d e f a u l t :  
             r e t   =   H A L _ E R R O R ;  
             b r e a k ;  
     }  
  
     P C D _ S E T _ E N D P O I N T ( U S B x ,   e p - > n u m ,   ( w E p R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;  
  
     P C D _ S E T _ E P _ A D D R E S S ( U S B x ,   e p - > n u m ,   e p - > n u m ) ;  
  
     i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
     {  
         i f   ( e p - > i s _ i n   ! =   0 U )  
         {  
             / * S e t   t h e   e n d p o i n t   T r a n s m i t   b u f f e r   a d d r e s s   * /  
             P C D _ S E T _ E P _ T X _ A D D R E S S ( U S B x ,   e p - > n u m ,   e p - > p m a a d r e s s ) ;  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             i f   ( e p - > t y p e   ! =   E P _ T Y P E _ I S O C )  
             {  
                 / *   C o n f i g u r e   N A K   s t a t u s   f o r   t h e   E n d p o i n t   * /  
                 P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ N A K ) ;  
             }  
             e l s e  
             {  
                 / *   C o n f i g u r e   T X   E n d p o i n t   t o   d i s a b l e d   s t a t e   * /  
                 P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
             }  
         }  
         e l s e  
         {  
             / * S e t   t h e   e n d p o i n t   R e c e i v e   b u f f e r   a d d r e s s   * /  
             P C D _ S E T _ E P _ R X _ A D D R E S S ( U S B x ,   e p - > n u m ,   e p - > p m a a d r e s s ) ;  
  
             / * S e t   t h e   e n d p o i n t   R e c e i v e   b u f f e r   c o u n t e r * /  
             P C D _ S E T _ E P _ R X _ C N T ( U S B x ,   e p - > n u m ,   e p - > m a x p a c k e t ) ;  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   C o n f i g u r e   V A L I D   s t a t u s   f o r   t h e   E n d p o i n t * /  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ V A L I D ) ;  
         }  
     }  
     / * D o u b l e   B u f f e r * /  
     e l s e  
     {  
         / *   S e t   t h e   e n d p o i n t   a s   d o u b l e   b u f f e r e d   * /  
         P C D _ S E T _ E P _ D B U F ( U S B x ,   e p - > n u m ) ;  
  
         / *   S e t   b u f f e r   a d d r e s s   f o r   d o u b l e   b u f f e r e d   m o d e   * /  
         P C D _ S E T _ E P _ D B U F _ A D D R ( U S B x ,   e p - > n u m ,   e p - > p m a a d d r 0 ,   e p - > p m a a d d r 1 ) ;  
  
         i f   ( e p - > i s _ i n   = =   0 U )  
         {  
             / *   C l e a r   t h e   d a t a   t o g g l e   b i t s   f o r   t h e   e n d p o i n t   I N / O U T   * /  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ V A L I D ) ;  
             P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
         }  
         e l s e  
         {  
             / *   C l e a r   t h e   d a t a   t o g g l e   b i t s   f o r   t h e   e n d p o i n t   I N / O U T   * /  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             i f   ( e p - > t y p e   ! =   E P _ T Y P E _ I S O C )  
             {  
                 / *   C o n f i g u r e   N A K   s t a t u s   f o r   t h e   E n d p o i n t   * /  
                 P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ N A K ) ;  
             }  
             e l s e  
             {  
                 / *   C o n f i g u r e   T X   E n d p o i n t   t o   d i s a b l e d   s t a t e   * /  
                 P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
             }  
  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ D I S ) ;  
         }  
     }  
  
     r e t u r n   r e t ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - a c t i v a t e   a n d   d e - i n i t i a l i z e   a n   e n d p o i n t  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e a c t i v a t e E n d p o i n t ( U S B _ T y p e D e f   * U S B x ,   U S B _ E P T y p e D e f   * e p )  
 {  
     i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
     {  
         i f   ( e p - > i s _ i n   ! =   0 U )  
         {  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   C o n f i g u r e   D I S A B L E   s t a t u s   f o r   t h e   E n d p o i n t * /  
             P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
         }  
         e l s e  
         {  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   C o n f i g u r e   D I S A B L E   s t a t u s   f o r   t h e   E n d p o i n t * /  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ D I S ) ;  
         }  
     }  
     / * D o u b l e   B u f f e r * /  
     e l s e  
     {  
         i f   ( e p - > i s _ i n   = =   0 U )  
         {  
             / *   C l e a r   t h e   d a t a   t o g g l e   b i t s   f o r   t h e   e n d p o i n t   I N / O U T * /  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   R e s e t   v a l u e   o f   t h e   d a t a   t o g g l e   b i t s   f o r   t h e   e n d p o i n t   o u t * /  
             P C D _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ D I S ) ;  
             P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
         }  
         e l s e  
         {  
             / *   C l e a r   t h e   d a t a   t o g g l e   b i t s   f o r   t h e   e n d p o i n t   I N / O U T * /  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
             P C D _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   C o n f i g u r e   D I S A B L E   s t a t u s   f o r   t h e   E n d p o i n t * /  
             P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ D I S ) ;  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ D I S ) ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P S t a r t X f e r   s e t u p   a n d   s t a r t s   a   t r a n s f e r   o v e r   a n   E P  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P S t a r t X f e r ( U S B _ T y p e D e f   * U S B x ,   U S B _ E P T y p e D e f   * e p )  
 {  
     u i n t 3 2 _ t   l e n ;  
     u i n t 1 6 _ t   p m a b u f f e r ;  
     u i n t 1 6 _ t   w E P V a l ;  
  
     / *   I N   e n d p o i n t   * /  
     i f   ( e p - > i s _ i n   = =   1 U )  
     {  
         / * M u l t i   p a c k e t   t r a n s f e r * /  
         i f   ( e p - > x f e r _ l e n   >   e p - > m a x p a c k e t )  
         {  
             l e n   =   e p - > m a x p a c k e t ;  
         }  
         e l s e  
         {  
             l e n   =   e p - > x f e r _ l e n ;  
         }  
  
         / *   c o n f i g u r e   a n d   v a l i d a t e   T x   e n d p o i n t   * /  
         i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
         {  
             U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   e p - > p m a a d r e s s ,   ( u i n t 1 6 _ t ) l e n ) ;  
             P C D _ S E T _ E P _ T X _ C N T ( U S B x ,   e p - > n u m ,   l e n ) ;  
         }  
         e l s e  
         {  
             / *   d o u b l e   b u f f e r   b u l k   m a n a g e m e n t   * /  
             i f   ( e p - > t y p e   = =   E P _ T Y P E _ B U L K )  
             {  
                 i f   ( e p - > x f e r _ l e n _ d b   >   e p - > m a x p a c k e t )  
                 {  
                     / *   e n a b l e   d o u b l e   b u f f e r   * /  
                     P C D _ S E T _ E P _ D B U F ( U S B x ,   e p - > n u m ) ;  
  
                     / *   e a c h   T i m e   t o   w r i t e   i n   P M A   x f e r _ l e n _ d b   w i l l   * /  
                     e p - > x f e r _ l e n _ d b   - =   l e n ;  
  
                     / *   F i l l   t h e   t w o   f i r s t   b u f f e r   i n   t h e   B u f f e r 0   &   B u f f e r 1   * /  
                     i f   ( ( P C D _ G E T _ E N D P O I N T ( U S B x ,   e p - > n u m )   &   U S B _ E P _ D T O G _ T X )   ! =   0 U )  
                     {  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 1   * /  
                         P C D _ S E T _ E P _ D B U F 1 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 1 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                         e p - > x f e r _ b u f f   + =   l e n ;  
  
                         i f   ( e p - > x f e r _ l e n _ d b   >   e p - > m a x p a c k e t )  
                         {  
                             e p - > x f e r _ l e n _ d b   - =   l e n ;  
                         }  
                         e l s e  
                         {  
                             l e n   =   e p - > x f e r _ l e n _ d b ;  
                             e p - > x f e r _ l e n _ d b   =   0 U ;  
                         }  
  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 0   * /  
                         P C D _ S E T _ E P _ D B U F 0 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 0 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     }  
                     e l s e  
                     {  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 0   * /  
                         P C D _ S E T _ E P _ D B U F 0 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 0 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                         e p - > x f e r _ b u f f   + =   l e n ;  
  
                         i f   ( e p - > x f e r _ l e n _ d b   >   e p - > m a x p a c k e t )  
                         {  
                             e p - > x f e r _ l e n _ d b   - =   l e n ;  
                         }  
                         e l s e  
                         {  
                             l e n   =   e p - > x f e r _ l e n _ d b ;  
                             e p - > x f e r _ l e n _ d b   =   0 U ;  
                         }  
  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 1   * /  
                         P C D _ S E T _ E P _ D B U F 1 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 1 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     }  
                 }  
                 / *   a u t o   S w i t c h   t o   s i n g l e   b u f f e r   m o d e   w h e n   t r a n s f e r   < M p s   n o   n e e d   t o   m a n a g e   i n   d o u b l e   b u f f e r   * /  
                 e l s e  
                 {  
                     l e n   =   e p - > x f e r _ l e n _ d b ;  
  
                     / *   d i s a b l e   d o u b l e   b u f f e r   m o d e   * /  
                     P C D _ C L E A R _ E P _ D B U F ( U S B x ,   e p - > n u m ) ;  
  
                     / *   S e t   T x   c o u n t   w i t h   n b r e   o f   b y t e   t o   b e   t r a n s m i t t e d   * /  
                     P C D _ S E T _ E P _ T X _ C N T ( U S B x ,   e p - > n u m ,   l e n ) ;  
                     p m a b u f f e r   =   e p - > p m a a d d r 0 ;  
  
                     / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                     U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                 }  
             } / *   e n d   i f   b u l k   d o u b l e   b u f f e r   * /  
  
             / *   m a n a g e   i s o c h r o n o u s   d o u b l e   b u f f e r   I N   m o d e   * /  
             e l s e  
             {  
                 / *   e n a b l e   d o u b l e   b u f f e r   * /  
                 P C D _ S E T _ E P _ D B U F ( U S B x ,   e p - > n u m ) ;  
  
                 / *   e a c h   T i m e   t o   w r i t e   i n   P M A   x f e r _ l e n _ d b   w i l l   * /  
                 e p - > x f e r _ l e n _ d b   - =   l e n ;  
  
                 / *   F i l l   t h e   d a t a   b u f f e r   * /  
                 i f   ( ( P C D _ G E T _ E N D P O I N T ( U S B x ,   e p - > n u m )   &   U S B _ E P _ D T O G _ T X )   ! =   0 U )  
                 {  
                     / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 1   * /  
                     P C D _ S E T _ E P _ D B U F 1 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                     p m a b u f f e r   =   e p - > p m a a d d r 1 ;  
  
                     / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                     U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     e p - > x f e r _ b u f f   + =   l e n ;  
  
                     i f   ( e p - > x f e r _ l e n _ d b   >   e p - > m a x p a c k e t )  
                     {  
                         e p - > x f e r _ l e n _ d b   - =   l e n ;  
                     }  
                     e l s e  
                     {  
                         l e n   =   e p - > x f e r _ l e n _ d b ;  
                         e p - > x f e r _ l e n _ d b   =   0 U ;  
                     }  
  
                     i f   ( l e n   >   0 U )  
                     {  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 0   * /  
                         P C D _ S E T _ E P _ D B U F 0 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 0 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     }  
                 }  
                 e l s e  
                 {  
                     / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 0   * /  
                     P C D _ S E T _ E P _ D B U F 0 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                     p m a b u f f e r   =   e p - > p m a a d d r 0 ;  
  
                     / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                     U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     e p - > x f e r _ b u f f   + =   l e n ;  
  
                     i f   ( e p - > x f e r _ l e n _ d b   >   e p - > m a x p a c k e t )  
                     {  
                         e p - > x f e r _ l e n _ d b   - =   l e n ;  
                     }  
                     e l s e  
                     {  
                         l e n   =   e p - > x f e r _ l e n _ d b ;  
                         e p - > x f e r _ l e n _ d b   =   0 U ;  
                     }  
  
                     i f   ( l e n   >   0 U )  
                     {  
                         / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 1   * /  
                         P C D _ S E T _ E P _ D B U F 1 _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
                         p m a b u f f e r   =   e p - > p m a a d d r 1 ;  
  
                         / *   W r i t e   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                         U S B _ W r i t e P M A ( U S B x ,   e p - > x f e r _ b u f f ,   p m a b u f f e r ,   ( u i n t 1 6 _ t ) l e n ) ;  
                     }  
                 }  
             }  
         }  
  
         P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ V A L I D ) ;  
     }  
     e l s e   / *   O U T   e n d p o i n t   * /  
     {  
         i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
         {  
             / *   M u l t i   p a c k e t   t r a n s f e r   * /  
             i f   ( e p - > x f e r _ l e n   >   e p - > m a x p a c k e t )  
             {  
                 l e n   =   e p - > m a x p a c k e t ;  
                 e p - > x f e r _ l e n   - =   l e n ;  
             }  
             e l s e  
             {  
                 l e n   =   e p - > x f e r _ l e n ;  
                 e p - > x f e r _ l e n   =   0 U ;  
             }  
             / *   c o n f i g u r e   a n d   v a l i d a t e   R x   e n d p o i n t   * /  
             P C D _ S E T _ E P _ R X _ C N T ( U S B x ,   e p - > n u m ,   l e n ) ;  
         }  
         e l s e  
         {  
             / *   F i r s t   T r a n s f e r   C o m i n g   F r o m   H A L _ P C D _ E P _ R e c e i v e   &   F r o m   I S R   * /  
             / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   * /  
             i f   ( e p - > t y p e   = =   E P _ T Y P E _ B U L K )  
             {  
                 P C D _ S E T _ E P _ D B U F _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   e p - > m a x p a c k e t ) ;  
  
                 / *   C o m i n g   f r o m   I S R   * /  
                 i f   ( e p - > x f e r _ c o u n t   ! =   0 U )  
                 {  
                     / *   u p d a t e   l a s t   v a l u e   t o   c h e c k   i f   t h e r e   i s   b l o c k i n g   s t a t e   * /  
                     w E P V a l   =   P C D _ G E T _ E N D P O I N T ( U S B x ,   e p - > n u m ) ;  
  
                     / * B l o c k i n g   S t a t e   * /  
                     i f   ( ( ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   ! =   0 U )   & &   ( ( w E P V a l   &   U S B _ E P _ D T O G _ T X )   ! =   0 U ) )   | |  
                             ( ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   = =   0 U )   & &   ( ( w E P V a l   &   U S B _ E P _ D T O G _ T X )   = =   0 U ) ) )  
                     {  
                         P C D _ F r e e U s e r B u f f e r ( U S B x ,   e p - > n u m ,   0 U ) ;  
                     }  
                 }  
             }  
             / *   i s o   o u t   d o u b l e   * /  
             e l s e   i f   ( e p - > t y p e   = =   E P _ T Y P E _ I S O C )  
             {  
                 / *   M u l t i   p a c k e t   t r a n s f e r   * /  
                 i f   ( e p - > x f e r _ l e n   >   e p - > m a x p a c k e t )  
                 {  
                     l e n   =   e p - > m a x p a c k e t ;  
                     e p - > x f e r _ l e n   - =   l e n ;  
                 }  
                 e l s e  
                 {  
                     l e n   =   e p - > x f e r _ l e n ;  
                     e p - > x f e r _ l e n   =   0 U ;  
                 }  
                 P C D _ S E T _ E P _ D B U F _ C N T ( U S B x ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
             }  
             e l s e  
             {  
                 r e t u r n   H A L _ E R R O R ;  
             }  
         }  
  
         P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ V A L I D ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     U S B _ E P S e t S t a l l   s e t   a   s t a l l   c o n d i t i o n   o v e r   a n   E P  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P S e t S t a l l ( U S B _ T y p e D e f   * U S B x ,   U S B _ E P T y p e D e f   * e p )  
 {  
     i f   ( e p - > i s _ i n   ! =   0 U )  
     {  
         P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ S T A L L ) ;  
     }  
     e l s e  
     {  
         P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ S T A L L ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ E P C l e a r S t a l l   C l e a r   a   s t a l l   c o n d i t i o n   o v e r   a n   E P  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p   p o i n t e r   t o   e n d p o i n t   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P C l e a r S t a l l ( U S B _ T y p e D e f   * U S B x ,   U S B _ E P T y p e D e f   * e p )  
 {  
     i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
     {  
         i f   ( e p - > i s _ i n   ! =   0 U )  
         {  
             P C D _ C L E A R _ T X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             i f   ( e p - > t y p e   ! =   E P _ T Y P E _ I S O C )  
             {  
                 / *   C o n f i g u r e   N A K   s t a t u s   f o r   t h e   E n d p o i n t   * /  
                 P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ T X _ N A K ) ;  
             }  
         }  
         e l s e  
         {  
             P C D _ C L E A R _ R X _ D T O G ( U S B x ,   e p - > n u m ) ;  
  
             / *   C o n f i g u r e   V A L I D   s t a t u s   f o r   t h e   E n d p o i n t   * /  
             P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   e p - > n u m ,   U S B _ E P _ R X _ V A L I D ) ;  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
 # e n d i f  
  
 / * *  
     *   @ b r i e f     U S B _ S t o p D e v i c e   S t o p   t h e   u s b   d e v i c e   m o d e  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ S t o p D e v i c e ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   d i s a b l e   a l l   i n t e r r u p t s   a n d   f o r c e   U S B   r e s e t   * /  
     U S B x - > C N T R   =   ( u i n t 1 6 _ t ) U S B _ C N T R _ F R E S ;  
  
     / *   c l e a r   i n t e r r u p t   s t a t u s   r e g i s t e r   * /  
     U S B x - > I S T R   =   0 U ;  
  
     / *   s w i t c h - o f f   d e v i c e   * /  
     U S B x - > C N T R   =   ( u i n t 1 6 _ t ) ( U S B _ C N T R _ F R E S   |   U S B _ C N T R _ P D W N ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ S e t D e v A d d r e s s   S t o p   t h e   u s b   d e v i c e   m o d e  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     a d d r e s s   n e w   d e v i c e   a d d r e s s   t o   b e   a s s i g n e d  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   2 5 5  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ S e t D e v A d d r e s s ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   a d d r e s s )  
 {  
     i f   ( a d d r e s s   = =   0 U )  
     {  
         / *   s e t   d e v i c e   a d d r e s s   a n d   e n a b l e   f u n c t i o n   * /  
         U S B x - > D A D D R   =   ( u i n t 1 6 _ t ) U S B _ D A D D R _ E F ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v C o n n e c t   C o n n e c t   t h e   U S B   d e v i c e   b y   e n a b l i n g   t h e   p u l l - u p / p u l l - d o w n  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ D e v C o n n e c t ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e v D i s c o n n e c t   D i s c o n n e c t   t h e   U S B   d e v i c e   b y   d i s a b l i n g   t h e   p u l l - u p / p u l l - d o w n  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     U S B _ D e v D i s c o n n e c t ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d I n t e r r u p t s   r e t u r n   t h e   g l o b a l   U S B   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t     U S B _ R e a d I n t e r r u p t s ( U S B _ T y p e D e f   * U S B x )  
 {  
     u i n t 3 2 _ t   t m p r e g ;  
  
     t m p r e g   =   U S B x - > I S T R ;  
     r e t u r n   t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d D e v A l l O u t E p I n t e r r u p t   r e t u r n   t h e   U S B   d e v i c e   O U T   e n d p o i n t s   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v A l l O u t E p I n t e r r u p t ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   ( 0 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ R e a d D e v A l l I n E p I n t e r r u p t   r e t u r n   t h e   U S B   d e v i c e   I N   e n d p o i n t s   i n t e r r u p t   s t a t u s  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v A l l I n E p I n t e r r u p t ( U S B _ T y p e D e f   * U S B x )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   ( 0 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   D e v i c e   O U T   E P   I n t e r r u p t   r e g i s t e r  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   1 5  
     *   @ r e t v a l   D e v i c e   O U T   E P   I n t e r r u p t   r e g i s t e r  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v O u t E P I n t e r r u p t ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( e p n u m ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   ( 0 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   D e v i c e   I N   E P   I n t e r r u p t   r e g i s t e r  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   1 5  
     *   @ r e t v a l   D e v i c e   I N   E P   I n t e r r u p t   r e g i s t e r  
     * /  
 u i n t 3 2 _ t   U S B _ R e a d D e v I n E P I n t e r r u p t ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( e p n u m ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   ( 0 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ C l e a r I n t e r r u p t s :   c l e a r   a   U S B   i n t e r r u p t  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     i n t e r r u p t     f l a g  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d     U S B _ C l e a r I n t e r r u p t s ( U S B _ T y p e D e f   * U S B x ,   u i n t 3 2 _ t   i n t e r r u p t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( i n t e r r u p t ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     P r e p a r e   t h e   E P 0   t o   s t a r t   t h e   f i r s t   c o n t r o l   s e t u p  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ p a r a m     p s e t u p   p o i n t e r   t o   s e t u p   p a c k e t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ E P 0 _ O u t S t a r t ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   * p s e t u p )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( U S B x ) ;  
     U N U S E D ( p s e t u p ) ;  
     / *   N O T E   :   -   T h i s   f u n c t i o n   i s   n o t   r e q u i r e d   b y   U S B   D e v i c e   F S   p e r i p h e r a l ,   i t   i s   u s e d  
                             o n l y   b y   U S B   O T G   F S   p e r i p h e r a l .  
                         -   T h i s   f u n c t i o n   i s   a d d e d   t o   e n s u r e   c o m p a t i b i l i t y   a c r o s s   p l a t f o r m s .  
       * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ A c t i v a t e R e m o t e W a k e u p   :   a c t i v e   r e m o t e   w a k e u p   s i g n a l l i n g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ A c t i v a t e R e m o t e W a k e u p ( U S B _ T y p e D e f   * U S B x )  
 {  
     U S B x - > C N T R   | =   ( u i n t 1 6 _ t ) U S B _ C N T R _ R E S U M E ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S B _ D e A c t i v a t e R e m o t e W a k e u p   d e - a c t i v e   r e m o t e   w a k e u p   s i g n a l l i n g  
     *   @ p a r a m     U S B x   S e l e c t e d   d e v i c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   U S B _ D e A c t i v a t e R e m o t e W a k e u p ( U S B _ T y p e D e f   * U S B x )  
 {  
     U S B x - > C N T R   & =   ( u i n t 1 6 _ t ) ( ~ U S B _ C N T R _ R E S U M E ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   C o p y   a   b u f f e r   f r o m   u s e r   m e m o r y   a r e a   t o   p a c k e t   m e m o r y   a r e a   ( P M A )  
     *   @ p a r a m       U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m       p b U s r B u f   p o i n t e r   t o   u s e r   m e m o r y   a r e a .  
     *   @ p a r a m       w P M A B u f A d d r   a d d r e s s   i n t o   P M A .  
     *   @ p a r a m       w N B y t e s   n o .   o f   b y t e s   t o   b e   c o p i e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   U S B _ W r i t e P M A ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   * p b U s r B u f ,   u i n t 1 6 _ t   w P M A B u f A d d r ,   u i n t 1 6 _ t   w N B y t e s )  
 {  
     u i n t 3 2 _ t   n   =   ( ( u i n t 3 2 _ t ) w N B y t e s   +   1 U )   > >   1 ;  
     u i n t 3 2 _ t   B a s e A d d r   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ,   t e m p 1 ,   t e m p 2 ;  
     _ _ I O   u i n t 1 6 _ t   * p d w V a l ;  
     u i n t 8 _ t   * p B u f   =   p b U s r B u f ;  
  
     p d w V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( B a s e A d d r   +   0 x 4 0 0 U   +   ( ( u i n t 3 2 _ t ) w P M A B u f A d d r   *   P M A _ A C C E S S ) ) ;  
  
     f o r   ( i   =   n ;   i   ! =   0 U ;   i - - )  
     {  
         t e m p 1   =   * p B u f ;  
         p B u f + + ;  
         t e m p 2   =   t e m p 1   |   ( ( u i n t 1 6 _ t ) ( ( u i n t 1 6 _ t )   * p B u f   < <   8 ) ) ;  
         * p d w V a l   =   ( u i n t 1 6 _ t ) t e m p 2 ;  
         p d w V a l + + ;  
  
 # i f   P M A _ A C C E S S   >   1 U  
         p d w V a l + + ;  
 # e n d i f  
  
         p B u f + + ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   C o p y   d a t a   f r o m   p a c k e t   m e m o r y   a r e a   ( P M A )   t o   u s e r   m e m o r y   b u f f e r  
     *   @ p a r a m       U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m       p b U s r B u f   p o i n t e r   t o   u s e r   m e m o r y   a r e a .  
     *   @ p a r a m       w P M A B u f A d d r   a d d r e s s   i n t o   P M A .  
     *   @ p a r a m       w N B y t e s   n o .   o f   b y t e s   t o   b e   c o p i e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   U S B _ R e a d P M A ( U S B _ T y p e D e f   * U S B x ,   u i n t 8 _ t   * p b U s r B u f ,   u i n t 1 6 _ t   w P M A B u f A d d r ,   u i n t 1 6 _ t   w N B y t e s )  
 {  
     u i n t 3 2 _ t   n   =   ( u i n t 3 2 _ t ) w N B y t e s   > >   1 ;  
     u i n t 3 2 _ t   B a s e A d d r   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ,   t e m p ;  
     _ _ I O   u i n t 1 6 _ t   * p d w V a l ;  
     u i n t 8 _ t   * p B u f   =   p b U s r B u f ;  
  
     p d w V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( B a s e A d d r   +   0 x 4 0 0 U   +   ( ( u i n t 3 2 _ t ) w P M A B u f A d d r   *   P M A _ A C C E S S ) ) ;  
  
     f o r   ( i   =   n ;   i   ! =   0 U ;   i - - )  
     {  
         t e m p   =   * ( _ _ I O   u i n t 1 6 _ t   * ) p d w V a l ;  
         p d w V a l + + ;  
         * p B u f   =   ( u i n t 8 _ t ) ( ( t e m p   > >   0 )   &   0 x F F U ) ;  
         p B u f + + ;  
         * p B u f   =   ( u i n t 8 _ t ) ( ( t e m p   > >   8 )   &   0 x F F U ) ;  
         p B u f + + ;  
  
 # i f   P M A _ A C C E S S   >   1 U  
         p d w V a l + + ;  
 # e n d i f  
     }  
  
     i f   ( ( w N B y t e s   %   2 U )   ! =   0 U )  
     {  
         t e m p   =   * p d w V a l ;  
         * p B u f   =   ( u i n t 8 _ t ) ( ( t e m p   > >   0 )   &   0 x F F U ) ;  
     }  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # e n d i f   / *   d e f i n e d   ( H A L _ P C D _ M O D U L E _ E N A B L E D )   | |   d e f i n e d   ( H A L _ H C D _ M O D U L E _ E N A B L E D )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  